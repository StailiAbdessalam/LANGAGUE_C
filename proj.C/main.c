#include <stdio.h>
#include <stdlib.h>
int main()
{
char matiere[30][5] ;
float notte [6];
int i=0;
while(i<5){
printf("taper la matiere %d\n",i+1);
scanf("%s",matiere[i]);
i++;
}
int c=0;
while(c<5){
printf("taper la notte de %s \n",matiere[c]);
scanf("%f",&notte[c]);
c++;
}
int m=0;
while(m<5){
    printf("la notte de %s est %.2f\n",matiere[m],notte[m]);
    m++;
}
    return 0;
}




