#include<stdio.h>

int main()
{
    int bin=1010;
    //scanf("%d",&bin);
    int digit,i=0,sum=0;
    while(bin)
    {
        digit = bin % 10;
        sum +=digit * pow(2,i);
        //printf("\n %d \n",sum);
        i++;
        bin /= 10;
    }
    printf("%d",sum);


    return 0;
}
