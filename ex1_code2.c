#include <stdio.h>

void f(int);
void f_loop(int);

int main() {
    f(5);
    printf("\n");
    f_loop(5);
    return 0;
}

void f(int n){
    if(n>0){
        f(n-1);
        printf("%d\n",n);
    }
}

void f_loop(int n) {
    int i = 1;
    for (i; i <= n; i++) {
        printf("%d\n",i);
    }
}