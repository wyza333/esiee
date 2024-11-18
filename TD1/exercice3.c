#include <stdio.h>
int add (int a, int b ){
    return a + b;
}
int multipli (int a, int b){
    return a*b;
}

int main()
{
    int a,b;
    int aFoisb, aPlusb;
    printf("Saisir deux nombres \n");
    scanf("%d",&a);
    scanf("%d",&b);
    aFoisb = multipli(a,b);
    aPlusb = add(a,b);
    printf(" %d + %d = %d\n",a,b,aPlusb);
    printf(" %d * %d = %d\n",a,b,aFoisb);
    return 0;
}

