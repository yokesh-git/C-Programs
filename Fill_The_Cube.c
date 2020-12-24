#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
 int N,row,col;
 scanf("%d",&N);
 char org[N][N];
 for(row=0;row<N;row++)
 {
     for(col=0;col<N;col++)
     {
         scanf("%c ",&org[row][col]);
     }
 }


 int bmelt[N][N];
 int tmelt[N][N];
 int lmelt[N][N];
 int rmelt[N][N];

 int size=N;
 int i,j,mi[N];
 int maxi=0, maxj=0, previ=0, topi=0;

 //printf("Org array:\n");
 for(i=0;i<size;i++)
 {
  //printf("\n");
  mi[i]=size-1;
  for(j=0;j<size;j++)
  {
   bmelt[i][j]=0;
   //printf("%c ", org[i][j]?'C':'D');
  }
 }
 //printf("\n");

 for(i=size-1;i>=0;i--)
 {
  for(j=0;j<size;j++)
   if(org[i][j])
    bmelt[mi[j]--][j]=1;
 }


 //printf("\n");

 //printf("max bmelt array:\n");
 for(j=0;j<size;j++)
 {
  for(i=0;i<size;i++)
  {
   if(j==0)
   {
    if(bmelt[i][j])
    {
     previ=topi=i;
     break;
    }
   }
   else
   {
    if(bmelt[i][j] && i<previ)
     goto done;
    if(i!=0 && bmelt[i][j] && bmelt[i-1][j]==0)
     previ=i;
   }
  }
 }
 done:
 maxj = j;
 maxi = size-topi;
 printf("%d",maxi>maxj?maxj:maxi);

 //printf("\n");
 return 0;

}
