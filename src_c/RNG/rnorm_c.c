
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>
#include <Rmath.h>

SEXP rnorm_c(SEXP arg_p) {
    int times;

    if( length(arg_p) != 1 ) {
        error("argument's length is not 1");
    }

    if( IS_INTEGER(arg_p) ) {
        times = INTEGER_POINTER(arg_p)[0];
    } else if( IS_NUMERIC(arg_p) ) {
        times = (int)NUMERIC_POINTER(arg_p)[0];
    } else {
        error("argument is not integer, or numeric");
    }

    SEXP res;

    res = PROTECT( NEW_NUMERIC(times) );

    GetRNGstate();

    for(int i = 0; i < times; i++) {

        REAL(res)[i] = rnorm(0, 1);

    }

    PutRNGstate();

    UNPROTECT(1);
    return res;

}
