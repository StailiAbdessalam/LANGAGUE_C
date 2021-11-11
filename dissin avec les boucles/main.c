#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("taper un chiffre entre 1 jusqua 5\n");
    scanf("%d",&N);
    int i=0;
switch (N){
case 1:
    while(i<16){
    printf("               1\n");
    i++;
    }
    break;
case 2 :

   for( i=0;i<16 ; i++){
            if(i==0 || i==8 || i==15){
        printf("2222222222222222\n");
        }else  if (i>0 && i<8){
        printf("               2\n");
        }else{
        printf("2               \n");
        }

    }
    break;
case 3:
        i=0;
        while(i<16){
        if(i==0 || i==8 || i==15){
            printf("3333333333333333\n");
        }
        else{
        printf("               3\n");
        }
        i++;
    }
    break ;
case 4 : while(i<16){
         if (i<8){
            printf("4              4\n");
         }else if (i==8){
         printf("4444444444444444\n");
         }else{printf("               4\n");
         }
         i++;
    }
break ;
case 5 :while(i<16){
if(i==0 || i==8 || i==15){
    printf("5555555555555555\n");
}else if (i<8){
printf("5               \n");
}else{
printf("               5\n");
}
i++;
}
break ;

}


 return 0;
}
