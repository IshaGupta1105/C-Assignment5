//WAP to print the first N odd natural numbers.
#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The first %d odd natural numbers are:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",(2*i+1));
    }
    return 0;
}