
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP set_int(SEXP arg_p) {
    SET_TYPEOF(arg_p, INTSXP);

    return arg_p;
}
