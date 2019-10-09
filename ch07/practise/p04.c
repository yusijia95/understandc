#include <stdio.h>
#include "util.c"
int main(int argc, char const *argv[]) {
    int input, no;
    printf("请输入一个整数：");
    scanf("%d", &input);
    printf("请输入置一位数：");
    scanf("%d", &no);
    printf("无符号整数第%d位置1后=%d\n", no,set(input,no));
    printf("无符号整数第%d位置0后=%d\n", no,reset(input,no));
    printf("无符号整数第%d位取反后=%d\n", no,inverse(input,no));
    return 0;
}