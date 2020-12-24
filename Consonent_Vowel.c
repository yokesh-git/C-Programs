#include<stdio.h>
int CheckVowel(char v)
{
    if(v == 'a' || v == 'e' ||v == 'i' ||v == 'o' ||v == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T)
    {
        int N;
        scanf("%d",&N);
        char S[N];
        scanf("%s",&S);
        int Returned_Val,count=0;

        for(int i=0;i<N;i++)
        {
            Returned_Val = CheckVowel(S[i]);
            //printf("\n First RV %d",Returned_Val);
            if(Returned_Val == 0)
            {
                //printf("\n Non Vowel");
                Returned_Val = CheckVowel(S[i+1]);
                if(Returned_Val == 1)
                {
                    //printf("\n Vowel");
                    count++;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }

        T--;
        printf("%d",count);
    }

    return 0;
}
