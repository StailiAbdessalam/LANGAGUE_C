#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
    int CH ;
printf("cette programe pour test ton competance a les tableaux de multiplication \n ");
printf("s'il veux plait choisi votre niveau :\n");
printf("enter de le niveau 1 \t\tla sortie de le niveau 20\n");
scanf("%d",&CH);
while(CH<1 || CH>20){
printf("s'il veux plait choisi le niveau entre 1 et 20\n");
scanf("%d",&CH);
}
next :
multplication(CH);
int next ;
printf("#################################################\n");
printf("if tu as apprende cette niveau taper 1 pour avancer a le next niveau \n");
scanf("%d",&next);
if (next==1){
        int A,B,C;
        printf("pour avancer a le next niveau reponser sur les trois question :\n");
printf("%d * %d = ?\n",CH,7);
scanf("%d",&A);
printf("%d * %d = ?\n",CH,9);
scanf("%d",&B);
printf("%d * %d = ?\n",CH,4);
scanf("%d",&C);
    if(A==7*CH && B==CH*9 && C==CH*4){
            system("cls");
    printf("#########################   bravo tu as gagner cette etape  ###################\n");
    CH++;
    goto next;
    }else{
        system("cls");
        printf("#################################################\n");
    printf("tu reponde faux a les questions repeter cette niveau\n");
    printf("#################################################\n");
goto next ;
    }
}


return 0;
}
void multplication(int A){
int M;
printf("ces le tableau de multiplication\n");
for(M=0;M<=10;M++){
    printf("%d * %d = %d \n",M,A,M*A);}
}
