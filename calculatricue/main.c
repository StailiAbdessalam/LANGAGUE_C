#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int option ;
//cette parter permit a l'utilisateur l'option qui choisi .
    debut :
    printf("cette programme fait le rolle de calculatrice fait la multiplication la somme la deferance et devision et qu'il que autre chause \n");
    printf("*****************************************\n");
    printf("on a 3 option dans cette calculatrice :\n*************************************************\ntaper 1 pour fait une calculle avec deux nombres a les opérateures .\ntaper 2 pour resoudre une equation de premier degrer . \ntaper 3 pour resoudre un equation de deuxemme degre .\ntaper sur 4 pour calculer la distance entre deux point .\n");
    printf("*****************************************\n");
    scanf("%d",&option);
//cette 'while' pour cadrer les choisir de l'utilisateur a les trois option .
    while (option>44 || option <1){
        printf("on a 3 option s'il veux plait choisi entre 1 et 3:\n");
        scanf("%d",&option);
    }
//cette partie il calcule deux nombres a tous les orateurs.
    int num1, num2,CH;
    if (option ==1){
printf("*****************************************\n");
printf("tu choisi l'option 1 :\n");
printf("entrer le chifre 1 :\n");
scanf("%d",&num1);
printf("entrer le chifre 2 :\n");
scanf("%d",&num2);
system("cls");
printf("le chiffre 1 est: %d .\nle chiffre 2 est : %d:\n",num1,num2);
printf("*****************************************\n");
printf("%d + %d = %d\n",num1,num2,num1+num2);
printf("%d - %d = %d\n",num1,num2,num1-num2);
printf("%d * %d = %d\n",num1,num2,num1*num2);
printf("%d / %d = %d\n",num1,num2,num1/num2);
printf("*****************************************\n");
// cette partie pour rotourne a debut de code
printf("taper sur un numuro pour sortie a programe \ntaper 1 pour faire un nottre calcule\n");
scanf("%d",&CH);
if (CH==1){
        system("cls");
   goto debut  ;
}

//c'est la deuxiemme option , cette partie resoudres les solution de l'equation de la premier degrie
    }else if(option == 2){
        int A,B;
        system("cls");
    printf("tu choisir la deuxieme option :\n");
    printf("entrer le A de l'equation \n");
    scanf("%d",&A);
    printf("entrer le B de l'equation\n");
    scanf("%d",&B);
         printf("*****************************************\n");
         system("cls");
         printf("votre equation est %dX + %d = 0\n ",A,B);
         printf("*****************************************\n");

    if(A==0){
     printf("*****************************************\n");
     printf("on a aucune solution de cette equation\n");
     printf("*****************************************\n");

    }else if (A!=0){
    printf("la solution de cette equation est %d ",-1*B/A);

    }
    printf("taper sur un numuro pour sortie a programe \ntaper 1 pour faire un nottre calcule\n");
scanf("%d",&CH);
    if (CH==1){
            system("cls");
   goto debut  ;
     }
}else if (option==3 ){
    int a,b,c;
system("cls");
printf("tu as choisi l'option trois: \n");
printf("*****************************************\n");
printf("taper A de votre equation:\n");
scanf("%d",&a);
printf("taper B de votre equation:\n");
scanf("%d",&b);
printf("taper C de votre equation:\n");
scanf("%d",&c);
system("cls");
printf("*****************************************\n");

printf("votre equation est %dXX + %dX + %d = 0\n",a,b,c);
printf("*****************************************\n");
  float  delta=(b*b)-(4*a*c);
if(delta<0){
    printf("cette equation admit aucunne solution \n");
    printf("*****************************************\n");

}else if (delta>0){
printf("cette equation admit deux solution :\n");
float x1=((-1*b)-(sqrt(delta)))/2*a;
 float x2=((-1*b)+(sqrt(delta)))/2*a;
 printf("la premier solution c'est : %.2f\n",x1);
 printf("la deuxieme solution c'est : %.2f\n",x2);
 printf("*****************************************\n");


}else if(delta==0){
    float x=(-1*b)/a;
    printf("cette equation admit un seulle solution c'est : %.2f\n",x);
    }
      printf("taper sur un numuro pour sortie a programe \ntaper 1 pour faire un nottre calcule\n");
scanf("%d",&CH);

if (CH==1){
        system("cls");
   goto debut  ;
        }
}else if (option==4){
int w1,w2,y1,y2;
printf("taper les cordonners de piont 1 :\n");
printf("taper l'abssice de point 1:\n");
scanf("%d",&w1);
printf("taper l'ordonner de point 1:\n");
scanf("%d",&y1);
printf("*****************************************\n");
printf("taper les cordonners de piont 2 :\n");
printf("taper l'abssice de 2 :\n");
scanf("%d",&w2);
printf("taper l'ordonner de 2 :\n");
scanf("%d",&y2);
float M = w2-w1;
float N = y2-y1;
float S=M*M;
float K =N*N;
float regle = sqrt(S+K);
printf("la distance entre le point 1 est le point 2 est : %.2f\n",regle);
printf("*****************************************\n");
printf("taper sur un numuro pour sortie a programe \ntaper 1 pour faire un nottre calcule\n");
scanf("%d",&CH);

if (CH==1){
    system("cls");
   goto debut  ;
        }
    }
    return 0;
}
