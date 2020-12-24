#include<stdio.h>
/*int slogan();
int main(){
    int c,b = 2;
    c = slogan(b);
    printf("%d",c);
    return 0;
}
int slogan(){
    printf("some text of");
    //return b;
}*/

int check(int);
int main(){
    int k = 35 ,z;
    z = check(k);
    printf("%d",k);
    return 0;
}
int check(m){
    //int m;
    m = m + 1;
    if (m>40){
        return (1);
    }
    else{
        return (0);
    }
}