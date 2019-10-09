#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 80
#include "util.c"
void test();
int main(void) {
    srand((unsigned)time(NULL));

    test();
    return 0;
}
void test(void) {

    int input;

    do {
        int a = rand();
        printf("输出一个随机数：%d\n", a);

        if (a % 100 < 5) {printf("大吉");}

        if (a % 100 >= 5 && a % 100 < 15) {printf("中吉\n");}

        if (a % 100 >= 15 && a % 100 < 30) {printf("小吉\n");}

        if (a % 100 >= 30 && a % 100 < 60) {printf("吉\n");}

        if (a % 100 >= 60 && a % 100 < 80) {printf("末吉\n");}

        if (a % 100 >= 80 && a % 100 < 95) {printf("凶\n");}

        if (a % 100 >= 95 && a % 100 < 100) {printf("大凶\n");}

        printf("请问是否要继续，输入0退出。");
        scanf("%d", &input);
    } while (input != 0);
}
