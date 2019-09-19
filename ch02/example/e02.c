#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    // x=51;
    puts("请输入一个整数");
    scanf("%d", &x);
    printf("整数最后一位是%d\n", x % 10);
    return 0;
}