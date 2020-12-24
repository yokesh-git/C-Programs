#include<stdio.h>

int main()
{
    long long int N,checkfactor;
    scanf("%d",&N);
    int Primes[N];

    for(checkfactor = 2;checkfactor<=N;checkfactor++)
    {
        if(checkfactor % 2 == 0)
        {
            continue;
        }
        else
        {
            printf("%d ",checkfactor);
        }
    }
    return 0;

}
