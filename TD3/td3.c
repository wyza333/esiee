#include <stdio.h>

/* Correction du TD3 */

/* 
----------
Question 1  
----------
Ecrire une fonction qui affiche un tableau de caractÃ¨re, passÃ©e en paramÃ¨tre, Ã  l'envers
*/

/* Pour un tableau de caractÃ¨re, il faut donner en paramÃ¨tre la taille du tableau */
void affiche_tab_cara_envers ( char tab_carac [], int taille)
{
    int i;
    for (i = taille -1; i >= 0 ; i--)
    {
        printf("%c",tab_carac[i]);
    }
    printf("\n");
}

/*
--------------
Question 2 & 3
--------------
Ecrire une fonction qui affiche une chaine de caractÃ¨re, passÃ©e en paramÃ¨tre, Ã  l'envers
*/

/* Les chaines de caractÃ¨re contiennent le caractÃ¨re '\0' en fin de chaine, 
on n'a pas donc pas besoin de donner la taille de la chaine en paramÃ¨tre de la fonction
*/

/*version iterative*/
void affiche_chaine_cara_envers_iter (char chaine_cara [])
{
    /* etape 1 : il faut calculer la taille de la chaine */
    int i,taille = 1; 
    while ( chaine_cara[taille] != '\0') taille ++;

    /*etape 2, on parcours la chaine en partant de la fin*/
    for (i = taille -1; i >= 0 ; i--)
    {
        printf("%c",chaine_cara[i]);
    }
    printf("\n");
    /* 
    Avec ce code on doit donc parcourir deux fois la chaine
    Une fois pour connaitre la longueur, et une seconde fois pour l'affichage
    */

}
/*version recursive */
void affiche_chaine_cara_envers_recur (char chaine_cara [])
{
    if (chaine_cara[0]!='\0'){
        affiche_chaine_cara_envers_recur(&chaine_cara[1]);
        printf("%c",chaine_cara[0]);
    }
}


/*
----------
Question 4  
----------
Ecrire une fonction qui prend en paramÃ¨tre un tableau de rÃ©els et retourne la moyenne des
Ã©lÃ©ments prÃ©sents dedans.
*/

float calcul_moyenne (float tab[], int taille_tab)
{
    /* 
        On travaille sur des nombres rÃ©els donc de type 'float' (ou 'double')
        On retourne la valeur moyenne, un nombre rÃ©el donc du type 'float'
    */
    float moyenne = 0;/* Il ne faut pas oublier d'initialiser Ã  zero*/
    int i;
    for (i = 0; i < taille_tab; i++)
    {
        moyenne += tab[i]/taille_tab;
    }
    return moyenne;

}
/*
Autre version du code avec une variable intermediaire 

float calcul_moyenne (float tab[], int taille_tab)
{
    float somme = 0, moyenne;
    int i;
    for (i = 0;i < taille_tab; i++)
        somme += tab[i];
    moyenne = somme/taille_tab;
}
*/
/* fonction pour afficher un tableau d'entier */
void affiche_tab_float (float tab[],int taille_tab)
{
    int i;
    printf(" tab = [ ");
    for (i = 0; i < taille_tab;i ++)
        printf(" %f ", tab[i]);
    printf(" ] \n");
}
/*
----------
Question 5  
----------
Ecrire une fonction qui prend en paramÃ¨tre un tableau dâ€™entiers et multiplie tous ses
Ã©lÃ©ments par deux.
*/
void tab_question5 (int tab[], int taille_tab){
    int i;
    for (i = 0; i < taille_tab; i++)
    {
        tab[i] *=2;
    }
}
/* fonction pour afficher un tableau d'entier */
void affiche_tab_int (int tab[],int taille_tab)
{
    int i;
    printf("[ ");
    for (i = 0; i < taille_tab;i ++)
        printf(" %d ", tab[i]);
    printf(" ] \n");
}

/*
----------
Question 6  
----------
Ecrire une fonction qui prend en paramÃ¨tre une chaine de caractÃ¨res et change ses Ã©lÃ©ments
en majuscules.
*/
void min_to_maj (char chaine[])
{
    int i = 0;
    while(chaine[i]!='0')
    {
        if ((chaine[i]>='a') &&  (chaine[i]<='z'))
        {
            chaine[i] = 'A' - 'a' + chaine[i];
        }
        i++;
    }
}
/* Programme principal*/ 
int main (int argc, char* argv[])
{
    char tab_c[] = {'T','O','T','O'};
    char chaine1[] = "TITI";
    float tab_r[] = {-1.4, 20, 4, 3.2};
    int tab_i[] = {1,2,3,4};
    char chaine2[] = "abc";
    char* chaine3 = "coucou";
    printf("\n ---------- \n");
    printf(" Question 1 \n");
    printf(" ---------- \n");
    printf("chaine de caractere a afficher a l'envers : %s", chaine1);
    affiche_tab_cara_envers(tab_c,4);
    printf("\n -------------- \n");
    printf(" Question 2 & 3 \n");
    printf(" -------------- \n");
    printf("chaine de caractere a afficher a l'envers : %s", chaine1);
    printf(" Solution iterative \n");
    affiche_chaine_cara_envers_iter(chaine1);
    printf(" Solution recursive \n");
    affiche_chaine_cara_envers_recur(chaine1);
    printf("\n");
    printf("\n ---------- \n");
    printf(" Question 4 \n");
    printf(" ---------- \n");
    printf(" moyenne  de ");
    affiche_tab_float(tab_r,4);
    printf(" est  %f \n", calcul_moyenne(tab_r,4));
    printf("\n ---------- \n");
    printf(" Question 5 \n");
    printf(" ---------- \n");
    printf(" Avant l'appel de la fonction ");
    affiche_tab_int(tab_i,4); 
    tab_question5(tab_i,4);
    printf(" AprÃ¨s l'appel de la fonction ");
    affiche_tab_int(tab_i,4); 


    printf("\n ---------- \n");
    printf(" Question 6 \n");
    printf(" ---------- \n");
    min_to_maj(chaine2);
    printf(" La chaine 'abc' aprÃ¨s la question 6 est :  %s\n",chaine2); 
   
    printf("\n");

    return 0;


}
