#include <stdio.h>
// #include "util.c"
#define swap(type,a,b) (type=a,a=b,b=type)
int main(int argc, char const *argv[]) {
    int a, b, type;
    printf("请输入一个整数：");
    scanf("%d", &a);
    printf("请输入第二个整数：");
    scanf("%d", &b);
    swap(type, a, b);
    printf("a=%d\nb=%d\n", a, b);
    // printf("较大值为：%d\n", max(max(max(a, b), c), d));
    return 0;
}