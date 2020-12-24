#include<stdio.h>
int main(){
    int a[] = {11,2,3,4,50};
    int *x, *y;
    x = &a[0];
    y = &a[4];
    //printf("%d%d",x,y);
    printf("%d\n",y-x);
    return 0;
}