#include<stdio.h>
#include<math.h>
int fact(int f)
{
    int factorial = 1;
    while(f)
    {
        factorial = factorial * f;
        f--;
    }
    return factorial;
}
int main()
{
    float X;
    int check=1,call,loop = 0;
    float diff,ans,temp=0.0;
    scanf("%f",&X);


    for(int i=3;i<20;i+=2)
    {
        if(loop == 0)
        {
            if(check == 1)
            {
                //printf("\n Enter 1 time\n");
                call = fact(i);
                temp = X - (pow(X,i)/call);
                printf("\n%f\n",temp);
                check = 0;
                loop = 1;
            }
            call = fact(i);
            temp = -1 * (pow(X,i)/call);
            loop = 1;
        }

        else
        {
            call=fact(i);
            temp = pow(X,i)/call;
            loop = 0;
        }

    }
    //diff = X - temp;
    ans = sin(temp);
    printf("%f",ans);

    return 0;
}
