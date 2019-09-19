#include <stdio.h>
int main(int argc, char const *argv[]) {
    int i, no;
    printf("请输入一个正数：");
    scanf("%d", &no);
    i = 0;

    while (--no >= i) {
        if (no % 2) {
            putchar('+');
        } else {
            putchar('-');
        }
    }

    putchar('\n');
    return 0;
}