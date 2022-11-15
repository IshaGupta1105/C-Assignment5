//WAP to print the first N natural numbers.
#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    printf("The first %d natural numbers are:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}