
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP return_length(SEXP arg_p) {
    SEXP len;
    int len_i;

    len_i = length(arg_p);

    len = PROTECT(NEW_INTEGER(1));

    INTEGER_POINTER(len)[0] = len_i;

    UNPROTECT(1);
    return len;
}
