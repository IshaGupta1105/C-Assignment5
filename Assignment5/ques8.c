//WAP to print squares of the first N natural numbers.
#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Squares of the first %d natural number are:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
} 