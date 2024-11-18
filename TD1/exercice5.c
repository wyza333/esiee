    
/* Exercice 5 */

#include <stdio.h>
int main (){
    
    

    char langue;
    printf("Quelle langue parlez vous (choisir une rÃ©ponse) ?\n");
    printf("Le francais - taper F \n");
    printf("L'anglais - taper A \n");
    printf("L'italien - taper I \n");
    printf("Une autre langue - taper Z \n");
    scanf("%c", &langue);
    
    switch(langue){
        case 'F':
            printf("Salut!\n");
            break;
        case 'A':
            printf("Hello!\n");
            break;
        case 'I':
            printf("Ciao! \n");
            break;
        default:
            printf("DesolÃ© je ne parle pas votre langue!\n");
    }
}


