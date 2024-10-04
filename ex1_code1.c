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
        printf("%d\n",n);
        f(n-1);
    }
}

void f_loop(int n) {
    for (n; n > 0; n--) {
        printf("%d\n",n);
    }
}