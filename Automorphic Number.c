#include<stdio.h>

int main()
{
    int N,flag=0;

    scanf("%d",&N);
    int sq = N * N;
    printf("\n %d \n",sq);

    while(N)
    {
        if(N % 10 != sq % 10)
        {
            flag = 0;
            break;
        }
        else
        {
            N/=10;
            sq/=10;
            flag = 1;
        }
    }
    if(flag==1)
        printf("Automorphic");
    else
        printf("Not Automorphic");
    return 0;
}
