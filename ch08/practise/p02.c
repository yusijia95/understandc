#include <stdio.h>
// #include "util.c"
#define max(x,y) (((x)>(y))?(x):(y))
int main(int argc, char const *argv[]) {
    int a, b, c,d;
    printf("请输入一个整数：");
    scanf("%d", &a);
    printf("请输入第二个整数：");
    scanf("%d", &b);
    printf("请输入第三个整数：");
    scanf("%d", &c);
    printf("请输入第四个整数：");
    scanf("%d", &d);

    printf("较大值为：%d\n", max(max(a,b),max(c,d)));
    printf("较大值为：%d\n", max(max(max(a,b),c),d));
    return 0;
}