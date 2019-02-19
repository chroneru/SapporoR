
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP coerce(SEXP arg) {
    SEXP res;

    res = AS_CHARACTER(arg);

    return res;
}
