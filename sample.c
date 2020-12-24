#include<stdio.h>
int main()
{
    int n,num;
    int arr[4]={12,13,14,15};

    //printf("enter  2 elements to update\n");
    scanf("%d",&n);
    scanf("%d",&num);

    arr[0]=n;
    arr[3]=num;

    for(int ind=0;ind<4;ind++)
        printf("%d ",arr[ind]);

    return 0;
}
