#include <stdio.h>
#include <stdlib.h>

int main()
{
    float MAD,euro,dollar;
    int F;
    printf("bojour cette programes permet de convertir la  MAD en  $ et euro \n");
    printf("taper ton argent avec MAD: \n");
    scanf("%f",&MAD);
    printf("Choisissez la devise vers laquelle vous souhaitez transferer votre argent\n ");
    printf("1_euro\n 2_dollar\n :");
    scanf("%d",&F);
    switch (F){
    case 1:
         euro = MAD*0.096;
        printf("ton argent avec euro est : %.2f .\n",euro);
        break;
    case 2 :
        dollar = MAD * 0.11;
        printf("ton argent avec dollar est : %.2f\n",dollar);
        break;
    default:
        printf("cette programe convertir ton argent vers dollar et euro veuiller taper 1 pour euro et 2 pour dollar\n ");
        }
    return 0;
}
