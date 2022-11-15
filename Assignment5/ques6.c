//WAP to print the first N even natural numbers.
#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The first %d even natural number are:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i);
    }
    return 0;
}