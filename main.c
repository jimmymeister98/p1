#include <time.h>
#include <stdio.h>
#include <float.h>

int main (void) {

    int i,a;
    float x = FLT_MAX;


    for ( i =2147483641 ; i > 0 ; i++ ) { //zähler von limit int (2³²-7) bis kleiner null
       // printf("i = %d\n",i);

    }


//    for (a = 0; a = a+1; a++){      //Unendlichkeitsschleife um floatmax zu bestimmen (Alternativ FLT_MAX aus float.h benutzen)
        //printf("x = %f\n",x);
 //    x++;

  //  }
    printf("i max = %d\n",i-1);    //da i kleiner null, mit -1 overflow zu größer null generieren
    printf("x max = %f\n",x+1);      //Benutzung von FLT_MAX zur effizienten bestimmung
    return 0;

}