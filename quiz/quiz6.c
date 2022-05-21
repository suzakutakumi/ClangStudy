#include<stdio.h>
int main(){
    int sum=0,n=1;
    while(1){
        sum+=n;
        if(sum>100){
            break;
        }
        n++;
    }
    printf("合計値:%d\n",sum);
    printf("最後の加算値:%d\n",n);
    return 0;
}
