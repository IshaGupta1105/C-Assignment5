//WAP to print the first N even natural numbers in reverse order.
#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The first %d even natural numbers in reverse order are:\n",n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",2*i);
    }
    return 0;
}