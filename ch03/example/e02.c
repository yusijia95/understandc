#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    puts("请输入一个整数");
    scanf("%d",&x);
    if(x%2){
    	puts("该数为奇数");
    }
    else{
    	puts("该数为偶数");
    }
    return 0;
}