#include <stdio.h>
int main(int argc, char const *argv[]) {
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (no >= 1) {
        printf("%d ", no--);
        printf("\n");
    }

    return 0;
}