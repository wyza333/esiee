#include <stdio.h>

float f(int, int);
float f_loop(int,int);

int main(){
    float a;
    a = 3.0;

    printf("%f\n", f(a,3));
    printf("%f\n", f(a,0));
    printf("%f\n", f(a,-3));

    printf("%f\n", f_loop(a,3));
    printf("%f\n", f_loop(a,0));
    printf("%f\n", f_loop(a,-3));
    
    return 0;
}

float f(int a, int b){
    if(b<0)
        return 1/f(a,-b);
    if(b>0)
        return 1*f(a,b-1);
    return 1;
}

float f_loop(int a, int b) {
    if(b<0){
        b = -b;
    }
    if(b>0){
        for (b; b > 0; b--){
        }
    }
    if (b==0){
        return 1;
    }
    return b;
}