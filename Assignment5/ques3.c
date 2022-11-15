//WAP to print the first N natural numbers in reverse order.
#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the number from where you want to reverse=");
    scanf("%d",&n);
    printf("The first %d natural number in reverse order are:\n",n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}