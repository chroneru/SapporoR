
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP check_value(SEXP arg_p) {

    int len = length(arg_p);

    SEXP res;

    res = PROTECT(NEW_INTEGER(len));

    for(int i = 0; i < len; i++) {

        INTEGER_POINTER(res)[i] = LOGICAL_VALUE(arg_p);

    }

    UNPROTECT(1);

    return res;
}
