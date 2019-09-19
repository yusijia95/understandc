#include <stdio.h>
int main(int argc, char const *argv[]) {
    int i, no;
    i = 0;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);

        if (no <= 0) {
            puts("请不要输入负数。");
        }
    } while (no <= 0);

    while (no >= 1) {
        no = no / 10;
        i++;
    }

    printf("您输入的整数共%d位\n",i);
    return 0;
}
