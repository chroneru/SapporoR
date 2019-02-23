
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP return_cr(SEXP arg_p) {
    SEXP res;

    res = PROTECT(NEW_INTEGER(2));

    int row, col;

    row = nrows(arg_p);
    col = ncols(arg_p);

    INTEGER_POINTER(res)[0] = row;
    INTEGER_POINTER(res)[1] = col;

    UNPROTECT(1);
    return res;
}
