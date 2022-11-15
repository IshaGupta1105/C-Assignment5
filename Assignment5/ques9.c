//WAP to print cubes of the first N natural numbers.
#include<stdio.h>

int main()
{
    int i=1,n,cube;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Cubes of the first %d natural numbers are:\n",n);
    do{
        cube=i*i*i;
        i++;
        printf("%d\n",cube);
    }while(i<=n);
    return 0;
}