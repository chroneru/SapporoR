
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>
#include <Rmath.h>

SEXP pH(SEXP arg_p) {
    if(!(IS_NUMERIC(arg_p))) {
        error("argument is not numeric");
    }

    if(IS_INTEGER(arg_p)) {
        arg_p = AS_NUMERIC(arg_p);
    }

    SEXP res;

    int len = length(arg_p);

    res = PROTECT(NEW_NUMERIC(len));

    int i = 0;
    for(i; i < len; i++) {

        REAL(res)[i] = - log10(REAL(arg_p)[i]);

    }

    UNPROTECT(1);
    return res;
}
