// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/bigReg.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// XWXMatrixW
Rcpp::List XWXMatrixW(arma::mat X, arma::mat y, arma::vec W);
static SEXP _bigReg_XWXMatrixW_try(SEXP XSEXP, SEXP ySEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(XWXMatrixW(X, y, W));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bigReg_XWXMatrixW(SEXP XSEXP, SEXP ySEXP, SEXP WSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bigReg_XWXMatrixW_try(XSEXP, ySEXP, WSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// SVD
Rcpp::List SVD(Rcpp::List out, double epsilon);
static SEXP _bigReg_SVD_try(SEXP outSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type out(outSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(SVD(out, epsilon));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bigReg_SVD(SEXP outSEXP, SEXP epsilonSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bigReg_SVD_try(outSEXP, epsilonSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// XWXMatrix
Rcpp::List XWXMatrix(arma::mat X, arma::mat y);
static SEXP _bigReg_XWXMatrix_try(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(XWXMatrix(X, y));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bigReg_XWXMatrix(SEXP XSEXP, SEXP ySEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bigReg_XWXMatrix_try(XSEXP, ySEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// writeNumericVector
SEXP writeNumericVector(NumericVector v, std::string filePath);
RcppExport SEXP _bigReg_writeNumericVector(SEXP vSEXP, SEXP filePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< std::string >::type filePath(filePathSEXP);
    rcpp_result_gen = Rcpp::wrap(writeNumericVector(v, filePath));
    return rcpp_result_gen;
END_RCPP
}
// readNumericVector
SEXP readNumericVector(int size, std::string filePath);
RcppExport SEXP _bigReg_readNumericVector(SEXP sizeSEXP, SEXP filePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type filePath(filePathSEXP);
    rcpp_result_gen = Rcpp::wrap(readNumericVector(size, filePath));
    return rcpp_result_gen;
END_RCPP
}
// CreateFactor
SEXP CreateFactor(NumericVector x, CharacterVector levels);
RcppExport SEXP _bigReg_CreateFactor(SEXP xSEXP, SEXP levelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type levels(levelsSEXP);
    rcpp_result_gen = Rcpp::wrap(CreateFactor(x, levels));
    return rcpp_result_gen;
END_RCPP
}
// mySeq
IntegerVector mySeq(int start, int end);
RcppExport SEXP _bigReg_mySeq(SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(mySeq(start, end));
    return rcpp_result_gen;
END_RCPP
}
// myIn
bool myIn(int x, NumericVector y);
RcppExport SEXP _bigReg_myIn(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(myIn(x, y));
    return rcpp_result_gen;
END_RCPP
}
// asInteger
IntegerVector asInteger(NumericVector x);
RcppExport SEXP _bigReg_asInteger(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(asInteger(x));
    return rcpp_result_gen;
END_RCPP
}
// read_df_block
SEXP read_df_block(double size, std::string filePath, List df, double ncol, List factors, NumericVector factor_indices);
RcppExport SEXP _bigReg_read_df_block(SEXP sizeSEXP, SEXP filePathSEXP, SEXP dfSEXP, SEXP ncolSEXP, SEXP factorsSEXP, SEXP factor_indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type filePath(filePathSEXP);
    Rcpp::traits::input_parameter< List >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< List >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type factor_indices(factor_indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(read_df_block(size, filePath, df, ncol, factors, factor_indices));
    return rcpp_result_gen;
END_RCPP
}
// read_df_blocks
SEXP read_df_blocks(NumericVector size, CharacterVector filePaths, List df, double ncols, List factors, NumericVector factor_indices);
RcppExport SEXP _bigReg_read_df_blocks(SEXP sizeSEXP, SEXP filePathsSEXP, SEXP dfSEXP, SEXP ncolsSEXP, SEXP factorsSEXP, SEXP factor_indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type filePaths(filePathsSEXP);
    Rcpp::traits::input_parameter< List >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< List >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type factor_indices(factor_indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(read_df_blocks(size, filePaths, df, ncols, factors, factor_indices));
    return rcpp_result_gen;
END_RCPP
}
// write_numeric_vector
SEXP write_numeric_vector(arma::vec v, std::string filePath);
RcppExport SEXP _bigReg_write_numeric_vector(SEXP vSEXP, SEXP filePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type v(vSEXP);
    Rcpp::traits::input_parameter< std::string >::type filePath(filePathSEXP);
    rcpp_result_gen = Rcpp::wrap(write_numeric_vector(v, filePath));
    return rcpp_result_gen;
END_RCPP
}
// r_bind
SEXP r_bind(arma::mat x, arma::mat y);
RcppExport SEXP _bigReg_r_bind(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(r_bind(x, y));
    return rcpp_result_gen;
END_RCPP
}
// read_matrix_block
SEXP read_matrix_block(std::string filePath, double size, double ncol);
RcppExport SEXP _bigReg_read_matrix_block(SEXP filePathSEXP, SEXP sizeSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filePath(filePathSEXP);
    Rcpp::traits::input_parameter< double >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(read_matrix_block(filePath, size, ncol));
    return rcpp_result_gen;
END_RCPP
}
// read_matrix_blocks
SEXP read_matrix_blocks(CharacterVector filePaths, NumericVector size, double ncols);
RcppExport SEXP _bigReg_read_matrix_blocks(SEXP filePathsSEXP, SEXP sizeSEXP, SEXP ncolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type filePaths(filePathsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type ncols(ncolsSEXP);
    rcpp_result_gen = Rcpp::wrap(read_matrix_blocks(filePaths, size, ncols));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _bigReg_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Rcpp::List(*XWXMatrixW)(arma::mat,arma::mat,arma::vec)");
        signatures.insert("Rcpp::List(*SVD)(Rcpp::List,double)");
        signatures.insert("Rcpp::List(*XWXMatrix)(arma::mat,arma::mat)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _bigReg_RcppExport_registerCCallable() { 
    R_RegisterCCallable("bigReg", "_bigReg_XWXMatrixW", (DL_FUNC)_bigReg_XWXMatrixW_try);
    R_RegisterCCallable("bigReg", "_bigReg_SVD", (DL_FUNC)_bigReg_SVD_try);
    R_RegisterCCallable("bigReg", "_bigReg_XWXMatrix", (DL_FUNC)_bigReg_XWXMatrix_try);
    R_RegisterCCallable("bigReg", "_bigReg_RcppExport_validate", (DL_FUNC)_bigReg_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_bigReg_XWXMatrixW", (DL_FUNC) &_bigReg_XWXMatrixW, 3},
    {"_bigReg_SVD", (DL_FUNC) &_bigReg_SVD, 2},
    {"_bigReg_XWXMatrix", (DL_FUNC) &_bigReg_XWXMatrix, 2},
    {"_bigReg_writeNumericVector", (DL_FUNC) &_bigReg_writeNumericVector, 2},
    {"_bigReg_readNumericVector", (DL_FUNC) &_bigReg_readNumericVector, 2},
    {"_bigReg_CreateFactor", (DL_FUNC) &_bigReg_CreateFactor, 2},
    {"_bigReg_mySeq", (DL_FUNC) &_bigReg_mySeq, 2},
    {"_bigReg_myIn", (DL_FUNC) &_bigReg_myIn, 2},
    {"_bigReg_asInteger", (DL_FUNC) &_bigReg_asInteger, 1},
    {"_bigReg_read_df_block", (DL_FUNC) &_bigReg_read_df_block, 6},
    {"_bigReg_read_df_blocks", (DL_FUNC) &_bigReg_read_df_blocks, 6},
    {"_bigReg_write_numeric_vector", (DL_FUNC) &_bigReg_write_numeric_vector, 2},
    {"_bigReg_r_bind", (DL_FUNC) &_bigReg_r_bind, 2},
    {"_bigReg_read_matrix_block", (DL_FUNC) &_bigReg_read_matrix_block, 3},
    {"_bigReg_read_matrix_blocks", (DL_FUNC) &_bigReg_read_matrix_blocks, 3},
    {"_bigReg_RcppExport_registerCCallable", (DL_FUNC) &_bigReg_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_bigReg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
