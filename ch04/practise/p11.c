#include <stdio.h>
int main(int argc, char const *argv[]) {
    int i, no;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);

        if (no <= 0) {
            puts("请不要输入负数。");
        }
    } while (no <= 0);

    printf("您输入的正整数为：%d\n", no);
    printf("您输出的正整数反向输出为：");

    while (no >= 1) {
        printf("%d", no % 10);
        no = no / 10;
    }

    putchar('\n');
    return 0;
}
