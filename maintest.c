#include<stdio.h>
#include<stdlib.h>
int main(){
    int i = 0;
    printf("%d",i);
    i++;
    printf("%d",i);
    if(i<=5){
        printf("%d",i);
        printf("Text");
        exit(0);
        main();
    }
    return 0;
}