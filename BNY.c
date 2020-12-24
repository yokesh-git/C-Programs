#include<stdio.h>

int main()
{

    int N, K;
    int *arr;
    int sum = 0;
    int t;


    scanf("%d",&N);
    scanf("%d",&K);
    int p = K;
    int ind = 0;
    int temp;
    int i;
    int count = 0;

    for(i=0;i<N;i++)
    {

        temp = i;
        while(temp!=0)
        {
            t = temp% 10;
            sum += t;
            temp = temp/10;
        }
        temp = i;
        if(sum % K == 0)
        {
            count++;
            sum = 0;
        }
        sum=0;

    }
    printf("%d",count);


    return 0;
}
