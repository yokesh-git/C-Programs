#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int rorg[100][100];
int rmelt[100][100];

int size=7;
int i,j,mi[7];
int maxi=0, maxj=0, previ=0, topi=0;

int maxof(int bmelt_res,int tmelt_res,int lmelt_res,int rmelt_res)
{
 int max = 0;
 if(max < bmelt_res)
  max = bmelt_res;
 if(max < tmelt_res)
  max = tmelt_res;
 if(max < lmelt_res)
  max = lmelt_res;
 if(max < rmelt_res)
  max = rmelt_res;
 return max;
}

int lrotate(int input[100][100], int output[100][100])
{
 int oi,oj,ri,rj;
 for(ri=0,i=size-1;i>=0;i--,ri++)
  for(rj=0,j=0;j<size-1;j++,rj++)
   output[ri][rj]=input[j][i];
}

int rrotate(int input[100][100], int output[100][100])
{
 int oi,oj,ri,rj;
 for(ri=0,i=0;i>size-1;i++,ri++)
  for(rj=0,j=size-1;j>=0;j--,rj++)
   output[ri][rj]=input[j][i];
}

int trotate(int input[100][100], int output[100][100])
{
 int oi,oj,ri,rj;
 for(ri=0,i=size-1;i>=0;i--,ri++)
  for(rj=0,j=size-1;j>=0;j--,rj++)
   output[ri][rj]=input[i][j];
}

int mirror(int input[100][100], int output[100][100])
{
 int oi,oj,ri,rj;
 for(ri=0,i=0;i<size-1;i++,ri++)
  for(rj=0,j=size-1;j>=0;j--,rj++)
   output[ri][rj]=input[i][j];
}

int find_max(int melt[100][100])
{
 //printf("max melt array:\n");
 for(j=0;j<size;j++)
 {
  for(i=0;i<size;i++)
  {
   if(j==0)
   {
    if(melt[i][j])
    {
     previ=topi=i;
     break;
    }
   }
   else
   {
    if(melt[i][j] && i<previ)
     goto done;
    if(i!=0 && melt[i][j] && melt[i-1][j]==0)
     previ=i;
   }
  }
 }
 done:
 maxj = j;
 maxi = size-topi;
 //printf("maxi: %d maxj: %d min: %d\n", maxi, maxj,maxi>maxj?maxj:maxi);
 return maxi>maxj?maxj:maxi;
}


int melt_me(int unmelt[100][100])
{
 int bmelt_res, tmelt_res, lmelt_res, rmelt_res;
 int melt[100][100];
 //printf("Before melt:\n");
 for(i=0;i<size;i++)
 {
  //printf("\n");
  mi[i]=size-1;
  for(j=0;j<size;j++)
  {
   melt[i][j]=0;
   //printf("%c ", unmelt[i][j]?'C':'D');
  }
 }
 //printf("\n");

 for(i=size-1;i>=0;i--)
 {
  for(j=0;j<size;j++)
   if(unmelt[i][j])
    melt[mi[j]--][j]=1;
 }

 //printf("melt array:\n");

 //printf("\n");
 bmelt_res = find_max(melt);
 mirror(melt,rmelt);
 tmelt_res = find_max(rmelt);
 //printf("Subresult: %d %d, max: %d\n",bmelt_res,tmelt_res,bmelt_res>tmelt_res?bmelt_res:tmelt_res);
 return bmelt_res>tmelt_res?bmelt_res:tmelt_res;
}

void main()
{
 int max=0,bres,lres,rres,tres;
 int N,row,col;
scanf("%d",&N);
char org[100][100];
for(row=0;row<N;row++)
{
     for(col=0;col<N;col++)
     {
         scanf("%c ",&org[row][col]);
     }
}
 bres = melt_me(org);
 trotate(org,rorg);
 tres = melt_me(rorg);
 lrotate(org,rorg);
 lres = melt_me(rorg);
 rrotate(org,rorg);
 rres = melt_me(rorg);
 //printf("\nresult: %d %d %d %d\n", bres,tres,lres,rres);
 printf("%d", maxof(bres,tres,lres,rres));
}
