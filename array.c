#include<stdio.h>

int main(){
    int a[10], *b[10];    
    int i;
    for(i = 0; i < 10; i++){
        printf("%d\n",&a[i]);
        b[i] = &a[i];
        b[i]++;
        printf("Increased One %d \n",b[i]);
    }
    return 0;
}