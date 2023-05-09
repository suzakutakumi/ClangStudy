#include<stdio.h>

// f関数を自分の力で書け
int f(int x){
    if(x>0) return x;
    else return 0;
}

// Out関数
void Out(int x){
    printf("正の値の合計は%d\n",x);
}

int main(){
    int data[10]={-48,-50,-51,37,-6,26,34,20,-94,-2};
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=f(data[i]);
    }
    Out(sum);
    return 0;
}
