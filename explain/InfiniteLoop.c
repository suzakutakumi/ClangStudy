#include<stdio.h>
int main(){
    int sum=0,n;
    while(1){
        scanf("%d",&n);
        if(n<0){
            break;
        }
        sum+=n;
    }
    printf("合計:%d\n",sum);
    return 0;
}