#include<stdio.h>

#include<stdlib.h>

#include <string.h>

int main() {

        printf("ELECTION PRESIDENTIELLE\n\n");

        int cmp = 0;

//fixi la Liste Presidents
        int i, nombrePres;
        printf("Veuillez entrer le nombre de presidents :  ");
        scanf("%d", & nombrePres);

        printf("\n**********************\n");

//ATTENTION : 5 presidents au minimum
        while (nombrePres < 5) {
                printf("\nChoix invalide, Veuillez entrer au minimum 5 presidents :  ");
                scanf("%d", & nombrePres);
        }

//stocker les  Presidents dans un tableau
        char TabPres[nombrePres][30];
        for (i = 0; i < nombrePres; i++) {
                printf("\nPresident %d :\t", i + 1);
                scanf("%s", & TabPres[i]);
        }

        printf("\n**********************\n");
        printf("\n**********************\n");

//fixi Liste Electeurs
        int nombreElect;
        printf("\nVeuillez entrer le nombre d'electeurs :  ");
        scanf("%d", & nombreElect);

//ATTENTION : 10 electeurs au minimum
        while (nombreElect < 10) {
                printf("\nChoix invalide, entrer au minimum 10 electeurs :  ");
                scanf("%d", & nombreElect);
        }

        printf("\n**********************\n");

//stocker les CiN d'electeurs .
        char TabElect[nombreElect][30];
        for (i = 0; i < nombreElect; i++) {
                printf("\nElecteur %d, veuillez entrer votre CIN :   ", i + 1);
                scanf("%s", & TabElect[i]);
        }
//pour suppremer les dernier taches
        system("cls");
//demarer tour 1 .
        printf("ELECTION PRESIDENTIELLE  ---  1ER TOUR\n\n");

//Election --- 1er tour

        int choix;
        int TabRes[nombrePres];

//Valeur de 0 pour toutes les cases TabRes[i] qui stockent le nombre de votes pour chaque president
//        for (i = 0; i < nombrePres; i++) {
//                TabRes[i] = 0;
//        }

//Affichage de la liste des presidents
        for (i = 0; i < nombrePres; i++) {
                printf("President N %d : %s\n\n", i + 1, TabPres[i]);
        }

        printf("\n**********************\n\n");

//Processus Vote
//domander a l'electeurs de voter sur les presedent .
        for (i = 0; i < nombreElect; i++) {
                printf("Electeur %d (CIN: %s), veuillez entrer le nombre de president vous voulez voter pour :  ", i + 1, TabElect[i]);
                scanf("%d", & choix);

//Electeur doit choisir un nombre superieur a le chiffre des presedent .
                while (choix < 1 || choix > nombrePres) {
                        printf("\nChoix invalide, veuillez ressayer:  ");
                        scanf("%d", & choix);
                }

//Stockage du choix de l'electeur dans un nouveau tableau TabRes pour calculer le nombre de votes de chaque president
                TabRes[choix - 1] = TabRes[choix - 1] + 1;//TabRes[choix - 1]++;
                printf("\nMerci. Votre vote a ete enregistre\n\n");
        }

//Affichage du nombre de votes pour chaque president
        for (i = 0; i < nombrePres; i++) {
                printf("\nPresident %s a %d votes.\n", TabPres[i], TabRes[i]);
        }

        printf("\n**********************\n\n");

//Refait du 1er tour si les presidents ont un nombre de votes egaux
//cette "for" pour comparer toute les cases de tableau de votte .
        for (i = 0; i < nombrePres - 1; i++) {
                if (TabRes[i] == TabRes[i + 1]) {
                        cmp++;
                }
        }

        while (cmp == nombrePres - 1) {
//inisyaliser les cases de tableau votte .
                for (i = 0; i < nombrePres; i++) {
                        TabRes[i] = 0;
                }

                printf("\nVeuillez voter une autre fois s'il vous plait\n");
//goto ======
                for (i = 0; i < nombreElect; i++) {
                        printf("\nElecteur %d (CIN: %s), veuillez entrer le nombre de president vous voulez voter pour :  ", i + 1, TabElect[i]);
                        scanf("%d", & choix);

                        while (choix < 1 || choix > nombrePres) {
                                printf("\nChoix invalide, veuillez ressayer:  ");
                                scanf("%d", & choix);
                        }

                        TabRes[choix - 1] = TabRes[choix - 1] + 1;
                        printf("\nMerci. Votre vote a ete enregistre\n\n");
                }

                printf("\n**********************\n\n");

//Affichage du nombre de votes pour chaque president
                for (i = 0; i < nombrePres; i++) {
                        printf("\nPresident %s a %d votes.\n", TabPres[i], TabRes[i]);
                }

                printf("\n**********************\n\n");

                cmp = 0;
                for (i = 0; i < nombrePres - 1; i++) {
                        if (TabRes[i] == TabRes[i + 1]) {
                                cmp++;
                        }
                }
        }

//Calcul du % des votes pour chaque president

        float prc = 0;
//cette tableau pour stocker les porsantages des vottes de toutes les presedents.
        float TabCheck[nombrePres];

//Calcul du % et stockage de chaque % calcule dans un nouveau TabCheck.
        for (i = 0; i < nombrePres; i++) {
                prc = ((float) TabRes[i] / (float) nombreElect) * 100;
                TabCheck[i] = prc;
        }

        printf("\n**********************\n\n");

//Affichage du % de vote pour chaque president
//        for (i = 0; i < nombrePres; i++) {
//                printf("President %d %s a eu %.2f %% de la totalite des votes.\n", i + 1, TabPres[i], TabCheck[i]);
//        }

//Creation d'un nouveau tableau TabPres2 pour stocker les noms des presidents qui ont eu un % de votes >15%
        int nombrePres2 = 0;
        char TabPres2[100][30];

//fonction strcpy pour copier les noms des presidents qui ont eu un % de votes >15% dans le nouveau tableau TabPres2
        for (i = 0; i < nombrePres; i++) {
                if (TabCheck[i] > 15) {
                        strcpy(TabPres2[nombrePres2], TabPres[i]);
                        nombrePres2++;
                }
        }

//Si tous les electeurs ont voté pour le meme president, on passe directement pour annoncer le gagnant de la présidentielle
        if (nombrePres2 == 1) {
                system("cls");
                printf("\nPresident %s a remporte l'election presidentielle !!!", TabPres2[0]);
        } else {
                system("cls");
                printf("ELECTION PRESIDENTIELLE  ---  2EME TOUR\n\n");
                printf("Liste des presidents qui ont passes au 2eme tour de lelection: \n");
                printf("\n**********************\n\n");

//Affichage de la liste des presidents qui ont passes au 2eme tour de l'election
                for (i = 0; i < nombrePres2; i++) {
                        printf("President N %d: %s \n", i + 1, TabPres2[i]);
                }

//Election --- 2eme tour

                int choix2;
                int TabRes2[nombrePres2];

//Valeur de 0 pour toutes les cases TabRes2[i] qui stockent le nombre de votes pour chaque president qui a passe au 2eme tour
                for (i = 0; i < nombrePres2; i++) {
                        TabRes2[i] = 0;
                }

                printf("\n**********************\n\n");

//Processus Vote 2eme tour
                for (i = 0; i < nombreElect; i++) {
                        printf("\nElecteur %d (CIN: %s), veuillez entrer le nombre de president vous voulez voter pour :  ", i + 1, TabElect[i]);
                        scanf("%d", & choix2);

//Electeur doit choisir un nombre qui correspond a la liste des presidents qui ont passes au 2eme tour
                        while (choix2 < 1 || choix2 > nombrePres2) {
                                printf("\nChoix invalide, veuillez ressayer:  ");
                                scanf("%d", & choix2);
                        }

//Stockage du choix de l'electeur dans un nouveau tableau TabRes pour calculer le nombre de votes de chaque president
                        TabRes2[choix2 - 1] = TabRes2[choix2 - 1] + 1;
                        printf("\nMerci. Votre vote a ete enregistre\n\n");
                }

                printf("\n**********************\n\n");

//Affichage du nombre de votes pour chaque president
                for (i = 0; i < nombrePres2; i++) {
                        printf("\nPresident %s a %d votes.\n", TabPres2[i], TabRes2[i]);
                }

                printf("\n**********************\n\n");

//Refait du 2eme tour si les presidents ont un nombre de votes egaux

                cmp = 0;
                for (i = 0; i < nombrePres2 - 1; i++) {
                        if (TabRes2[i] == TabRes2[i + 1]) {
                                cmp++;
                        }
                }

                while (cmp == nombrePres2 - 1) {

                        for (i = 0; i < nombrePres2; i++) {
                                TabRes2[i] = 0;
                        }

                        printf("\nVeuillez voter une autre fois s'il vous plait\n");

                        for (i = 0; i < nombreElect; i++) {
                                printf("\nElecteur %d (CIN: %s), veuillez entrer le nombre de president vous voulez voter pour :  ", i + 1, TabElect[i]);
                                scanf("%d", & choix2);

                                while (choix2 < 1 || choix2 > nombrePres2) {
                                        printf("\nChoix invalide, veuillez ressayer:  ");
                                        scanf("%d", & choix2);
                                }

                                TabRes2[choix2 - 1] = TabRes2[choix2 - 1] + 1;
                                printf("\nMerci. Votre vote a ete enregistre\n\n");
                        }

                        printf("\n**********************\n\n");

//Affichage du nombre de votes pour chaque president
                        for (i = 0; i < nombrePres2; i++) {
                                printf("\nPresident %s a %d votes.\n", TabPres2[i], TabRes2[i]);
                        }

                        cmp = 0;
                        for (i = 0; i < nombrePres2 - 1; i++) {
                                if (TabRes2[i] == TabRes2[i + 1]) {
                                        cmp++;
                                }
                        }
                }

//Calcul du min pour eliminer le president qui a le minimum des votes au 2eme tour de l'election
                int min = TabRes2[0];

                for (i = 0; i < nombrePres2; i++) {
                        if (TabRes2[i] < min) {
                                min = TabRes2[i];
                        }
                }

//Creation d'un nouveau tableau TabPres3 pour stocker les noms des presidents qui ont eu un nombre de votes >min
                int nombrePres3 = 0;
                char TabPres3[100][30];

//fonction strcpy pour copier les noms des presidents qui ont eu un nombre de votes >min dans le nouveau tableau TabPres3
                for (i = 0; i < nombrePres2; i++) {
                        if (TabRes2[i] > min) {
                                strcpy(TabPres3[nombrePres3], TabPres2[i]);
                                nombrePres3++;
                        }
                }

//Si tous les electeurs ont voté pour le meme president, on passe directement pour annoncer le gagnant de la présidentielle
                if (nombrePres3 == 1) {
                        system("cls");
                        printf("\nPresident %s a remporte l'election presidentielle !!!", TabPres3[0]);
                } else {

                        system("cls");
                        printf("ELECTION PRESIDENTIELLE  ---  3EME TOUR\n\n");
                        printf("Liste des presidents qui ont passes au 3eme tour de lelection: \n");
                        printf("\n**********************\n\n");

//Affichage de la liste des presidents qui ont passes au 3eme tour de l'election
                        printf("Liste des presidents qui ont passes au 3eme tour de l'lection: \n");
                        for (i = 0; i < nombrePres3; i++) {
                                printf("President N %d: %s \n", i + 1, TabPres3[i]);
                        }

//Election --- 3eme tour

                        int choix3;
                        int TabRes3[nombrePres3];

//Valeur de 0 pour toutes les cases TabRes3[i] qui stockent le nombre de votes pour chaque president qui a passe au 3eme tour
                        for (i = 0; i < nombrePres2; i++) {
                                TabRes3[i] = 0;
                        }

                        printf("\n**********************\n\n");

//Processus Vote
                        for (i = 0; i < nombreElect; i++) {
                                printf("\nElecteur %d (CIN: %s), veuillez entrer le nombre de president vous voulez voter pour :  ", i + 1, TabElect[i]);
                                scanf("%d", & choix3);
//Electeur doit choisir un nombre qui correspond a la liste des presidents qui ont passes au 3eme tour
                                while (choix3 <= 0 || choix3 > nombrePres3) {
                                        printf("\nChoix invalide, veuillez ressayer :  ");
                                        scanf("%d", & choix3);
                                }

//Stockage du choix de l'electeur dans un nouveau tableau TabRes pour calculer le nombre de votes de chaque president
                                TabRes3[choix3 - 1] = TabRes3[choix3 - 1] + 1;
                                printf("\nMerci. Votre vote a ete enregistre\n\n");
                        }

//Affichage du nombre de votes pour chaque president
                        for (i = 0; i < nombrePres3; i++) {
                                printf("\nPresident %s a %d votes.\n", TabPres3[i], TabRes3[i]);
                        }

//Calcul du max pour trouver le president qui a eu le maximum des votes au 3eme tour de l'election
                        int max = TabRes3[0];

                        for (i = 0; i < nombrePres3; i++) {
                                if (TabRes3[i] > max) {
                                        max = TabRes3[i];
                                }
                        }

//Creation d'un nouveau tableau TabPres4 pour stocker le nom du president gagnant qui a eu un nombre de votes maximal
                        int nombrePres4 = 0;
                        char TabPres4[100][30];
//fonction strcpy pour copier le nom des president qui a eu un nombre de votes maximal dans le nouveau tableau TabPres4
                        for (i = 0; i < nombrePres3; i++) {
                                if (TabRes3[i] >= max) {
                                        strcpy(TabPres4[nombrePres4], TabPres3[i]);
                                        nombrePres4++;
                                }
                        }


//Refait du 3eme tour si au minimum 2 presidents ont un nombre de votes egaux
                        while (nombrePres4 > 1) {
                                for (i = 0; i < nombrePres3; i++) {
                                        TabRes3[i] = 0;
                                }

                                printf("\nVeuillez voter une autre fois s'il vous plait\n");

                                for (i = 0; i < nombreElect; i++) {
                                        printf("\nElecteur %d (CIN: %s), veuillez entrer le nombre de president vous voulez voter pour :  ", i + 1, TabElect[i]);
                                        scanf("%d", & choix3);

                                        while (choix3 < 1 || choix3 > nombrePres3) {
                                                printf("Choix invalide, ressayer :  ");
                                                scanf("%d", & choix3);
                                        }

                                        TabRes3[choix3 - 1] = TabRes3[choix3 - 1] + 1;
                                        printf("\nMerci. Votre vote a ete enregistre\n\n");
                                }

                                printf("\n**********************\n\n");

//Affichage du nombre de votes pour chaque president
                                for (i = 0; i < nombrePres3; i++) {
                                        printf("\nPresident %s a %d votes.\n", TabPres3[i], TabRes3[i]);

                                }

                                nombrePres4 = 0;

                                for (i = 0; i < nombrePres3; i++) {
                                        if (TabRes3[i] >= max) {
                                                strcpy(TabPres4[nombrePres4], TabPres3[i]);
                                                nombrePres4++;
                                        }
                                }

                        }

                        printf("\n**********************\n\n");

                        system("cls");

//Affichage du president gagnant de la presidentielle
                        for (i = 0; i < nombrePres4; i++) {
                                printf("#########################################\n");
                                printf("\nPresident %s a remporte l'election presidentielle !!!\n", TabPres4[0]);
                                printf("#########################################\n");

                        }
                }

        }
        return 0;
}






