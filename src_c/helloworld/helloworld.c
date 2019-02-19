#include <R.h>
#include <Rdefines.h>
#include <Rinternals.h>

SEXP hello() {
    printf("Hello World!");

    return(R_NilValue);
}
