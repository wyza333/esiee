#include <stdio.h>
#include <stdlib.h>

void print_between_two_int_by_step(int start, int end, int step) {
    int i, j;
    
    for (i = end; i >= start; i) {
        for (j = 0; j < step; j++) {
                if (i >= start) printf("%d ", i--);
        }
        printf("\n");
    }
}

int main(int argc, char* argv[]) {
    int start, end, step;

    if (argc == 1) {
        printf("Nombre de départ : ");
        scanf("%d", &start);
        printf("Nombre de fin : ");
        scanf("%d", &end);
        printf("Taille du pas : ");
        scanf("%d", &step);
    } else if (argc == 2) {
        end = atoi(argv[1]);
        printf("Nombre de départ : ");
        scanf("%d", &start);
        printf("Taille du pas : ");
        scanf("%d", &step);
    } else if (argc == 3) {
        start = atoi(argv[1]);
        end = atoi(argv[2]);
        printf("Taille du pas : ");
        scanf("%d", &step);
    } else {
        start = atoi(argv[1]);
        end = atoi(argv[2]);
        step = atoi(argv[3]);
    }

    print_between_two_int_by_step(start, end, step);
    return 0;
}