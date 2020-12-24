#include<stdio.h>

int main(){

    int arr[4][8] = {
        {1,1,1,1,1,1,1,1},
        {1,1,0,1,1,1,1,1},
        {1,1,1,1,1,0,0,1},
        {1,1,1,1,1,1,1,1}
    };
    int i,j,pool = 0,len = 7,startj,count = 0;

    for(i=0;i<4;i++){
        for(j=0;j<8;j++){
            if(i==0 || j == 0){
                //printf("%d %d\n",i,j);
                continue;
            }
            if(j==8-1){
                //printf("%d %d\n",i,j);
                continue;
            }
            if(i==4-1){
                //printf("%d %d\n",i, j);
                continue;
            }
            printf("Allowed i and j are %d %d\n", i,j);
            if(arr[i][j] == 0 && arr[i][j+1] == 1){
                //printf("i and j are \n", i,j);
                printf("Entered\n");

                if(arr[i][j-1] == 1 && arr[i][j+1] == 1 && arr[i-1][j] == 1 && arr[i-1][j-1] ==1
                 && arr[i-1][j+1] ==  1 && arr[i+1][j] == 1 && arr[i+1][j-1] ==1 && arr[i+1][j+1] ==1){

                    pool++;


                }

                printf("Inside for\n");

            }
            else if(arr[i][j] == 0 && arr[i][j+1] == 0){
                startj = j;
                printf("Startj is %d\n", startj);

                for(j; j<=len;j++){
                    printf("Else for startj and j is %d %d\n",startj,j);
                    if(arr[i][j] == 0 && arr[i][j+1] == 1){
                        printf("Entered i , j , startj are %d %d %d\n", i,j,startj);
                        if(arr[i][startj-1] == 1 && arr[i-1][startj] == 1 && arr[i+1][startj] &&
                        arr[i][j+1] == 1 && arr[i-1][j] == 1 && arr[i+1][j] == 1 && arr[i-1][j+1] == 1 &&
                        arr[i+1][j+1] == 1 && arr[i-1][startj-1] == 1 && arr[i+1][startj-1] == 1){

                            count = j - startj -1;
                            printf("count : %d\n",count);
                            while(count){
                                if(arr[i-1][startj + count] == 1 && arr[i+1][startj + count] == 1){
                                    count--;
                                }

                                else{
                                    break;
                                }
                            }
                            if(count == 0){
                                pool++;
                                break;

                            }

                        }


                    }


                }


            }




        }

        //printf("first for\n");
    }

    /*for(i = 0; i<3; i++){
        for(j = 0; j<8; j++){

            if(i==0 || j == 0){
                //printf("%d %d\n",i,j);
                continue;
            }
            if(j==8-1){
                //printf("%d %d\n",i,j);
                continue;
            }
            if(i==3-1){
                //printf("%d %d\n",i, j);
                continue;
            }

            if(arr[j][i] == 0 && arr[j+1][i] == 0){
                starti = i;
                for(i;i<=len;i++){
                    if(arr[j][i] == 0 && arr[j][i+1] == 1){
                        if(arr[j][starti-1] == 1 && arr[])
                    }
                }
            }
        }
    }*/

    printf("Pool : %d",pool);



    return 0;
}
