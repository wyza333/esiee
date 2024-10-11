#include <stdio.h>

void print_int(int n){
    int i;
    for (i = 1; i <= n; i++) printf("%d ", i);
    printf("\n");
} 

void print_between_two_int(int a, int b) {
    int i, j;
    int debut, fin;
    if (a > b) fin = a, debut = b;
    else fin = b, debut = a;
    
    for (i = fin; i >= debut; i) {
        for (j = 0; j < 3; j++) {
                if (i >= debut) printf("%d ", i--);
        }
        printf("\n");
    }
}

void print_between_two_int_while(int a, int b) {
    int i;
    int debut, fin;
    if (a > b) fin = a, debut = b;
    else fin = b, debut = a;
    i = fin;

    while (i >= debut){
        if ( (i-fin-1) % 3 != 0) printf("%d ", i--);
        else printf("%d\n", i--);
    }
}

int main() {
    print_int(10);

    print_between_two_int(13, 20);

    print_between_two_int_while(13,20);
    return 0;
}