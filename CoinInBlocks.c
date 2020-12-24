#include<stdio.h>

int main(){

    int amt;
    amt = 10000000;
    int TwoThosCount = 0, OneThosCount = 0,FiveHunCount = 0, TwoHunCount = 0, OneHunCount = 0, FiftyCount = 0, Twenty = 0, Ten = 0, Five = 0, Two = 0, One = 0;
    //scanf("%d",&amt);
    while(amt != 0){
        while(amt>=2000){

                TwoThosCount += 1;
                amt =amt - 2000;

        }
        while(amt>=1000){

            OneThosCount += 1;
            amt = amt - 1000;

        }
        while(amt>=500){

            FiveHunCount += 1;
            amt -= 500;

        }
        while(amt>=200){

            TwoHunCount += 1;
            amt -= 200;

        }
        while(amt>=100){

            OneHunCount +=1;
            amt -= 100;

        }
        while(amt>=50){

            FiftyCount +=1;
            amt -= 50;

        }
        while(amt>=20){

            Twenty +=1;
            amt -= 20;

        }
        while(amt>=10){

            Ten += 1;
            amt -= 10;

        }
        while(amt>=5){

            Five += 1;
            amt -= 5;

        }
        while(amt>=2){

            Two += 1;
            amt -= 2;

        }
        while(amt>=1){

            One += 1;
            amt -= 1;

        }
    }
    printf("Two Thousand : %d\nOne Thousand : %d\nFive Hundard : %d\nTwo Hundard : %d\nOne Hundard %d\nFifty : %d\n Twenty : %d\n Ten : %d\nFive : %d\nTwo : %d\nOne : %d ", TwoThosCount,OneThosCount,FiveHunCount,TwoHunCount,OneHunCount,FiftyCount,Twenty,Ten,Five,Two,One);

    return 0;
}
