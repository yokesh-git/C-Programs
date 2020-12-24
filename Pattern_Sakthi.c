#include<stdio.h>

int main()
{
    int row,space = 0;
    int N = 5;
    row = N-1;
    int safe;
    safe = N;

    while(N)
    {
        if(space <N)
        {
            printf("S");

            space++;
            //printf("%d",line);
            continue;
        }
        int printStar = N - row;

        star : if(printStar!=0)
        {
            //if(count)
            N--;
            printf("* ");
            space = 0;
            printStar--;
            goto star;
            //continue;
        }
        else{
                if(printStar == safe) break;
            int c = row--;
            //printStar--;
            N--;
            goto star;
        }
    }

        //printf("\n");

    return 0;
}
