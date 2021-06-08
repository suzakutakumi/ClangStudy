#include<stdio.h>
int main(){
    char moji;
    int a,b;
    
    scanf("%c",&moji);
    printf("入力された文字は%cです。\n",moji);

    scanf("%d%d",&a,&b);
    printf("a+b=%d\n",a+b);
    return 0;
}