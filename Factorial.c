#include<stdio.h>

int main()
{
    int fact=1,N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d",N,fact);

    return 0;
}
