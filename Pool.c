#include<stdio.h>

int main(){

    int arr[100][100];
    int i,j,row,col,len;
    int pool = 0;
    
    

    printf("Enter Row size : %d",row);
    scanf("%d",&row);
    printf("Enter Column size : %d", col);
    scanf("%d", &col);

    len = col;

    for(i = 0; i<row;i++){
        for(j = 0; j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0; i<row;i++){
        printf("\n");
        for(j = 0; j<col;j++){
            printf("%d", arr[i][j]);
        }
    }
    

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j] == 0 && arr[i][j+1] == 1){

                if(arr[i][j-1] == 1 && arr[i][j+1] == 1 && arr[i-1][j] == 1 && arr[i-1][j-1] ==1
                 && arr[i-1][j+1] ==  1 && arr[i+1][j] == 1 && arr[i+1][j-1] ==1 && arr[i+1][j+1] ==1){
                    
                    pool++;
                 }
            }
            
            else{
                //printf("i and j are %d %d\n",i,j);
                if(arr[i][j] == 0 && arr[i][j+1] == 0){
                    for(len; len>=j; len--){
                        if(arr[i][len] == 0 && arr[i][len-1] == 0){
                            printf("Entered\n");
                            printf("arr[%d] arr[%d]",i,len);

                            if(arr[i][j-1] == 1 && arr[i][len+1] == 1 && arr[i-1][j] == 1 && arr[i-1][j-1] ==1
                                && arr[i-1][len+1] ==  1 && arr[i+1][j] == 1 && arr[i+1][j-1] ==1 && arr[i+1][len+1] ==1){
                                    
                                    pool++;
                                    break;
                            }

                        }
                    }
                }
            }
            
        }
    }
    

    printf("\nTotal Pools are %d",pool);

    return 0;
}