#include<stdio.h>
#define N 10
int main(){
    int i=1,sum=0;
    while(i<=N){
        sum+=i;
        i++;
    }
    printf("合計:%d\n",sum);
    return 0;
}