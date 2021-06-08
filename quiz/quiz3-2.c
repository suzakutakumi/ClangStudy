#include<stdio.h>
int main(){
    int score;
    scanf("%d",&score);
    if(score>=80){
        printf("A\n");
    }else if(score>=65){
        printf("B\n");
    }else if(score>=50){
        printf("C\n");
    }else if(score>=35){
        printf("D\n");
    }else{
        printf("F\n");
    }
    return 0;
}