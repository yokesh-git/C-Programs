#include<stdio.h>

int main()
{

    int N = 3;
    int count = 0;
    int row,col;
    int safe;
    safe = N;
    printf("N is %d\n",N);
    for(N;N>=1;N--)
    {
        count += N;
        printf("count is %d\n",count);
    }

    for(row = count; row>=1; row--){
        
        for(col = count ; col>=1,safe!=0;col--,safe--){
            printf("%d\n",col);
            row--;
            printf("%d ",row);
            
            
        }
        
    }

    return 0;
}