#include "decoder.h"
#include"encoder.h"
#include<stdio.h>
int main(){
    deco_12 data1;
    deco_24 data2;
    deco_38 data3;
    enco_21 data4;
    enco_42 data5;
    enco_83 data6;
    char ch = 'C';
    printf ("\nEnter E to compute encoders \n"
             "------------------------------------------------------------------------\n"
             "Enter D to compute decoders \n"
             "------------------------------------------------------------------------\n");
    scanf("%s",&ch);
    if (ch == 'C' || ch == 'c'){
        printf("\nThe following operations are provided\n"
                  "-----------------------------------------------\n"
                  "                         | a : 1:2 decoder\n"
                  "                         | b : 2:4 decoder\n"
                  "                         | c : 3:8 decoder\n");

        scanf("%s",&ch);
        if (ch == 'a'){
            getData_2 (&data1);
            decoder_12(&data1);
        }
        else if (ch == 'b'){
            getData_3 (&data2);
            decoder_24 (&data2);
        }
        else if (ch == 'c')
        {
            getData_4 (&data3);
            decoder_38 (&data3);
        }
    }
    else if(ch=='d'||ch=='D')
    {
         printf("\nThe following operations are provided\n"
                  "-----------------------------------------------\n"
                  "                         | a : 2:1 encoder\n"
                  "                         | b : 4:2 encoder\n"
                  "                         | c : 8:3 encoder\n");
        scanf("%s",&ch);
        if (ch == 'a'){
            getData_5 (&data4);
            encoder_21(&data4);
        }
        else if (ch == 'b'){
            getData_6 (&data5);
            encoder_42 (&data5);
        }
        else if (ch == 'c')
        {
            getData_7 (&data6);
            encoder_83 (&data6);
        }


    }

}