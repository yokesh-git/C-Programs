//Decimal to Binary

#include<stdio.h>
#include<string.h>
int main()
{
    int dec;
    scanf("%d",&dec);
    int rem=0;
    int bin=0;
    int i=1;
    while(dec)
    {
        rem = dec % 2;
        bin += rem * i;
        //printf("%c",bin[i]);
        i *= 10;
        dec/=2;
    }
    printf("%d",bin);

    return 0;
}
