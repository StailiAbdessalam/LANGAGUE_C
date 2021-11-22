#include <stdio.h>
#include <stdlib.h>

int main (){
    int N;
//pour fixi la taille d'un tableau .
    printf("taper le chiffre des nombres qui veux entrer \n");
    scanf("%d",&N);
    int i =0;
    int element [N];
//pour stocker les element dans un tableau .
    while(i<N){
        printf("taper le nombres %d :\t",i+1);
        scanf("%d",&element[i]);
        i++;
    }
//cette boucles afficher les indeces des element qui positif et admit une division a 5
    printf("les position des chiffre qui admit une division sur 5 et suppurieur a 0 .\n");
for(i=0;i<N;i++){
    if(element[i]%5==0 && element[i]>0){
        printf("%d\t",i);
    }

}
    printf("\n");
int cn =0;
//cette boucles pour trie le tableau caroissantte .
for(int i= 1;i<N;i++){
        for(int j=0;j<N-1;j++){
            if(element[i]<element[j]){
                cn = element[i];
                element[i] = element[j];
                element[j] = cn;
            }
        }
    }
 int v=0;
    printf("ces votre tableau trier :\n");
//cette boucles pour afficher le tableau trier.
while (v<N){
    printf("%d \t",element[v]);
    v++;
}
    return 0;
}
