#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%2==1){
        printf("xは奇数\n");
    }else{
        printf("xは偶数\n");
    }
    return 0;
}