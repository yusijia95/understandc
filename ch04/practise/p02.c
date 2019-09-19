#include <stdio.h>
int main(int argc, char const *argv[]) {
    int repeat;
    int sum =0;
    int count =0;

    do {
        int input;
        printf("请输入一个整数：");
        scanf("%d", &input);
        sum += input;
        count++;
        printf("请问还要继续吗？\n");
        scanf("%d", &repeat);
    } while (repeat != 0);

    printf("平均值是%d\n", sum / count);
    return 0;
}