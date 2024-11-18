#include <stdio.h>

/* Fonctions rÃ©cursive*/
void f1_rec(int a, int b){
    if (b>a){
        printf("%d ",b);
        f1_rec(a,b-1);
    }
    if (b<a){
        printf("%d ",a);
        f1_rec(a-1,b);
    }
    if (a==b)
        printf("%d \n",a);
        
}
int f2_rec(int a, int b){
    if (b>a){
        return b + f2_rec(a,b-1);
    }
    if (b<a){
        return a + f2_rec(a-1,b);
    }
    return a;
        
}
/* Fonctions avec boucle for */
void f1_for (int a, int b)
{
	int i;
	if (a>b)
	{
		for (i =a;i>=b;i--)
			printf("%d ",i);
	}
	else
	{
		for (i=a;i<=b;i++)
			printf("%d ",i);
	}
	printf("\n");

}

int f2_for (int a,int b)
{
	int s = 0, i;
	for (i = a; i < b+1;i++)
	{
		s += i;
	}
	return s;
}

int main(int argc , char* argv[])
{
    printf(" --- Fonctions recursive --- \n");
    printf("f1(%d,%d) --> ",3,5);
    f1_rec(3,5);
    printf("f1(%d,%d) --> ",5,3);
    f1_rec(5,3);
    printf("%d + %d = %d \n", 3,5,f2_rec(3,5));
    
    printf(" --- Fonctions avec boucle for --- \n");
    printf("f1(%d,%d) --> ",3,5);
    f1_for(3,5);
    printf("f1(%d,%d) --> ",5,3);
	f1_for(5,3);
	printf("%d + %d = %d \n", 3,5,f2_for(3,5));
	
	return 0;
}

