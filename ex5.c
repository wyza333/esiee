#include <stdio.h>

void print_n_char(char c, unsigned int n) {
    if (n > 0){
        printf("%c",c);
        print_n_char(c, n-1);
    }
}

void print_n_char_loop(char c, unsigned int n) {
    int i = 1;
    for (i; i <= n; i++){
        printf("%c", c);
    }
}

void pyra1(int l){
    if (l > 0){
        print_n_char('*', l);
        printf("\n");
        pyra1(l-1);
    }
}

void pyra1_loop(int l){
    int i = 1;
    for (i; i <= l; i++) {
        print_n_char_loop('*',l-i+1);
        printf("\n");
    }
}

void pyra2(int l){
    if (l > 0){
        pyra2(l-1);
        print_n_char('*', l);
        printf("\n");
    }
}

void pyra2_loop(int l){
    int i = 0;
    for (i; i < l; i++) {
        print_n_char_loop('*', i+1);
        printf("\n");
    }
}

void pyra3_rec(int lM, int l){
    if (l >= 1){
        pyra3_rec(lM, l-1);
        print_n_char(' ', lM-l);
        print_n_char('*', (2*l)-1);
        printf("\n");
    }
}

void pyra3 (int ligneMax){
    pyra3_rec(ligneMax, ligneMax);
}

void pyra3_loop(int l) {
    int i;
    for (i=0; i < l ; i++) {
        print_n_char_loop(' ', l-i-1);
        print_n_char_loop('*', (2*i)+1);
        printf("\n");
    }
}



int main(){
    print_n_char('*',5);
    printf("\n");
    print_n_char_loop('*',5);
    printf("\n\n");

    pyra1(4);
    pyra1_loop(4);

    pyra2(4);
    pyra2_loop(4);

    pyra3(4);
    pyra3_loop(4);

    return 0;
}