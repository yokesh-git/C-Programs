#include<stdio.h>
#include<string.h>
int main()
{
    char S1[10000],S2[10000];
    int i,j;
    scanf("%s",&S1);
    scanf("%s",&S2);
    int length1 = strlen(S1);
    int length2 = strlen(S2);
    int count1 = 0, count2 = 0;
    for(i=0;i<length1;i++)
    {
        for(j=0;j<length2;j++)
        {
            if(S1[i] == S2[j])
            {
                S1[i] = '-';
                S2[j] = '-';
            }
        }
    }
    for(i=0;i<length1;i++)
    {
        if(S1[i] != '-')
        {
            count1++;
        }
    }
    for(i=0;i<length2;i++)
    {
        if(S2[i] != '-')
        {
            count2++;
        }
    }

    printf("%d",count1+count2);


    return 0;
}
