#include <stdio.h>
#include <stdlib.h>





int main()
{
    int age;
  char  B[6][40] ;
    B[0][40]='bebe';
    B[1][40]='enfant';
    B[2][40]='Adolescent';
   // B[3]="jeune";
    //B[4]="mature";
    //B[5]="vieux";
int A [300]={3,15,20,35,65,66};
printf("taper votre age \n");
scanf("%d",&age);
printf("%c",B[0]);
 int i=0;
while( age>0 ){
age= age - A[i];
i++;
}

return 0;
}

