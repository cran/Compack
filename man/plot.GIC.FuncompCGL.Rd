% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/tools.R
\name{plot.GIC.FuncompCGL}
\alias{plot.GIC.FuncompCGL}
\title{Plot the GIC curve produced by \code{"GIC.FuncompCGL"} object.}
\usage{
\method{plot}{GIC.FuncompCGL}(x, xlab = c("log", "-log", "lambda"), k, ...)
}
\arguments{
\item{x}{fitted \code{"\link{GIC.FuncompCGL}"} object.}

\item{xlab}{what is on the X-axis,
\code{"log"} plots against \code{log(lambda)} (default),
\code{"-log"} against \code{-log(lambda)}, and \code{"lambda"} against \code{lambda}.}

\item{k}{value(s) of the degrees of freedom at which GIC cuvre(s) are plotted.
\itemize{
\item if missing (default), GIC curve for \code{k} that is associated
      with \code{"lam.min"} (RED) stored on \code{x} is plotted.
\item if it is an integer vector, specify what set of degrees of freedom
      to plot.
}}

\item{...}{other graphical parameters.}
}
\value{
No return value. Side effect is a base R plot.
}
\description{
Plot the GIC curve as a function of the \code{lam} values used for different
degree of freedom \code{k}.
}
\details{
A GIC curve is produced.
}
\examples{
df_beta = 5
p = 30
beta_C_true = matrix(0, nrow = p, ncol = df_beta)
beta_C_true[1, ] <- c(-0.5, -0.5, -0.5 , -1, -1)
beta_C_true[2, ] <- c(0.8, 0.8,  0.7,  0.6,  0.6)
beta_C_true[3, ] <- c(-0.8, -0.8 , 0.4 , 1 , 1)
beta_C_true[4, ] <- c(0.5, 0.5, -0.6  ,-0.6, -0.6)
Data <- Fcomp_Model(n = 50, p = p, m = 0, intercept = TRUE,
                    SNR = 4, sigma = 3, rho_X = 0.6, rho_T = 0,
                    df_beta = df_beta, n_T = 20, obs_spar = 1, theta.add = FALSE,
                    beta_C = as.vector(t(beta_C_true)))

k_list <- c(4,5)
GIC_m1 <-  GIC.FuncompCGL(y = Data$data$y, X = Data$data$Comp,
                          Zc = Data$data$Zc, intercept = Data$data$intercept,
                          k = k_list)
plot(GIC_m1)
plot(GIC_m1, xlab = "-log", k = k_list)

}
\references{
Sun, Z., Xu, W., Cong, X., Li G. and Chen K. (2020) \emph{Log-contrast regression with
functional compositional predictors: linking preterm infant's gut microbiome trajectories
to neurobehavioral outcome}, \href{https://arxiv.org/abs/1808.02403}{https://arxiv.org/abs/1808.02403}
\emph{Annals of Applied Statistics}
}
\seealso{
\code{\link{GIC.FuncompCGL}} and \code{\link{FuncompCGL}}, and
\code{\link[=predict.GIC.FuncompCGL]{predict}} and
\code{\link[=coef.GIC.FuncompCGL]{coef}} methods for \code{"GIC.FuncompCGL"} object.
}
\author{
Zhe Sun and Kun Chen
}
