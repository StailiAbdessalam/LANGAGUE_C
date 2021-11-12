#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L ;
    printf("ce programe fait un triangle avex des ordres\n");
    printf("taper le nombres de ligne :\n");
    scanf("%d",&L);
        int a,b;
        float v;
        v=L/2;
for(a=0;a<L;a++){
    for(b=0;b<L-a;b++){
        printf(" ");
    }
    for(b=0;b<a;b++){
        printf(" *");
         }
    printf("\n");
          }

    return 0;
   }

