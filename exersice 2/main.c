#include <stdio.h>
#include <stdlib.h>

int main()
{
   float num1 ,num2 ;
    printf("cette programes permit de comparer deux entier\n ");
    printf("taper le numuro 1 \n");
    scanf("%f",&num1);
     printf("taper le numuro 2 \n");
    scanf("%f",&num2);
    if(num1>num2){
            printf("la numuro plus grande est : %.2f",num1);
    }
    else if (num2>num1){
     printf("la numuro plus grande est : %.2f",num2);
    }else if (num1 =num2){
    printf("les deux numuro sont egalle ");
    }
    return 0;
}
