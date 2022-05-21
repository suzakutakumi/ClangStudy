#include<stdio.h>
int main(){
    int sum=0;
    int i=1;
    while(sum<=100){
        sum+=i;
        printf("+%d\n",i);
        i++;
    }
    printf("100を超えた値:%d\n",sum);
    return 0;
}
