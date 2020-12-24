#include<stdio.h>


int main()
{
    int i = 5;

    loop :if(i != 0)
    {
        printf("%d ",i);
        i = i - 1;
        goto loop;
    }

    return 0;
}
