#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N,K;
    int arr[100];

    int ind=0;

    scanf("%d",&N);
    scanf("%d",&K);
    int t,temp,sum=0;
    for(int i=0;i<N;i++)
    {
        temp = i;
        printf("temp %d\n",temp);
        while(temp!=0)
        {

            t = t % temp;
            sum += t;
            printf("t is %d\n",t);
            printf("sum %d\n", sum);
            temp /= 10;
        }
        temp = i;
        printf("sum %d\n",sum);
        if(sum%K==0)
        {
            arr[ind] = i;
            ind++;
            sum = 0;
        }
        sum = 0;
    }
    for(int j=0;j<5;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}
