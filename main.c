#include <stdio.h>
#include <stdlib.h>

char tableau[2][2];
int i;
int j;

void inittab()
    {
            for(i=0;i<2;i++)
    {
                for(j=0;j<2;j++)
                {
                        tableau[i][j] = ' ' ;
                }

    }

    }

void modiftab()
{

            int colonne;
            int ligne;
            int k=0;

printf("Au joueur 1 :\n\n");
printf("Choisir une ligne\n\n");
scanf("%d", &ligne);
printf("Choisir une colonne\n\n");
scanf("%d",&colonne);
system("cls");
tableau [ligne -1][colonne -1] ='X';
affichertab();


printf("Au joueur 2 :\n\n");
printf("Choisir une ligne\n\n");
scanf("%d", &ligne);
printf("Choisir une colonne\n\n");
scanf("%d",&colonne);
system("cls");
tableau [ligne -1][colonne -1] ='O';
affichertab();

}


//





void affichertab()
    {
           printf("\n\n\n");
           printf("+-----+\n");
           printf("|%c|%c|%c|\n", tableau[0][0], tableau[0][1], tableau[0][2]);
           printf("+-----+\n");
           printf("|%c|%c|%c|\n", tableau[1][0], tableau[1][1], tableau[1][2]);
           printf("+-----+\n");
           printf("|%c|%c|%c|\n", tableau[2][0], tableau[2][1], tableau[2][2]);
           printf("+-----+\n");
           printf("\n\n\n");


    }



int main()
{

int choixMenu;


printf("===Bienvenue dans le jeu du Morpion===\n\n");
printf("Veuillez selectionner  mode !\n\n");
printf("1 : Joueur VS Joueur\n");
printf("2 : Joueur VS IA\n");
printf("3 : Regles du Morpion\n");
scanf("%d", &choixMenu);


switch (choixMenu)
{
case 1:

system("cls");

inittab();

   for (i=0; i<9; i++)
                {
                        system("cls");
                        affichertab();
                        modiftab();
                        affichertab();
       }
  break;


case 2:
  printf("Ce mode n'est pas encore disponible");
  break;


case 3:
        printf("La regle est simple, vous devez reussir a aligner 3 croix ou ronds?\n");
        printf("Le premier joueur a aligner une suite de 3 symbles win\n");
  break;


default:
  printf("Erreur Mauvais Choix :)");
  break;
}




    return 0;
}
