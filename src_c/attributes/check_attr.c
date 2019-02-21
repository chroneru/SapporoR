
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP check_attr(SEXP arg_p) {

    return ATTRIB(arg_p);
}
