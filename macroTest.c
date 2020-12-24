#include<stdio.h>
#define POW(X) ((X) * (X))

int main()
{
    int i = 3;
    int k = POW(i+1);

    printf("%d",k);
    return 0;
}
