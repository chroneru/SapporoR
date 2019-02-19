
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP return_value() {
    SEXP str_p;

    PROTECT(str_p = NEW_CHARACTER(1));

    SET_STRING_ELT(str_p, 0, mkChar("Hello World"));

    UNPROTECT(1);
    return str_p;
}
