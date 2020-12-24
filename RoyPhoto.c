#include<stdio.h>

int main()
{
	int L,N,W,H;
	scanf("%d",&L);
	scanf("%d",&N);

	while(N)
	{
		scanf("%d %d",&W,&H);

		if(L<W && L<H)
		{
			printf("CROP IT\n");
		}
		else if(L<W || L<H)
		{
			printf("UPLOAD ANOTHER\n");
		}
		else
		{
			printf("ACCEPTED");
		}
		N--;
	}

	return 0;
}
