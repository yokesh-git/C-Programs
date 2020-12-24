#include<stdio.h>

int main()
{
	int N;
	//printf("%d\n",N);
	scanf("%d",&N);
	unsigned long long int p=1;
	while(N!=0)
	{
		p = p*N;
		N--;
	}
	printf("%d",p);
	return 0;
}
