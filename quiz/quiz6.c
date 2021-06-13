#include<stdio.h>
int main(){
    int sum=0,n;
    while(1){
        scanf("%d",&n);
        sum+=n;
        if(sum>=100){
            break;
        }
        printf("sum:%d\n",sum);
    }
    return 0;
}