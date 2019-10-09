#include <stdio.h>
// #include "util.c"
#define diff(x,y) (x-y)
int main(int argc, char const *argv[]) {
    int input, no, n;
    printf("请输入一个整数：");
    scanf("%d", &input);
    printf("请输入第二个整数：");
    scanf("%d", &no);
    // printf("请输入到第几位截止：");
    // scanf("%d", &n);

    printf("两个整数差为：%d\n", diff(input,no));
    return 0;
}