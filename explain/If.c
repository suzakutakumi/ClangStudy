#include<stdio.h>
int main(){
    int x=10,y=12;
    if(x==10){
        printf("xは10です\n");
    }
    if(x==y){
        printf("xとyの値は一緒です\n");
    }else{
        printf("xとyの値は一緒ではありません\n");
    }
    return 0;
}