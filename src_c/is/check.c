
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP check(SEXP arg_p) {
    int len = length(arg_p);

    if(len != 1) {
        printf("vec is not 1 element.\n");

        return R_NilValue;
    }

    SEXP res_is = PROTECT(NEW_LOGICAL(1));

    LOGICAL_POINTER(res_is)[0] = ( TYPEOF(arg_p) == LGLSXP );

    UNPROTECT(1);

    return res_is;

}
