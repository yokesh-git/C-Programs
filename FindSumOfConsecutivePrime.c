#include<stdio.h>
#include<math.h>

int main()
{

    int N,times,flag=0,check,until,temp,sum=0;
    //scanf("%d",&N);
    int safe;
    safe = N;
    for(N= 2, flag = 0; N < 5 ; N++,flag = 0)
    {
        until = sqrt(N);
        for(check = 2; check <= until; check++)
        {
            if(N%check == 0)
            {
                flag=1;
                break;
            }
        }
        if(flag == 0)
        {
            sum += N;
            //if(sum == safe)
                printf("%d ",N);
            //break;
        }
    }
    //printf("%d",temp);

    return 0;
}
