#include <stdio.h>
int main(int argc, char const *argv[]) {
    int repeat;


    do {
        int input;
        printf("请输入一个整数：");
        scanf("%d", &input);

        if (input % 2) {
            printf("该整数为奇数\n");
        } else {
            printf("该数为偶数\n");
        }

        printf("请问还要继续吗？停止请输入0\n");
        scanf("%d", &repeat);
    } while (repeat != 0);

    return 0;
}