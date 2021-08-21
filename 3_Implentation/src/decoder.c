#include "conversion.h"
#include<stdio.h>

error_t getData_2 (deco_12 *values){
    FILE *fp = NULL;
    fp = fopen ("decoder.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL;
    }
    else
    {
    for (int i=0; i<1; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                values->A = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getData_3 (deco_24 *values){
    FILE *fp = NULL;
    fp = fopen ("decoder.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL;
    }
    else
    {
    for (int i=0; i<2; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                values->A = atoi(str);
                break;
            case 1:
                values->B = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

error_t getData_4 (deco_38 *values){
    FILE *fp = NULL;
    fp = fopen ("decoder.txt" , "r");
    if (fp == NULL)
    {
       printf("File not found!");
       return FAIL;
    }
    else
    {
    for (int i=0; i<3; i++){
        char str[100];
        fgets (str, 60, fp);
        switch (i)
        {
            case 0:
                values->A = atoi(str);
                break;
            case 1:
                values->B = atoi(str);
                break;
            case 2:
                values->C = atoi(str);
                break;
        }
    }
    fclose(fp);
    }
    return 0;
}

void decoder_12 (deco_12 *values){
    values->Y0 = !(values->A);
    values->Y1 = values->A;
    printf("Y0 = %d Y1 = %d",values->Y0,values->Y1);
}

void decoder_24 (deco_24 *values){
    values->Y0 = !(values->A) & (!(values->B)) ;
    values->Y1 = !(values->A) & (values->B) ;
    values->Y2 = (values->A) & (!(values->B)) ;
    values->Y3 = (values->A) & (values->B) ;
    printf("Y0 = %d Y1 = %d Y2 = %d Y3 = %d",values->Y0,values->Y1,values->Y2,values->Y3);
}

void decoder_38 (deco_38 *values){
    values->Y0 = !(values->A) & (!(values->B)) & (!(values->C));
    values->Y1 = !(values->A) & (!(values->B)) & (values->C);
    values->Y2 = !(values->A) & (values->B) & (!(values->C));
    values->Y3 = !(values->A) & (values->B) & (values->C);
    values->Y4 = (values->A) & (!(values->B)) & (!(values->C));
    values->Y5 = (values->A) & (!(values->B)) & (values->C);
    values->Y6 = (values->A) & (values->B) & (!(values->C));
    values->Y7 = (values->A) & (values->B) & (values->C);   
    printf("Y0 = %d Y1 = %d Y2 = %d Y3 = %d Y4 = %d Y5 = %d Y6 = %d Y7 = %d",values->Y0,values->Y1,values->Y2,values->Y3,values->Y4,values->Y5,values->Y6,values->Y7);
}