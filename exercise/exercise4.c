#include<stdio.h>
int main(){
    int i,wa=0,seki=1;
    for(i=1;i<=15;i+=2){　// i=1にすれば奇数の和と積になる
        wa+=i;
        seki*=i;
    }
    printf("和:%d\n",wa);
    printf("積:%d\n",seki);
    return 0;
}
