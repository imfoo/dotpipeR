\name{cacheMethodDigest}
\alias{cacheMethodDigest}
\alias{cacheMethodPipelineDigest}
\title{Match a pipeline node to a caching path in the filesystem}
\description{Evaluate a pipeline node .}
\usage{
cacheMethodPipelineDigest(pipeline, nodes, cachedir=tempdir(), envir=parent.frame(), context = NULL)
cacheMethodDigest(pipeline, nodes, cachedir=tempdir(), envir=parent.frame(), context = NULL)
}
\arguments{
  \item{pipeline}{An object of class Pipeline, such as a Pipeline generated by read.Pipeline.}
  \item{nodes}{A character vector, specifying a subset of nodes(pipeline) for which file paths to use for caching purposes will be computed.}
  \item{cachedir}{A character vector giving a directory to which cached data images are saved and from which cached data images are loaded}
  \item{envir}{An environment where the function associated to each node can be found}
  \item{context}{An R object that represents the context in which the Pipeline is being evaluated}
}
\value{
A list, whose first element is a (possibly modified) Pipeline object, and whose second element is a character vector of file paths associated to the specified nodes, which may be used to store and retrieve cached data for such nodes.
}
\note{
  If a cache method needs to use evaluated pipeline data from parent nodes in order to calculate the cache path, it is inefficient to reload every node every time the cache method is called. In order to provide a mechanisms for maintaining state between calls, the "pipeline" attribute of the return value can be set to the updated pipeline, and it will be used for the next call to the cache method. 
}
\details{
In the context of DOTpipeR, the cacheMethod function matches the nodes within the Pipeline object to file paths that can be used to store and retrieve cached data for such nodes.
This function is used during pipeline node evaluation by eval.PipelineNode, both to save evaluated node data and to load previously saved (cached) data.

cacheMethodDigest is the default cacheMethod function. Each caching path generated by this function is a md5 digest of an object built by combining the node's evaluator, i.e. function object or expression, with all of the data from the parent nodes, along with the context object. This method thus needs to access data from parent nodes, and in fact all ancestor nodes, before computing the caching path, and it does this by calling itself recursively and loading in the parent data on each recursion. For cacheMethodDigest, extra arguments (passed via '...') are passed on to the loadCache function. The logical argument 'throwerror' specifies whether a failure to load the cache for a node will throw an error.

cacheMethodPipelineDigest matches nodes to cache file paths based on the parameters and structure of the pipeline, but (unlike cacheMethodDigest) without considering the values of any of the ancestor nodes. Each path generated by this function is a md5 digest of the given node's evaluator combined with the DOT data for the entire pipeline, along with the context object. This method thus does not need to access data from parent nodes, in order to compute the caching paths, so it can be more efficient for loading data from individual nodes; however, it has the following drawback: if the values of parent nodes change without a change in the DOT code of the pipeline itself, cached data computed using the old values will still be loaded instead of reevaluating the node using the new values of the parent nodes.

}
\author{Christopher Durden}
\keyword{pipeline}
\seealso{read.Pipeline, eval.Pipeline}
