#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numcandida;
    printf("1_khalid leamrani\n2_mohamed laalaoui\n3_omar tahar\n**********************************\n");
    printf("choisi un number des candidas pour voter sur cette trois presedent \n");
scanf("%d",&numcandida);
char CIN [numcandida][10];
int i =0;
while(i<numcandida){
    printf("s'il veux plait, le candida %d taper votre numuro de la carte nationalle\n",i+1);
    scanf("%s",CIN[i]);
    i++;
}
int votte;
int K,S,V;
system("cls");
    printf("1_khalid leamrani\n2_rajae hassnawi\n3_omar tahar\n**********************************\n");

for (i=0;i<numcandida;i++){
    printf("le candida de la carte nationnalle %s voter sur un presedent \n",CIN[i]);
    scanf("%d",&votte);
   while (votte>numcandida || votte<=0){
        printf("voter sur cette presedent s'il veux plait\n");
            scanf("%d",&votte);
    }

    if (votte==1){
        V=V+1;
    }
    else if (votte==2){
             S=S+1;
             }
             else if (votte ==3){
K=K+1;
             }
}
if(V>K &&V>S){
    printf("le presedent qui ganger c'est khalide emrani");
}
else if (K>V && K>S){
printf("le presedent qui ganger c'est omar tahar");
}else if (S>V && S>K){
printf("le presedent qui ganger c'est mohamed laalaoui");
}
system("cls");
    return 0;
}
