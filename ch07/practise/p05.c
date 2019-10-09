#include <stdio.h>
#include "util.c"
int main(int argc, char const *argv[]) {
    int input, no, n;
    printf("请输入一个整数：");
    scanf("%d", &input);
    printf("请输入第一个置一位数：");
    scanf("%d", &no);
    printf("请输入到第几位截止：");
    scanf("%d", &n);
    printf("无符号整数第%d到第%d位置1后=%d\n", no,n, set_n(input, no, n));
    printf("无符号整数第%d到第%d位置0后=%d\n", no,n,reset_n(input,no,n));
    printf("无符号整数第%d到第%d位取反后=%d\n", no,n,inverse_n(input,no,n));
    return 0;
}