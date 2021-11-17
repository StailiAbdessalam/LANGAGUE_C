#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
int main()
{
int n ,i,t[50];
do{
    printf("donner la dimension du tableau :");
    scanf("%d",&n);
    if(n<1 || n>50)
        printf("la dimention doit etre comprise entre 1 et 50.\n");
}while(n<1 || n>50);

for (i=0;i<n;i++){
    printf("entrer l'element %d : ",i+1);
scanf("%d",&t[i]);
}

//affichage
for(i=0;i<n;i++){
    printf("\t%d\n",t[i]);
}
    int x;
      bool trouve=false;
      i=0;
    printf("donner la valeur a recherchez :\n");
    scanf("%d",&x);
    do{
       if(t[i]==x)
        trouve=true;
        i++;
    }while(trouve==false && i!=n);
    if(trouve==true){
        printf("la valeur %d existent dans T.\n",x);
    }else{
        printf("la valeur %d n'existent pas dans T .\n",x);
    }
    return 0;
}
