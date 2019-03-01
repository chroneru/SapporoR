
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>
#include <Rmath.h>

SEXP return_pi() {
    SEXP res;
    res = PROTECT(NEW_NUMERIC(1));

    NUMERIC_POINTER(res)[0] = M_PI;

    UNPROTECT(1);
    return res;
}
