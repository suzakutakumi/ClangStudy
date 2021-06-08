#include<stdio.h>
#define N 10
int main(){
    int i,sum=0;
    for(i=1;i<=N;i++){
        sum+=i;
    }
    printf("合計:%d\n",sum);
    return 0;
}