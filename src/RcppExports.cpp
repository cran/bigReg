// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/bigReg.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// XWXMatrixW
Rcpp::List XWXMatrixW(arma::mat X, arma::mat y, arma::vec W);
static SEXP bigReg_XWXMatrixW_try(SEXP XSEXP, SEXP ySEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type W(WSEXP);
    __result = Rcpp::wrap(XWXMatrixW(X, y, W));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP bigReg_XWXMatrixW(SEXP XSEXP, SEXP ySEXP, SEXP WSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(bigReg_XWXMatrixW_try(XSEXP, ySEXP, WSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// SVD
Rcpp::List SVD(Rcpp::List out, double epsilon);
static SEXP bigReg_SVD_try(SEXP outSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< Rcpp::List >::type out(outSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    __result = Rcpp::wrap(SVD(out, epsilon));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP bigReg_SVD(SEXP outSEXP, SEXP epsilonSEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(bigReg_SVD_try(outSEXP, epsilonSEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// XWXMatrix
Rcpp::List XWXMatrix(arma::mat X, arma::mat y);
static SEXP bigReg_XWXMatrix_try(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    __result = Rcpp::wrap(XWXMatrix(X, y));
    return __result;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP bigReg_XWXMatrix(SEXP XSEXP, SEXP ySEXP) {
    SEXP __result;
    {
        Rcpp::RNGScope __rngScope;
        __result = PROTECT(bigReg_XWXMatrix_try(XSEXP, ySEXP));
    }
    Rboolean __isInterrupt = Rf_inherits(__result, "interrupted-error");
    if (__isInterrupt) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean __isError = Rf_inherits(__result, "try-error");
    if (__isError) {
        SEXP __msgSEXP = Rf_asChar(__result);
        UNPROTECT(1);
        Rf_error(CHAR(__msgSEXP));
    }
    UNPROTECT(1);
    return __result;
}
// writeNumericVector
SEXP writeNumericVector(NumericVector v, std::string filePath);
RcppExport SEXP bigReg_writeNumericVector(SEXP vSEXP, SEXP filePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< std::string >::type filePath(filePathSEXP);
    __result = Rcpp::wrap(writeNumericVector(v, filePath));
    return __result;
END_RCPP
}
// readNumericVector
SEXP readNumericVector(int size, std::string filePath);
RcppExport SEXP bigReg_readNumericVector(SEXP sizeSEXP, SEXP filePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type filePath(filePathSEXP);
    __result = Rcpp::wrap(readNumericVector(size, filePath));
    return __result;
END_RCPP
}
// CreateFactor
SEXP CreateFactor(NumericVector x, CharacterVector levels);
RcppExport SEXP bigReg_CreateFactor(SEXP xSEXP, SEXP levelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type levels(levelsSEXP);
    __result = Rcpp::wrap(CreateFactor(x, levels));
    return __result;
END_RCPP
}
// mySeq
IntegerVector mySeq(int start, int end);
RcppExport SEXP bigReg_mySeq(SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    __result = Rcpp::wrap(mySeq(start, end));
    return __result;
END_RCPP
}
// myIn
bool myIn(int x, NumericVector y);
RcppExport SEXP bigReg_myIn(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    __result = Rcpp::wrap(myIn(x, y));
    return __result;
END_RCPP
}
// asInteger
IntegerVector asInteger(NumericVector x);
RcppExport SEXP bigReg_asInteger(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(asInteger(x));
    return __result;
END_RCPP
}
// read_df_block
SEXP read_df_block(double size, std::string filePath, List df, double ncol, List factors, NumericVector factor_indices);
RcppExport SEXP bigReg_read_df_block(SEXP sizeSEXP, SEXP filePathSEXP, SEXP dfSEXP, SEXP ncolSEXP, SEXP factorsSEXP, SEXP factor_indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type filePath(filePathSEXP);
    Rcpp::traits::input_parameter< List >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< List >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type factor_indices(factor_indicesSEXP);
    __result = Rcpp::wrap(read_df_block(size, filePath, df, ncol, factors, factor_indices));
    return __result;
END_RCPP
}
// read_df_blocks
SEXP read_df_blocks(NumericVector size, CharacterVector filePaths, List df, double ncols, List factors, NumericVector factor_indices);
RcppExport SEXP bigReg_read_df_blocks(SEXP sizeSEXP, SEXP filePathsSEXP, SEXP dfSEXP, SEXP ncolsSEXP, SEXP factorsSEXP, SEXP factor_indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type filePaths(filePathsSEXP);
    Rcpp::traits::input_parameter< List >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< List >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type factor_indices(factor_indicesSEXP);
    __result = Rcpp::wrap(read_df_blocks(size, filePaths, df, ncols, factors, factor_indices));
    return __result;
END_RCPP
}
// write_numeric_vector
SEXP write_numeric_vector(arma::vec v, std::string filePath);
RcppExport SEXP bigReg_write_numeric_vector(SEXP vSEXP, SEXP filePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type v(vSEXP);
    Rcpp::traits::input_parameter< std::string >::type filePath(filePathSEXP);
    __result = Rcpp::wrap(write_numeric_vector(v, filePath));
    return __result;
END_RCPP
}
// r_bind
SEXP r_bind(arma::mat x, arma::mat y);
RcppExport SEXP bigReg_r_bind(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    __result = Rcpp::wrap(r_bind(x, y));
    return __result;
END_RCPP
}
// read_matrix_block
SEXP read_matrix_block(std::string filePath, double size, double ncol);
RcppExport SEXP bigReg_read_matrix_block(SEXP filePathSEXP, SEXP sizeSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type filePath(filePathSEXP);
    Rcpp::traits::input_parameter< double >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type ncol(ncolSEXP);
    __result = Rcpp::wrap(read_matrix_block(filePath, size, ncol));
    return __result;
END_RCPP
}
// read_matrix_blocks
SEXP read_matrix_blocks(CharacterVector filePaths, NumericVector size, double ncols);
RcppExport SEXP bigReg_read_matrix_blocks(SEXP filePathsSEXP, SEXP sizeSEXP, SEXP ncolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type filePaths(filePathsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type ncols(ncolsSEXP);
    __result = Rcpp::wrap(read_matrix_blocks(filePaths, size, ncols));
    return __result;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int bigReg_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Rcpp::List(*XWXMatrixW)(arma::mat,arma::mat,arma::vec)");
        signatures.insert("Rcpp::List(*SVD)(Rcpp::List,double)");
        signatures.insert("Rcpp::List(*XWXMatrix)(arma::mat,arma::mat)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP bigReg_RcppExport_registerCCallable() { 
    R_RegisterCCallable("bigReg", "bigReg_XWXMatrixW", (DL_FUNC)bigReg_XWXMatrixW_try);
    R_RegisterCCallable("bigReg", "bigReg_SVD", (DL_FUNC)bigReg_SVD_try);
    R_RegisterCCallable("bigReg", "bigReg_XWXMatrix", (DL_FUNC)bigReg_XWXMatrix_try);
    R_RegisterCCallable("bigReg", "bigReg_RcppExport_validate", (DL_FUNC)bigReg_RcppExport_validate);
    return R_NilValue;
}