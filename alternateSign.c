#include<stdio.h>

int main()
{
    int i,sign=1,sum=0;
    for(i=1;i<=10;i++)
    {
        if(sign == 1)
        {
            sum += i;
            sign = 0;

        }
        else
        {
            sum = sum - i;
            sign = 1;
        }
    }
    printf("%d",sum);

    return 0;
}
