#ifndef DECODER_H_INCLUDED
#define DECODER_H_INCLUDED

#include <stdlib.h>
#include <math.h>

typedef struct deco_12{
    int A;
    int Y0;
    int Y1;
}deco_12;

typedef struct deco_24{
    int A;
    int B;
    int Y0;
    int Y1;
    int Y2;
    int Y3;
}deco_24;

typedef struct deco_38{
    int A;
    int B;
    int C;
    int Y0;
    int Y1;
    int Y2;
    int Y3;
    int Y4;
    int Y5;
    int Y6;
    int Y7;
}deco_38;

typedef enum error_t{
    PASS = 0,
    FAIL = -1,
    ERR_NEGATIVE = -2
}error_t;

error_t getData_2 (deco_12 *values);
error_t getData_3 (deco_24 *values);
error_t getData_4 (deco_38 *values);
void decoder_12(deco_12 *values);
void decoder_24(deco_24 *values);
void decoder_38(deco_38 *values);
#endif // DECODER_H_INCLUDED