#include<stdio.h>


int main()
{
    int N;
    scanf("%d",&N);

    for(int row=1;row<=5;row++,printf("\n"))
    {
        for(int i=1;i<N-row;i++)
        {
            printf(" ");
        }
        printf("* ");
    }
}
