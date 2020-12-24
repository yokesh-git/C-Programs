//DECIMAL TO OCTAL

#include<stdio.h>

int main()
{
    int Dec;
    scanf("%d",&Dec);
    int i=1,oct=0,rem=0;
    while(Dec!=0)
    {
        rem = Dec % 8;
        oct += rem * i;

        i = i*10;
        Dec /= 8;
    }
    printf("%d",oct);

    return 0;
}
