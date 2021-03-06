% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/tools.R
\name{coef.compCL}
\alias{coef.compCL}
\title{extracts model estimated coefficients from a \code{"compCL"} object.}
\usage{
\method{coef}{compCL}(object, s = NULL, ...)
}
\arguments{
\item{object}{fitted \code{"\link{compCL}"} object.}

\item{s}{value(s) of the penalty parameter \code{lam} at which coefficients
are requested. Default (\code{NULL}) is the entire sequence used to
create the model.}

\item{...}{Not used.}
}
\value{
The coefficients at the requested tuning parameter values in \code{s}.
}
\description{
gets the coefficients at the requested values for \code{lam} from a fitted
\code{"\link{compCL}"} object.
}
\details{
\code{s} is a vector of lambda values at which the coefficients are requested. If \code{s} is not in the
\code{lam} sequence used for fitting the model, the \code{coef} function will use linear
interpolation, so the function should be used with caution.
}
\examples{
Comp_data = comp_Model(n = 50, p = 30)
Comp_fit = compCL(y = Comp_data$y, Z = Comp_data$X.comp, Zc = Comp_data$Zc,
                  intercept = Comp_data$intercept)
coef(Comp_fit)
coef(Comp_fit, s = Comp_fit$lam[50])
coef(Comp_fit, s = c(1, 0.5, 0.1))

}
\references{
Lin, W., Shi, P., Peng, R. and Li, H. (2014) \emph{Variable selection in
regression with compositional covariates},
\href{https://academic.oup.com/biomet/article/101/4/785/1775476}{https://academic.oup.com/biomet/article/101/4/785/1775476}.
\emph{Biometrika} \strong{101} 785-979.
}
\seealso{
\code{\link{compCL}} and \code{\link[=predict.compCL]{predict}},
\code{\link[=plot.compCL]{plot}} and \code{\link[=print.compCL]{print}} methods
for \code{"compCL"} object.
}
\author{
Zhe Sun and Kun Chen
}
