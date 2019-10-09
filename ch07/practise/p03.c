#include <stdio.h>
#include "util.c"
int main(int argc, char const *argv[]) {
    int input, no;
    printf("请输入一个整数：");
    scanf("%d", &input);
    printf("请输入移动位数：");
    scanf("%d", &no);
    printf("无符号整数右移%d位=%d\n", no,rrotate(no,input));
    printf("无符号整数左移%d位=%d\n", no,lrotate(no,input));
    return 0;
}