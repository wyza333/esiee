#include <stdio.h>
#include <stdlib.h>

int power10(int base, int exp){
    int res = base;

    while (exp != 0) {
        res *= 10;
        exp--;
    }
    return res;
}

int reverse_int(int normalint) {
    int exp = 0;
    int reverse_int = 0;
    int normalint_exp = normalint;

    while (normalint_exp != 0) {
        normalint_exp /= 10;
        exp++;
    }

    while (normalint != 0){
        reverse_int += power10(normalint%10, --exp);
        normalint /= 10;
    }

    return reverse_int;
}

int main(int argc, char* argv[]) {
    int int_normal;
    
    if (argc == 1) {
        printf("Nombre à inverser : ");
        scanf("%d", &int_normal);
    } else if (argc == 2) {
        int_normal = atoi(argv[1]);
    }

    printf("%d\n", reverse_int(int_normal));

    return 0;
}