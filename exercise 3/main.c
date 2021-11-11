#include <stdio.h>
#include <stdlib.h>

int main()
{
     float NUM ;
    printf("taper un chiffre qui tu peu\n");
    scanf("%f",&NUM);
    if (NUM>0){
        printf("votre numuro est POSITIF\n");
    }
    else if (NUM<0){
        printf("votre numuro est NEGATIVE\n");

    }else printf("se numuro est null c'est adire egale  0\n");
    return 0;
}
