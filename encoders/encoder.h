#ifndef ENCODER_H_INCLUDED
#define ENCODER_H_INCLUDED

#include <stdlib.h>
#include <math.h>

typedef struct enco_21{
    int X0;
    int X1;
    int Y0;
}enco_21;

typedef struct enco_42{
    int X0;
    int X1;
    int X2;
    int X3;
    int Y0;
    int Y1;
}enco_42;

typedef struct enco_83{
    int X0;
    int X1;
    int X2;
    int X3;
    int X4;
    int X5;
    int X6;
    int X7;
    int Y0;
    int Y1;
    int Y2;
}enco_83;

typedef enum error_t1{
    PASS1 = 0,
    FAIL1 = -1,
    ERR_NEGATIVE1 = -2
}error_t1;

error_t1 getData_5 (enco_21 *values);
error_t1 getData_6 (enco_42 *values);
error_t1 getData_7 (enco_83 *values);
void encoder_21(enco_21 *values);
void encoder_42(enco_42 *values);
void encoder_83(enco_83 *values);
#endif // ENCODER_H_INCLUDED