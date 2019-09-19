#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x,y;
    puts("请输入第一个整数");
    scanf("%d", &x);
    puts("请输入第二个整数");
    scanf("%d", &y);
    printf("两数平均值是%f\n", (x + y)/2.0);
    return 0;
}