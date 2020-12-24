#include<stdio.h>
int main(){

    int arr[10] = {1,1,3,7,99},even = 0,odd = 0;

    for(int i = 0; i<5; i++){

        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even == 0){
            printf("ODD");
        }
        else if(odd == 0){
            printf("EVEN");
        }
        else{
            printf("Mixture");
        }

    return 0;
}