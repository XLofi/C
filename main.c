//JULIO GERMADE L1 INFO GROUPE 4
//TP1 EX 1,2,3
#include <stdio.h>

#define SIZE 50

int tri_selection (int a [], int lenght) {
    int i, j, tmp, index;
    //affiiher les éléments du tableau
    for (i = 0; i < 10; ++i) {
        printf("%4d", a[i]);
    }

    for (i = 0; i < (10 - 1); i++) {
        index = i;

        for (j = i + 1; j < 10; j++) {
            if (a[index] > a[j]&&a[index]!=NULL)
                index = j;
        }
        if (index != i&&index!=NULL) {
            tmp = a[i];
            a[i] = a[index];
            a[index] = tmp;
        }
    }
    printf("\n******** tableau triee par ordre croissant selection ********\n");

    for (i=0; i < 10; i++)
        printf("%4d", a[i]);
}

int tri_insertion(int a [], int lenght){
    int i, j, tmp;

    //afficher les éléments du tableau
    for (i=0; i < 15; ++i)
    {
        printf("%4d", a[i]);
    }

    for (i=1 ; i <= 15-1; i++) {
        j = i;

        while (j > 0 && a[j-1] > a[j]) {
            tmp = a[j];
            a[j] = a[j-1];
            a[j-1] = tmp;

            j--;
        }
    }

    printf("\n******** tableau triee par ordre croissant insertion ********\n");

    for (i=0; i < 15; i++)
        printf("%4d", a[i]);

}

int tri_bulle(int a [],int lenght){
    int i, j, tmp;

    //afficher les éléments du tableau
    for (i=0; i < 15; ++i)
    {
        printf("%4d", a[i]);
    }

    for (i=0 ; i < 15-1; i++)
    {
        for (j=0 ; j < 15-i-1; j++)
        {
            /* Pour un ordre décroissant utiliser < */
            if (a[j] > a[j+1]&&a[j]!=NULL)
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

    printf("\n******* tableau triée par ordre croissant *******\n");

    //afficher les éléments du tableau triée
    for (i=0; i < 15; ++i)
    {
        printf("%4d", a[i]);
    }
}

int main() {
    int lenght = 50;
    int a[SIZE];
    int taille_echantilon;
    printf("Entrez la taille de l'echantillon (ex: 10 ou 15 selon l'exo)\n");
    scanf("%d", &taille_echantilon);
    for (int i = 0; i != taille_echantilon; i++) {
        printf("Remplir le tableau il reste %d cases\n", taille_echantilon - i);
        scanf("%d", &a[i]);
    }
    //tri_selection(a, lenght);
    //tri_insertion(a,lenght);
    tri_bulle(a,lenght);
}

