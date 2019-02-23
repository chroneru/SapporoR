
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP init_msg(SEXP arg_p) {
    SEXP inited;

    inited = PROTECT(NEW_CHARACTER(1));

    CHARACTER_POINTER(inited)[0] = mkChar("This object is initialized in C.");

    UNPROTECT(1);
    return inited;
}
