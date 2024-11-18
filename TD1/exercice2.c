#include <stdio.h>
int main()
{
    int n1,n2;
    int minimum, maximum;
    printf(" Saisir deux nombres \n ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("n1 = %d et n2 = %d \n ",n1,n2);
    if (n1 >= n2) {
        maximum = n1;
        minimum = n2;
    }
    else {
        maximum = n2;
        minimum = n1;
    }
    printf("max(%d,%d) = %d ",n1,n2,maximum);
    printf("min(%d,%d) = %d ",n1,n2,minimum);
    return 0;
}


