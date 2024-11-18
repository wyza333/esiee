/* Exercice 4 */
#include <stdio.h>
void MinMax(int n1, int n2, int* maxi, int* mini){
    if (n1 > n2){
        *maxi = n1;
        *mini = n2;
    }
    else{
        *maxi = n1;
        *mini = n2;
    }
}
int main()
{
    int n1, n2, maxi, mini;
    printf(" Saisir deux nombres \n ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("n1 = %d et n2 = %d \n ",n1,n2);
    MinMax(n1,n2,&maxi, &mini);
    printf("max(%d,%d) = %d ",n1,n2,maxi);
    printf("min(%d,%d) = %d ",n1,n2,mini);
    return 0;
}


