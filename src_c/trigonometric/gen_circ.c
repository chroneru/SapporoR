
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>
#include <Rmath.h>

SEXP gen_circ() {
    int len = 100;

    SEXP circ_x, circ_y;
    int circ_row = 100;
    int circ_col = 2;

    double start = -M_PI;
    //double fin = M_PI;
    double plus = 2 * M_PI / 99;


    SEXP circ;
    circ = PROTECT( allocMatrix(REALSXP, circ_row, circ_col) );

    for(int i = 0; i < len; i++) {

        REAL(circ)[i] = sin(start);
        REAL(circ)[i + 100] = cos(start);

        start = start + plus;
    }




    UNPROTECT(1);
    return circ;
}
