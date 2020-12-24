#include <stdio.h>
/*int i = 0;
void val();*/
void fun();
int main(){
    /*auto int i = 1;
    {
        auto int i = 2;
        {
            auto int i = 3;
            {
            printf("here is 3");
            printf("%d",i);
            }
        
        printf("here is 2");
        printf("%d",i);
        }
    }
    printf("here is 1");
    printf("%d",i);*/

    /*static int i;
    printf("%d",i);*/

    /*-------------------------------------*/
    /*static int i = 5;
    printf("Count =  %d\n",i--);
    if(i != 0){
        main();
    }*/

    fun();
    fun();
        
        /*printf("main i = %d\n",i);
        i++;
        val();
        i = 2;
        printf("main i = %d\n",i);
        val();*/
        return 0;
    }
    /*void val(){
        printf("%d\n",i);
        i = 100;
        printf("val is = %d\n",i);
        i++;
    }*/

void fun(){
    auto int i = 0;
    register int j  = 0;
    static int k = 0;
    
    i++;
    j++;
    k++;
    printf("%d%d%d\n",i,j,k);

}
