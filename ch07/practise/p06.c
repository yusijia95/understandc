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
    printf("两个无符号整数和为：", no+n);
    return 0;
}