#include<stdio.h>


int main()
{
    int input1=5;
    int input2[] = {18,11,27,12,14};
    int i,sum=0,count=0;
    for(i=0;i<5;i++)
    {
        if(input2[i]>=12)
        {
            count = 0;
            while(input2[i]!=0 && input2[i]>=12)
            {
                input2[i] -= 12;
                count++;
            }
            sum += count;
        }
    }
    printf("%d",sum);

    return 0;
}
