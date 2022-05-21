#include<stdio.h>
const int L=1000;
int main(){
    int i,n=1;
    while(n<=L){
        printf("%d\n",n);
        n *= 2;
    }
    return 0;
}
