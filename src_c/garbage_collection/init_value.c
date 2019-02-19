
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP init_value() {
    SEXP numVec;

    PROTECT(numVec = NEW_NUMERIC(2));

    NUMERIC_POINTER(numVec)[0] = 1.4;
    NUMERIC_POINTER(numVec)[1] = 1.7;

    UNPROTECT(1);
    return numVec;
}
