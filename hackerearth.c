#include<stdio.h>
int main(){
    int arr[5],sumarr[5];
    int i,temp,sum = 0, count = 0,min,max;

    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    while(count<5){

        for(i=0; i<5; i++){
            //temp = arr[i];
            sum = sum + arr[i];
            
        }
        temp = sum - arr[count];
        sumarr[count] = temp;
        printf("%d\n",temp);
        count++;
        sum = 0;
    }

    min = sumarr[0];
    max = sumarr[0];
    for(i = 0; i<5; i++){
        if(sumarr[i]>max){
            max = sumarr[i];
        }
        else if(sumarr[i]<min){
            min = sumarr[i];
        }
    }
    printf("Min : %d\nMax : %d", min, max);


    
    return 0;
}