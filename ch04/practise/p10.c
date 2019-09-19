#include <stdio.h>
int main(int argc, char const *argv[]) {
    int i, no;
    printf("请输入一个正数：");
    scanf("%d", &no);

    while (--no >= 0) {
        puts("*");
    }

    return 0;
}