#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 80
#include "util.c"
void guess();
int main(void) {
    srand((unsigned)time(NULL));
    guess();
    return 0;
}
void guess(void) {
    int n, num;
    int inputFir;
    int inputSec[9999];

    do {
        printf("请选择难度等级，\n1、0～9\n2、0～99\n3、0～999\n4、0～9999\n");
        scanf("%d", &n);
        printf("请输入想要猜的次数,0返回上一级");
        scanf("%d", &num);
    } while (num == 0);

    inputFir = rand();

    switch (n) {
    case 1: inputFir = inputFir % 10; break;

    case 2: inputFir = inputFir % 100; break;

    case 3: inputFir = inputFir % 1000; break;

    case 4: inputFir = inputFir % 10000; break;
    }

    // printf("输出一个随机数：%d\n", input);
    for (int i = 0; i < num; i++) {
        printf("现在开始猜数，剩余%d: 请输入数字(0~999):", num - i);
        scanf("%d", &inputSec[i]);

        if (inputSec[i] > inputFir) {
            printf("您输入的是%d,大了\n", inputSec[i]);
        } else if (inputSec[i] < inputFir) {
            printf("您输入的是%d,小了\n", inputSec[i]);
        } else {
            printf("恭喜你，猜中了\n");
        }

    }

    for (int i = 0; i < num; i++) {
        printf("| %d |  %d  |  %d  |\n", i + 1, inputSec[i], inputSec[i] - inputFir);
    }
}
