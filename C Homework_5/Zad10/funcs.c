#include "prototypes.h"
#include <math.h>
#include <stdio.h>

unsigned nok(unsigned a, unsigned b) {
    unsigned i;
    unsigned nok;

    if(a > b) {
        for(i = a;;i++) {
            if(i % a == 0 && i % b == 0) {
                nok = i;
                return nok;
            }
        }
    }
    else {
        for(i = b;;i++) {
            if(i % a == 0 && i % b == 0) {
                nok = i;
                return nok;
            }
        }
    }
}

float absolute(float num) {
    return fabs(num);
}

float squareRoot(float num) {
    if(num < 0) {
        num = absolute(num);
    }
    return sqrt(num);
}