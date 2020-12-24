#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define TRUE 1
#define FALSE 0
int main()
{
    int N, check_for_Factor, checkUntil, factorFlag = FALSE;
    for(N= 2, factorFlag = FALSE; N < 11 ; N++,factorFlag = FALSE)
    {
    checkUntil = sqrt(N);
    for(check_for_Factor = 2; check_for_Factor <= checkUntil; check_for_Factor++)
         if( N % check_for_Factor == 0)
         {
             factorFlag = TRUE;
             break;
         }
         if(factorFlag == FALSE)
               printf("%d ", N);
    }
return 0;
}
