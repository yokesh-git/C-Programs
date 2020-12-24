#include<stdio.h>
int gcd(int a, int b)
{
    while(a != b)
    {
        if(a>b)
        {
            a -=b;
        }
        else
        {
            b -=a;
        }
    }
    return a;
}
int main()
{
    int x,y=-1;
    while(1)
    {
        scanf("%d",&x);
        if(x<1)
        {
            break;
        }
        else if(y==-1)
        {
            y = x;
            printf("\nElse if -1 y val is : %d \n",y);
        }
        else if(x<y)
        {
            y = gcd(x,y);
            printf("\nElse if y val is : %d \n",y);
        }
        else
        {
            y = gcd(y,x);
            printf("\nElse y val is : %d \n",y);
        }
    }
    printf("%d",y);


    return 0;
}
