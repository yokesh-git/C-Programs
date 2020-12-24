#include<stdio.h>

int main()
{
    const char *Numbers [] = {"zero","One","Two","Three","Four","Five","Six","Seven","Eight",\
    "Nine","ten","eleven","twelve","thirteen","Fourteen","fifteen","Sixteen","Seventeen",\
    "eighteen","Nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five",\
    "twenty six","twenty seven","twenty eight","twenty nine","thirty","thirty one",\
    "thirty two","thirty three","thirty four","thirty five","thirty six","thirty seven","thirty eight","thirty nine",\
    "forty","forty one","forty two","forty three","forty four","fort five","forty six","forty seven",\
    "forty eight","forty nine","fifty","fifty one","fifty two","fifty three","fifty four",\
    "fifty five","fifty six","fifty seven","fifty eight","fifty nine","Sixty","Sixty one",\
    "Sixty two","Sixty three","Sixty four","Sixty five","Sixty six","Sixty seven","Sixty eight",\
    "Sixty nine","Seventy","Seventy one","Seventy two","Seventy three","Seventy four","Seventy five",\
    "Seventy six","Seventy seven","Seventy eight","Seventy nine","eighty","eighty one",	"eighty two","eighty three",\
    "eighty four","eighty five","eighty six","eighty seven","eighty eight","eighty nine","Ninety",\
    "Ninety one","Ninety two","Ninety three","Ninety four","Ninety five","Ninety six","Ninety seven",\
    "Ninety eight","Ninety nine","hundred"};

    printf("%s",Numbers[1]);
    int N,ind,temp,vowCount=0;
    scanf("%d",&N);
    int Num[N];
    char *RequriedNum [N];
    char s[100];
    for(ind=0;ind<N;ind++)
    {
        scanf("%d",&Num[ind]);
    }
    for(ind=0;ind<N;ind++)
    {
        temp = Num[ind];
        RequriedNum[ind] = Numbers[temp];
    }
    for(ind=0;ind<N;ind++)
    {
        printf("%s ",RequriedNum[ind]);
    }
    char *t;
    for(ind=0;ind<N;ind++)
    {

        for(t = RequriedNum[ind];*t!='\0';t++)
        {
            s = t;
            print("%c",s[0])
            if(t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
            {
                vowCount++;
            }

        }
    }
    printf("%d",vowCount);

    return 0;
}
