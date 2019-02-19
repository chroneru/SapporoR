
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>

SEXP oneplus_data(SEXP arg_p) {
    if(!IS_NUMERIC(arg_p)) {

        printf("Not numeric, argument must be numeric");

        return R_NilValue;
    }

    int len = length(arg_p);

    for(int i = 0; i < len; i++) {
        NUMERIC_DATA(arg_p)[i]++;
    }

    return arg_p;
}
