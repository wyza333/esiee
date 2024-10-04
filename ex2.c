#include <stdio.h>

void f1(int a, int b){
    if (a <= b) {
        printf("%d\n", a);
        f1(a+1,b);
    }
}

void f1_loop(int a, int b){
    for (a; a <= b; a++) {
        printf("%d\n",a);
    }
}

void f2(int a, int b){
    if (a <= b) {
        f2(a+1,b);
        printf("%d\n", a);
    }
}

void f2_loop(int a, int b){
    for (b; b >= a; b--) {
        printf("%d\n",b);
    }
}

int f3(int a, int b){
    if (a < b)
        return a+(f3(a+1,b));
}

int f3_loop(int a, int b){
    int sum = 0;
    for (a; a <= b; a++) {
        sum += a;
    }
    return sum;
    }

int main(){
    printf("Fonction 1 :\n");
    f1(3,10);

    printf("Fonction 1 Loop :\n");
    f1_loop(3,10);
    
    printf("Fonction 2 :\n");
    f2(3,10);

    printf("Fonction 2 Loop \n");
    f2_loop(3,10);

    printf("Fonction 3 : %d\n",f3(3,5));

    printf("Fonction 3 Loop : %d\n",f3_loop(3,5));
    
    return 0;
}
