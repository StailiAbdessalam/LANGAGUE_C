#include <stdio.h>
#include <stdlib.h>
int main()
{
char matiere[5][50] ;
int notte [5];
int i=0;
while(i<5){
printf("taper la matiere %d\n",i+1);
scanf("%s",matiere[i]);
printf("*************************\n");
i++;
}
int c=0;
int S;
float M;
while(c<5){
printf("taper la notte de %s \n",matiere[c]);
scanf("%d",&notte[c]);
S=S+notte[c];
c++;
}
system("cls");
M=S/5;
int m=0;
while(m<5){
    printf("la notte de %s est %d\n",matiere[m],notte[m]);
    m++;
}
printf("*************************\n");
printf("la somme des notte est %d\n",S);
printf("*************************\n");
printf ("la moyenne des votre notes est %.2f\n",M);
printf("*************************\n");



    return 0;
}
