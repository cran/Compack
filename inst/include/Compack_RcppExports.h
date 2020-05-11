// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_Compack_RCPPEXPORTS_H_GEN_
#define RCPP_Compack_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace Compack {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("Compack", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("Compack", "_Compack_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in Compack");
            }
        }
    }

    inline Rcpp::List ALM_GMD(arma::vec y, arma::mat Z, arma::mat Zc, arma::mat Zc_proj, arma::vec beta, arma::vec lambda, arma::vec pf, int dfmax, int pfmax, arma::mat A, arma::vec b, arma::umat group_index, int inner_maxiter, int outer_maxiter, double inner_eps, double outer_eps, double mu_ratio, double u_ini, double tol) {
        typedef SEXP(*Ptr_ALM_GMD)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ALM_GMD p_ALM_GMD = NULL;
        if (p_ALM_GMD == NULL) {
            validateSignature("Rcpp::List(*ALM_GMD)(arma::vec,arma::mat,arma::mat,arma::mat,arma::vec,arma::vec,arma::vec,int,int,arma::mat,arma::vec,arma::umat,int,int,double,double,double,double,double)");
            p_ALM_GMD = (Ptr_ALM_GMD)R_GetCCallable("Compack", "_Compack_ALM_GMD");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ALM_GMD(Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(Z)), Shield<SEXP>(Rcpp::wrap(Zc)), Shield<SEXP>(Rcpp::wrap(Zc_proj)), Shield<SEXP>(Rcpp::wrap(beta)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(pf)), Shield<SEXP>(Rcpp::wrap(dfmax)), Shield<SEXP>(Rcpp::wrap(pfmax)), Shield<SEXP>(Rcpp::wrap(A)), Shield<SEXP>(Rcpp::wrap(b)), Shield<SEXP>(Rcpp::wrap(group_index)), Shield<SEXP>(Rcpp::wrap(inner_maxiter)), Shield<SEXP>(Rcpp::wrap(outer_maxiter)), Shield<SEXP>(Rcpp::wrap(inner_eps)), Shield<SEXP>(Rcpp::wrap(outer_eps)), Shield<SEXP>(Rcpp::wrap(mu_ratio)), Shield<SEXP>(Rcpp::wrap(u_ini)), Shield<SEXP>(Rcpp::wrap(tol)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List ALM_CD(arma::vec y, arma::mat Z, arma::mat Zc, arma::mat Zc_proj, arma::vec beta, arma::vec lambda, arma::vec pf, double b, arma::vec A, int dfmax, int pfmax, int inner_maxiter, int outer_maxiter, double inner_eps, double outer_eps, double mu_ratio, double u_ini, double tol) {
        typedef SEXP(*Ptr_ALM_CD)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ALM_CD p_ALM_CD = NULL;
        if (p_ALM_CD == NULL) {
            validateSignature("Rcpp::List(*ALM_CD)(arma::vec,arma::mat,arma::mat,arma::mat,arma::vec,arma::vec,arma::vec,double,arma::vec,int,int,int,int,double,double,double,double,double)");
            p_ALM_CD = (Ptr_ALM_CD)R_GetCCallable("Compack", "_Compack_ALM_CD");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ALM_CD(Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(Z)), Shield<SEXP>(Rcpp::wrap(Zc)), Shield<SEXP>(Rcpp::wrap(Zc_proj)), Shield<SEXP>(Rcpp::wrap(beta)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(pf)), Shield<SEXP>(Rcpp::wrap(b)), Shield<SEXP>(Rcpp::wrap(A)), Shield<SEXP>(Rcpp::wrap(dfmax)), Shield<SEXP>(Rcpp::wrap(pfmax)), Shield<SEXP>(Rcpp::wrap(inner_maxiter)), Shield<SEXP>(Rcpp::wrap(outer_maxiter)), Shield<SEXP>(Rcpp::wrap(inner_eps)), Shield<SEXP>(Rcpp::wrap(outer_eps)), Shield<SEXP>(Rcpp::wrap(mu_ratio)), Shield<SEXP>(Rcpp::wrap(u_ini)), Shield<SEXP>(Rcpp::wrap(tol)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List ALM_CD_comp(arma::vec y, arma::mat Z, arma::mat Zc, arma::mat Zc_proj, arma::vec beta, arma::vec lambda, arma::vec pf, int dfmax, int pfmax, int inner_maxiter, int outer_maxiter, double inner_eps, double outer_eps, double mu_ratio, double u_ini, double tol) {
        typedef SEXP(*Ptr_ALM_CD_comp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ALM_CD_comp p_ALM_CD_comp = NULL;
        if (p_ALM_CD_comp == NULL) {
            validateSignature("Rcpp::List(*ALM_CD_comp)(arma::vec,arma::mat,arma::mat,arma::mat,arma::vec,arma::vec,arma::vec,int,int,int,int,double,double,double,double,double)");
            p_ALM_CD_comp = (Ptr_ALM_CD_comp)R_GetCCallable("Compack", "_Compack_ALM_CD_comp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ALM_CD_comp(Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(Z)), Shield<SEXP>(Rcpp::wrap(Zc)), Shield<SEXP>(Rcpp::wrap(Zc_proj)), Shield<SEXP>(Rcpp::wrap(beta)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(pf)), Shield<SEXP>(Rcpp::wrap(dfmax)), Shield<SEXP>(Rcpp::wrap(pfmax)), Shield<SEXP>(Rcpp::wrap(inner_maxiter)), Shield<SEXP>(Rcpp::wrap(outer_maxiter)), Shield<SEXP>(Rcpp::wrap(inner_eps)), Shield<SEXP>(Rcpp::wrap(outer_eps)), Shield<SEXP>(Rcpp::wrap(mu_ratio)), Shield<SEXP>(Rcpp::wrap(u_ini)), Shield<SEXP>(Rcpp::wrap(tol)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

}

#endif // RCPP_Compack_RCPPEXPORTS_H_GEN_