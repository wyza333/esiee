#include <stdio.h>
#include <stdlib.h>

char switch_MAJ(char c){
    return c+32;
}

void print_between_two_char(int first, int last) {
    int i;
    if (first < 'a') first += 32;
    if (last < 'a') last += 32;

    for (i = first; i <= last; i++) {
        if (i%2 == 1) printf("%c", i);
        if (i%2 == 0) printf("%c", i-32);
    }
    printf("\n");
}

int main(int argc, char* argv[]){
    char first = argv[1][0];
    char last = argv[2][0];
    printf("%d %d\n", first, last);

    print_between_two_char(first, last);

    return 0;
}