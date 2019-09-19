#include <stdio.h>
int main(int argc, char const *argv[]) {
    int no, i;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    i = 1;

    while (i <= no) {
        printf("%d ", i++);
        printf("\n");
    }

    return 0;
}