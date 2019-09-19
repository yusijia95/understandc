#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

    int inPut, repeat;
    srand((unsigned)time(NULL));

    // printf("请输入一个整数：%d\n", rand());
    do {
        printf("请输入一个整数：1:剪刀、2:石头、3:布\n");
        // scanf("%d", &inPut);
        // printf("%d\n", scanf("%d", &inPut));

        if (scanf("%d", &inPut) != 1) {
            while (getchar() != '\n') {
                printf("输入错误！\n");
            }

            continue;
        } else {
            while (getchar() != '\n');
        }

        if (inPut > 3 || inPut < 1) {
            printf("输入异常！\n");
            continue;
        }

        int machine = rand() % 3;

        if (machine == 1) {
            printf("计算机输入的是剪刀\n");

            if (inPut  == 1) {
                printf("您输入的是剪刀\n");
                printf("最终结果是平局\n");
            } else if (inPut == 2) {
                printf("您输入的是石头\n");
                printf("获胜的是您\n");
            } else if (inPut == 3) {
                printf("您输入的是布\n");
                printf("获胜的是计算机\n");
            }
        }

        if (machine == 2) {
            printf("计算机输入的是石头\n");

            if (inPut == 1) {
                printf("您输入的是剪刀\n");
                printf("获胜的是计算机\n");
            } else if (inPut == 2) {
                printf("您输入的是石头\n");
                printf("最终结果是平局\n");
            } else if (inPut == 3) {
                printf("您输入的是布\n");
                printf("获胜的是您\n");
            }
        }

        if (machine == 0) {
            printf("计算机输入的是布\n");

            if (inPut == 1) {
                printf("您输入的是剪刀\n");
                printf("获胜的是您\n");
            } else if (inPut == 2) {
                printf("您输入的是石头\n");
                printf("获胜的是计算机\n");
            } else if (inPut == 3) {
                printf("您输入的是布\n");
                printf("最终结果是平局\n");
            }
        }

        printf("还要继续吗?【停止.....0】");
        // scanf("%d", &repeat);

        if (scanf("%d", &repeat) != 1) {

            while (getchar() != '\n') {
                printf("输入错误！\n");
            }

            continue;
        } else {
            while (getchar() != '\n');
        }
    } while (repeat != 0);

    return 0;
}
