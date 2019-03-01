
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>
#include <Rmath.h>

SEXP choice_rnorm() {
    SEXP res;

    res = PROTECT(NEW_NUMERIC(5));

    for(int i = 0; i < 5; i++) {

        REAL(res)[i] = rnorm(0, 1);

    }

    UNPROTECT(1);

   return res;
}
