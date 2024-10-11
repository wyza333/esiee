#include <stdio.h>
#include <stdlib.h>

int somme_1to100(){
    int i;
    int somme = 0;
    for (i = 1; i <= 100; i++) somme += i;
    return somme;
}

int somme_mintomax(int start, int end){
    int i;
    int somme = 0;
    for (i = start; i <= end; i++) somme += i;
    return somme;
}

int main(int argc, char* argv[]){
    int start, end;

    printf("%d\n", somme_1to100());

     if (argc == 1) {
        printf("Nombre de départ : ");
        scanf("%d", &start);
        printf("Nombre de fin : ");
        scanf("%d", &end);
    } else if (argc == 2) {
        end = atoi(argv[1]);
        printf("Nombre de départ : ");
        scanf("%d", &start);
    }

    printf("%d\n", somme_mintomax(start, end));
    return 0;
}
