//WAP to print the first n odd natural numbers in reverse order.
#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The first %d odd natural numbers in reverse order are:\n",n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",(2*i+1));
    }
    return 0;
}