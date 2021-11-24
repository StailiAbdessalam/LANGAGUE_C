#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

//cette fonction pour afficher le munu principale de ce programe.
void menu_affichage()
{

    printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
    printf("\t1-Introduire un compte bancaire.\n\t2-Introduire plusieurs comptes bancaires.\n\t3-Operations (Retrait-Depot).\n\t4-Affichage.\n\t5-Fidelisation.\n\t6-afficher la liste des comptes.\n\t7-Quitter l'application.\n");
    printf("\n\t\t\033[0;34m-----------------------------------------------------------------------------------------\033[0m\n");


}

int main(){
                bool compte = false;// if false . taper un message pour creer un compte premierment
                int m;//number of plusieur acounts
                int n=0; // number of acounts.
                char nomPrenom[25][30];
                char cin[25][10];
                double montant[25];

            start:
                system("cls");
                menu_affichage();
                if(compte != true)
                {
                    printf("\n\t\t\t\033[0;41m-Attention:\033[0;31m Vous devez premierment entrer un ou plusieurs comptes.\033[0m"); //pintf le condition qui est important. warning to enter acount first.
                }
                int choixMenu;// stocker le menu choix du client.
                printf("\n\n Veuillez choisir l'opperation que vous voulez :\t ");
                scanf("%d", &choixMenu);


                while(choixMenu < 0 || choixMenu > 7)  // start again if the input is not much with the menu using while loop.
                {
                    printf("Le choix que vous avez entrer n'est pas dans le menu. Veuillez essayer une autre fois : ");
                    scanf("%d", &choixMenu);
                }


if(choixMenu == 1)//c'est l'option 1 "pour traduire un compte"
                   {
                    n++;
                    printf("\nVeuillez entrer le Nom et le Prenom du compte svp : ");
                    scanf("\n");
                    scanf("%[^\n]s",nomPrenom[n-1]); // registre le nome et prenome du compte bancaire;

                    printf("\nVeuillez entrer la CIN du compte svp : ");
                    scanf("\n");
                    scanf("%[^\n]s", cin[n-1]); // registre le CIN du compte bancaire;

                    printf("\nVeuillez entrer le Montant du compte svp : ");
                    scanf("%lf", &montant[n-1]); // registre le montant du compte bancaire;
                    //affichage de votre compte .
                    system("cls");
                    printf("le compte que vous avez entre : \n");
                    printf("\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n", nomPrenom[n-1], cin[n-1], montant[n-1]);
                    printf("Le compte est regestre, clickez entrer pour retourner au menu.\n");

                    compte = true;// pour annuler la phrase atention .
                    system("pause");
                    goto start;




}else if(choixMenu == 2) //pour choix numuro 2 "introduire plusieur compte".
                {
                    printf("qu'elle est le nombre de compte vous voulez : ");
                    scanf("%d", &m);
                    m+=n;
                    for(int i = n ; i < m ; i++)  // cette for pour "stocker les compte dans le tableau"
                    {
                        printf("\nVeuillez entrer le Nom et le Prenom du compte N %d svp : ", i+1-n);
                        scanf("\n");
                        scanf("%[^\n]s", nomPrenom[i]); // registre le nome et prenome du dcompte bancaire;

                        printf("\nVeuillez entrer la CIN du compte N %d svp : ", i+1-n);
                        scanf("\n");
                        scanf("%[^\n]s", cin[i]); // registre le CIN du dcompte bancaire;

                        printf("\nVeuillez entrer le Montant du compte N %d svp : ", i+1-n);
                        scanf("%lf", &montant[i]); // registre le montant du dcompte bancaire;
                        printf("\n\033[0;32m--------------------------le compte a ete registre-------------------------\033[0m\n");
                    }
                    system("cls");
                    printf("Les comptes que vous avez entre : \n\n");
                    for(int i = n; i < m ; i++) //print tous les comptes
                    {
                        printf("Compte N%d :\n", i+1-n);
                        printf("\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                        printf("--------------------------------------------------------------\n");
                    }
                    printf("le compte est enregestre, clickez entrer pour retourner au  menu.\n");
                    compte = true; // tourner un variable correct si on a un compte ou plusieurs comptes
                    system("pause");
                    n=m;
                    goto start;


}else if(choixMenu == 3)
    {
         if (n < 1) // retour au menu si il y a pas du comptes.
                    {
                    printf("\n\a\033[0;31m\t!!!Vous devez enregistrer un ou plusieurs comptes pour cette operation.\033[0m\n");
                    system("pause");
                    goto start;
                    }
                    //....................
                    system("cls");
                    printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                    printf("\t1-Retrait.\n\t2-Depot.\n\t3-Reteur au menu.\n");
                    int operationsMenu; // cette variable pour stockes les valeurs de choix d'option 3
                    printf("\n\nchoisissez l'operation que vous voulez : ");
                    scanf("%d", &operationsMenu);

                    while(operationsMenu < 0 || operationsMenu > 3)  // pour ne pas sortir des limtes demandee
                    {
                        printf("Le choix que vous avez entrer n'appartient pas au menu. Veuillez essayer une autre fois : ");
                        scanf("%d", &operationsMenu);
                    }

        if(operationsMenu == 1)
        {
               if(n == 1) // si on a un seul compte(retrait)
            {
                    system("cls");
                    printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                    printf("\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n", nomPrenom[0], cin[0], montant[0]);
                    printf("\n--------------------------------------------------------------\n\n");
                    double retrait;
                    bool retraitValable = true;
                    while(retraitValable)
                    {
                        printf("Entrer le montant que vous voulez retire du compte : ");
                        scanf("%lf", &retrait);
                        if(retrait > 0 && retrait <= montant[0])
                        {
                            montant[0] -= retrait;
                            retraitValable = false;
                        }
                        else if(retrait > montant[0])
                        {
                            printf("\n\t\a\033[0;31mVotre solde n'est pas suffisant pour retirer ce montant.\033[0m\n");
                        }
                        else if (retrait <= 0)
                        {
                            printf("\n\t\a\033[0;31mCe montant n'est pas valable.\033[0m\n");
                        }
                    }

                    //affichage du compte apres l'operaton de retrait
                    system("cls");
                    printf("\n\n\n\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\033[0;33m *Nouveau Montant\033[0m\n",nomPrenom[0], cin[0], montant[0]);
                    printf("\n\t\033[0;31mRetrait : %.4lfDH.\033[0m", retrait);
                    printf("\n--------------------------------------------------------------\n");
                    system("pause");
                    goto start;

            }else if(n > 1)   // si on a plusieurs comptes (retrait)
                    {
                    system("cls");
                    printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                    printf("\n\n");
                    for(int i = 0 ; i < n; i++)  // print tous les comptes
                    {
                        printf("Compte N%d :\n", i + 1);
                        printf("\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                        printf("--------------------------------------------------------------\n");
                    }
                    int numCompte;// cette variable pour stocke le numero du copmte
                    printf("\nEntrer le numero de compte que vous voulez faire l'opperation avec: ");
                    scanf("%d", &numCompte);
                    //pour ne pas entrer <0 ou >nombres des comptes
                    while(numCompte < 0 || numCompte > n)
                    {
                        printf("\n\033[0;31mLe choix n'est pas correct.\033[0m\n");
                        printf("Entrer le numero de compte pour fair l'operation : ");
                        scanf("%d", &numCompte);
                    }
                    numCompte--;//bach ila 3zal compte n°1 ymchi l'indice zero
                    double retrait;
                    bool retraitValable = true;// pour entrer dans la boucle while
                    while(retraitValable)
                    {
                        printf("Entrer le montant que vous avez retire dans ce compte : ");
                        scanf("%lf", &retrait);// pour stocker le retrait
                        if(retrait > 0 && retrait <= montant[numCompte])  // le retrait positive et <= montant
                        {
                            montant[numCompte] -= retrait;
                            retraitValable = false;
                        }
                        else if(retrait > montant[numCompte])
                        {
                            printf("\n\t\a\033[0;31mVotre solde est insuffisant pour retirer ce montant.\033[0m\n");
                        }
                        else if (retrait <= 0)
                        {
                            printf("\n\t\a\033[0;31mCe montant n'est pas valable.\033[0m\n");
                        }
                    }
                    system("cls");
                    printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                    printf("\n");
                    for(int i = 0 ; i < n ; i++)  // pour afficher les changements du compte
                    {
                        printf("Compte N%d :\n", i + 1);
                        if(i == numCompte)
                        {
                            printf("\n\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\033[0;33m *Nouveau Montant\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                            printf("\n\t\033[0;31mRetrait : %.4lfDH.\033[0m\n\n", retrait);
                            printf("--------------------------------------------------------------\n");
                        }
                        else
                        {
                            printf("\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                            printf("--------------------------------------------------------------\n");
                        }
                    }
                    system("pause");
                    goto start;
                }



         }else if(operationsMenu == 2)
            {
            if(n == 1)  // dans le cas d'un seul compte fait  (depot)
                {
                    system("cls");
                    printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                    printf("\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n", nomPrenom[0], cin[0], montant[0]);
                    printf("\n--------------------------------------------------------------\n\n");

                    double depot;
                    bool depotValable = true; // si le depot positive pour sortir dans la boucle
                    while(depotValable)
                    {
                        printf("  Entrer le montant que vous voulez le deposer dans votre compte : ");
                        scanf("%lf", &depot);// stocke le depot
                        if(depot > 0)  // depot positive
                        {
                            montant[0] += depot;
                            depotValable = false;// pour sortir du boucle
                        }
                        else if (depot <= 0)
                        {
                            printf("\n\t\a\033[0;31mCe montant n'est pas valable.\033[0m\n");
                        }
                    }
                    // print tous les changements du compte
                    system("cls");
                    printf("\n\n\n\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\033[0;33m *Nouveau Montant\033[0m\n",nomPrenom[0], cin[0], montant[0]);
                    printf("\n\t\033[0;32mDepot : %.4lfDH.\033[0m", depot);
                    printf("\n--------------------------------------------------------------\n");
                    system("pause");
                    goto start;

            }else if(n > 1)   // si on plusieurs comptes(depot)
                        {
                    system("cls");
                    printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                    printf("\n\n");
                    for(int i = 0 ; i < n ; i++)  // pour print tous les comptes
                    {
                        printf("Compte N%d :\n", i + 1);
                        printf("\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                        printf("--------------------------------------------------------------\n");
                    }
                    int numCompte;
                    printf("\n  Entrer le numero de compte que vous voulez faire l'operation avec : ");
                    scanf("%d", &numCompte);// stocker le numero du compte
                    while(numCompte < 0 || numCompte > n) //n<numCompte<0
                    {
                        printf("\n\033[0;31mLe choix n'est pas correct.\033[0m\n");
                        printf("Entrer le numero de compte que vous voulez faire l'operation avec: ");
                        scanf("%d", &numCompte);
                    }
                    numCompte--; //pour se deplacer numero du compte au indice du compte sur le tableau du montant
                    double depot;
                    bool depotValable = true; // si le depot positive pour sortir dans la boucle
                    while(depotValable)
                    {
                        printf("  Entrer le montant que vous voulez le deposer dans ce compte : ");
                        scanf("%lf", &depot);// pour stocker son depot
                        if(depot > 0)
                        {
                            montant[numCompte] += depot;
                            depotValable = false;// pour sortir du boucle
                        }
                        else if (depot <= 0)
                        {
                            printf("\n\t\a\033[0;31mce montant n'est pas valable.\033[0m\n");
                        }
                    }
                    system("cls");
                    printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                    printf("\n");
                    for(int i = 0 ; i < n ; i++)  // pour print tous le comptes avec tous les modifications faites dans son compte
                    {
                        printf("Compte N%d :\n", i + 1);
                        if(i == numCompte)
                        {
                            printf("\n\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\033[0m\033[0;33m *Nouveau Montant\n",nomPrenom[i], cin[i], montant[i]);
                            printf("\n\t\033[0;32mRetrait : %.4lfDH.\033[0m\n\n", depot);
                            printf("--------------------------------------------------------------\n");
                        }
                        else
                        {
                            printf("\n\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                            printf("--------------------------------------------------------------\n");
                        }
                    }
                    system("pause");
                    goto start;
                }
          }else if(operationsMenu == 3){// pour sortir d'option 3(operation)
            goto start;
            }

        //********************************************************operation terminee**********************************************************

}else if(choixMenu == 4){//option 4 pour l'affichage
                system("cls");
                printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                //menu d'affichage
                printf("\t1-Par Ordre Ascendant.\n\t2-Par Ordre Descendant.\n\t3-Recherche par CIN.\n\t4-Reteur au menu.\n");
                int affichageMenu; // cette variable pour stocker les options de 4 Affichage.
                printf("\n\n  choisi l'operation que vous voulez : ");
                scanf("%d",&affichageMenu); //stocker l'option

                while(affichageMenu < 0 || affichageMenu > 4)  // si l'option <0 ou >4
                {
                    printf("le choix que vous avez entre n'existe pas dans le menu. Veuillez essayer une autre fois : ");
                    scanf("%d", &affichageMenu);
                }
        if(affichageMenu == 1) //si on a clicke sur 1 goto asc
                {
                system("cls");
                printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                //menu d'ascendant
                printf("\t1-Par Ordre Ascendant.\n\t2-Par Ordre Ascendant (les comptes bancaire ayant un montant supérieur à un chiffre introduit).\n\t3-Reteur au menu.\n");
                int triChoix; //pour stocker les options d'ascendant
                printf("\n\n  choisi l\'opperation que tu veux : ");
                scanf("%d", &triChoix);//pour stocker les options d'ascendant
                while(triChoix <= 0 || triChoix > 3)
                {
                    printf("\n\033[0;31mLe choix n'est pas correct.\033[0m\n");
                    printf("\n\n  choisissez l'opperation que vous voulez : ");
                    scanf("%d", &triChoix);
                }
            if(triChoix == 1){// si il choisi 1 trier le tableau croissant
                char minNomePrenome[100][30];
                char minCin[100][30];
                double minMontant[100];

                for(int i = 1 ; i < n ; i++)// pour trier le tableau
                {
                    for(int j = 0 ; j < n-1 ; j++)
                    {
                        if(montant[j] > montant[i]) // pour trier croissant
                        {
                            minMontant[100]=montant[i] ;
                            montant[i] = montant[j];
                            montant[j]=minMontant[100];
                            strcpy(minCin,cin[i]);
                            strcpy(cin[i],cin[j]);
                            strcpy(cin[j],minCin);
                            strcpy(minNomePrenome,nomPrenom[i]);
                            strcpy(nomPrenom[i],nomPrenom[j]);
                            strcpy(nomPrenom[j],minNomePrenome);
                        }
                    }
                }
                system("cls");
                printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                for(int i = 0 ; i < n ; i++)  // print tous les comptes ascendant
                {
                    printf("Compte N%d :\n", i + 1);
                    printf("\033[0;36m\tNome et Prenome : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                    printf("--------------------------------------------------------------\n");
                }
                printf("  Clickez entrer pour retourner au menu.\n");
                system("pause");
                goto start;

            }
            else if (triChoix == 2)//pour trier tous les comptes ascendants > un chiffre
            {   //ces 3 variables leurs roles changer les valeurs de deux cases
                char minNomePrenome[100][30];
                char minCin[100][30];
                double minMontant[100];
                double S ; //pour stocker le chiffre
                printf("entrer le chiffre qui vous voulez\t");
                scanf("%lf",&S);//pour stocker le chiffre

                for(int i = 1 ; i < n ; i++)
                {
                    for(int j = 0 ; j < n-1 ; j++)
                    {
                        if(montant[j] > montant[i]) // pour trier croissant
                        {
                            minMontant[100]=montant[i] ;
                            montant[i] = montant[j];
                            montant[j]=minMontant[100];
                            strcpy(minCin,cin[i]);
                            strcpy(cin[i],cin[j]);
                            strcpy(cin[j],minCin);
                            strcpy(minNomePrenome,nomPrenom[i]);
                            strcpy(nomPrenom[i],nomPrenom[j]);
                            strcpy(nomPrenom[j],minNomePrenome);


                        }
                    }
                }
                system("cls");
                printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
                for(int i = 0 ; i < n ; i++){ // print tous les comptes ascendant
                    if (montant[i]>S) //pour afficher seulement les montants > s
                    {
                        printf("Compte N%d :\n", i + 1);
                        printf("\033[0;36m\tNome et Prenome : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                        printf("--------------------------------------------------------------\n");
                    }
                }
                printf("  Clickez entrer pour retourner au menu.\n");
                system("pause");
                goto start;

                }
                else if (triChoix==3) // pour retourner au menu principal
                {
                goto start;
                }
        }else if(affichageMenu == 2)    //pour choisir le tri avec descendant
              {
            system("cls");
            printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
            // menu de descendant
            printf("\t1-Par Ordre Descendant.\n\t2-Par Ordre Descendant (les comptes bancaire ayant un montant supérieur à un chiffre introduit).\n\t3-Reteur au menu.\n");
            int triChoix; //stocker les options de descendant
            printf("\n\n  choisissez l'opperation que vous voulez : ");
            scanf("%d", &triChoix);//stocker les options de descendant
            while(triChoix <= 0 || triChoix > 3)
            {
                printf("\n\033[0;31mLe choix n'est pas correct.\033[0m\n");
                printf("\n\n  choisissez l'opperation que vous voulez : ");
                scanf("%d", &triChoix);
            }

            if(triChoix == 1)// choisir option 1 de descendant
            {
                char minNomePrenome[100][30];
                char minCin[100][30];
                double minMontant[100];

                for(int i = 1 ; i < n ; i++)// pour trier le tableau descendant
                {

                    for(int j = 0 ; j < n-1 ; j++)
                    {
                        if(montant[j] < montant[i])
                        {
                            minMontant[100]=montant[i] ;
                            montant[i] = montant[j];
                            montant[j]=minMontant[100];
                            strcpy(minCin,cin[i]);
                            strcpy(cin[i],cin[j]);
                            strcpy(cin[j],minCin);
                            strcpy(minNomePrenome,nomPrenom[i]);
                            strcpy(nomPrenom[i],nomPrenom[j]);
                            strcpy(nomPrenom[j],minNomePrenome);


                        }
                    }
                }
                system("cls");
                printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");

                for(int i = 0 ; i < n ; i++)  // pour afficher tous les comptes avec tous les changements faites dans son compte
                {
                    printf("Compte N%d :\n", i + 1);
                    printf("\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                    printf("--------------------------------------------------------------\n");
                }
                printf("  Clickez entrer pour retournez au menu.\n");
                system("pause");
                goto start;

            }
            else if (triChoix==2) // choisir option 2 de descendant
            {
                char minNomePrenome[100][30];
                char minCin[100][30];
                double minMontant[100];
                double S ;
                printf("entrez le chiffre que vous voulez \t");
                scanf("%lf",&S);// pour stocker un chiffre du montant

                for(int i = 1 ; i < n ; i++)
                {

                    for(int j = 0 ; j < n-1 ; j++)
                    {
                        if(montant[j] < montant[i]) {
                            minMontant[100]=montant[i] ;
                            montant[i] = montant[j];
                            montant[j]=minMontant[100];
                            strcpy(minCin,cin[i]);
                            strcpy(cin[i],cin[j]);
                            strcpy(cin[j],minCin);
                            strcpy(minNomePrenome,nomPrenom[i]);
                            strcpy(nomPrenom[i],nomPrenom[j]);
                            strcpy(nomPrenom[j],minNomePrenome);


                        }
                    }
                }
                system("cls");
                printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");

                for(int i = 0 ; i < n ; i++)
                {
                    if(montant[i]>S)// pour afficher seulement les comptes > s descendant
                    {
                        printf("Compte N%d :\n", i + 1);
                        printf("\033[0;36m\tNome et Prenome : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                        printf("--------------------------------------------------------------\n");
                    }
                }
                printf("  Clickez entrer pour retourner au menu.\n");
                system("pause");
                goto start;
            }
            else if (triChoix==3)
            {
                goto start;
            }
        }
        else if (affichageMenu == 3)
        {
chercherAutrefois:
            system("cls");
            printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
            printf("  Entrer la CIN de compte que vous voulez le recherche : ");
            char rechercheCIN[20];
            bool isDoneRecherche = false; // check if there is an acounte with same CIN;
            scanf("%s", rechercheCIN);
            for(int i = 0 ; i < n ; i++)
            {
                if(!strcmp(rechercheCIN, cin[i])) //strcmp is for checking if rechercheCIN value is in cin[i].
                {
                    printf("\n  la resultat du recherche : \n");
                    printf("\n\033[0;36m\tNome et Prenome : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                    printf("\n--------------------------------------------------------------\n\n");
                    isDoneRecherche = true;
                    break;
                }
            }
            if(isDoneRecherche == false)
            {
                printf("\n\033[0;31m il y a pas un compte bancaire avec ce CIN.\033[0m\n\n");
                printf("  \tEntrer:\t\t1-pour rechercher autre fois.\t2-pour retour aux menu principal.\n");
                printf("\nvotre choix : ");
                int r; // store the choice that given above.
                scanf("%d", &r);
                while(r != 1 && r != 2)
                {
                    printf("\n  \033[0;31m\l'entree n'est pas correct.\033[0m\n");
                    printf("  Entrer\t\t1-pour rechercher autre fois.\t2-pour retourner au menu principal.\n");
                    printf("\nvotre choix : ");
                    scanf("%d", &r);
                }
                if(r == 1)
                {
                    goto chercherAutrefois; // go to serch more time.
                }
                else if (r == 2)
                {
                    goto start; // go to the menu principal.
                }
            }
            else
            {
                printf("\n  Clickez Entrer pour retourner au menu principal.\n");
                system("pause");
                goto start;
            }

            }
            else if(affichageMenu == 4)
            {
                goto start;
            }
}else if(choixMenu == 5)
        {
            if (n < 1) // reteur au menu si il y a pas des comptes.
            {
                printf("\n\a\033[0;31m\t!!!vous devez enregistrer un compte ou  plusieurs comptes pour cette operation.\033[0m\n");
                system("pause");
                goto start;
            }

            system("cls");
            printf("\n\t\t\t\t\033[0;44m      \t        \033[0;34m   Gestion Bancaire   \033[0m\033[0;44m        \t       \033[0m\n\n");
            printf("\t1-Ajouter 1.3%% aux comptes ayant les 3 premiers montants superieurs.\n\t2-Reteur au menu.\n");
            int fidelisationMenu;// variable that store client's choice on 5)Fidélisation.
            printf("\n\n  choisi l'opperation que tu veux : ");
            scanf("%d", &fidelisationMenu);

            while(fidelisationMenu < 0 || fidelisationMenu > 2)   // start again if the input is not much with the Fidélisation menu using while loop.
            {
                printf("\033[0;31m  Le choix que vous avez entre n'appartient pas au menu.\033[0m\nvoller essayer autre fois : ");
                scanf("%d", &fidelisationMenu);
            }

            if(fidelisationMenu == 1)
            {
                printf(" Choisissez Ajouter 1.3%% aux comptes ayant les 3 premiers montants superieurs operation.\n");
                char minNomePrenome[100][30];
                char minCin[100][30];
                double minMontant[100];

                for(int i = 1 ; i < n ; i++)
                {

                    for(int j = 0 ; j < n-1 ; j++)
                    {
                        if(montant[j] < montant[i]) // check for the minimun account.
                        {

                            minMontant[100]=montant[i] ;
                            montant[i] = montant[j];
                            montant[j]=minMontant[100];

                            strcpy(minCin,cin[i]);
                            strcpy(cin[i],cin[j]);
                            strcpy(cin[j],minCin);
                            strcpy(minNomePrenome,nomPrenom[i]);
                            strcpy(nomPrenom[i],nomPrenom[j]);
                            strcpy(nomPrenom[j],minNomePrenome);


                        }
                    }
                }
                if(n<=3)
                {
                    for (int i=0; i<n; i++)
                    {
                        montant[i]= montant[i] + montant[i]*0.013;
                        printf("\n\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i],montant[i]);
                        printf("\n--------------------------------------------------------------\n\n");
                    }
                }
                else if (n>=3)
                {
                    for (int i=0; i<3; i++)
                    {
                        montant[i]= montant[i] + montant[i]*0.013;

                        printf("\n\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                        printf("\n--------------------------------------------------------------\n\n");
                    }
                }




                printf("  Clickez entrer pour retourner au menu.\n");
                system("pause");
                goto start;
                }
                else if(fidelisationMenu == 2)
                {
                    goto start;
                }
}else if (choixMenu == 6)
                {
                    if (n == 0) // reteur au menu si il y a pas des comptes.
                    {
                        printf("\n\a\033[0;31m\t!!!vous devez enregistre un compte ou  plusieurs comptes premierement.\033[0m\n");
                        system("pause");
                        goto start;
                    }
                    system("cls");
                    printf(" Le compte que vous avez entre : \n\n");
                    for(int i = 0 ; i < n ; i++)  // display les comptes qui est enregistrer.
                    {
                        printf("Compte N%d :\n", i + 1);
                        printf("\033[0;36m\tNom et Prenom : %s.\n\tCIN : %s.\n\tMontant : %.4lfDH.\033[0m\n",nomPrenom[i], cin[i], montant[i]);
                        printf("--------------------------------------------------------------\n");
                    }
                    printf(" le compte est regestre, clickez entrer pour retourner au menu.\n");
                    system("pause");
                    goto start;

}else if(choixMenu == 7)
                {
                    printf("\n\n\t\t\t\t\033[0;34m** you exite\'s from the programe **\033[0m\n");
                    return 1;
}else{
                goto start;
            }
    return 0;
}
