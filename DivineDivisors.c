#include<stdio.h>

int main(){
    unsigned long int N;
    int T;
    scanf("%d",&T);
    while(T){

        printf("Enter any Number : ");
        scanf("%d", &N);
        
        for(int i = 1; i>=1; i++){
            if (N % i == 0){
                printf("%d ", i);
            }
        }
    T--;
}
}