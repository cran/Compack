% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/tools.R
\name{plot.cv.compCL}
\alias{plot.cv.compCL}
\title{Plot the cross-validation curve produced by \code{"cv.compCL"} object.}
\usage{
\method{plot}{cv.compCL}(x, xlab = c("log", "-log", "lambda"), trim = FALSE, ...)
}
\arguments{
\item{x}{fitted \code{"cv.compCL"} object.}

\item{xlab}{what is on the X-axis,
\code{"log"} plots against \code{log(lambda)} (default),
\code{"-log"} against \code{-log(lambda)}, and \code{"lambda"} against \code{lambda}.}

\item{trim}{logical; whether to use the trimmed result.
Default is \code{FALSE}.}

\item{...}{other graphical parameters.}
}
\value{
No return value. Side effect is a base R plot.
}
\description{
Plot the cross-validation curve with its upper and lower standard deviation
curves.
}
\details{
A cross-validation curve is produced.
}
\examples{
p = 30
n = 50
beta = c(1, -0.8, 0.6, 0, 0, -1.5, -0.5, 1.2)
beta = c(beta, rep(0, times = p - length(beta)))
Comp_data = comp_Model(n = n, p = p, intercept = FALSE)
cvm1 <- cv.compCL(y = Comp_data$y, Z = Comp_data$X.comp,
                  Zc = Comp_data$Zc, intercept = Comp_data$intercept)
plot(cvm1)
plot(cvm1, xlab = "-log")

}
\references{
Lin, W., Shi, P., Peng, R. and Li, H. (2014) \emph{Variable selection in
regression with compositional covariates},
\href{https://academic.oup.com/biomet/article/101/4/785/1775476}{https://academic.oup.com/biomet/article/101/4/785/1775476}.
\emph{Biometrika} \strong{101} 785-979.
}
\seealso{
\code{\link{cv.compCL}} and \code{\link{compCL}},
and \code{\link[=coef.cv.compCL]{coef}} and \code{\link[=plot.cv.compCL]{plot}} methods
for \code{"cv.compCL"} object.
}
\author{
Zhe Sun and Kun Chen
}
