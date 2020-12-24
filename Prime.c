#include <stdio.h>
#include <math.h>

int main(){
    int num, sr, num2;
    int isPrime = 1; // this is a check parameter; isPrime = 0 if number is not prime.
    for(num=2; num<=20; num++){
        sr = (int) sqrt(num);
        for(num2=2; num2 <= sr; num2++){
            //num2 <== sr to stop the innner loop
            if(num%num2 == 0){
                printf("=========== %d/%d\n", num,num2); // uncomment this to see if a number is divisable
                isPrime = 0; // this number is not prime, cos num can be divided by num2
                break;
            }
        }
        if(isPrime){
            printf("Prime number is %d\n", num);
            isPrime = 1; // reset the check parameter
        }else{
            isPrime = 1; // reset the check parameter
        }
    }
         return 0;
}
