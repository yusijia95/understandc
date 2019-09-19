#include <stdio.h>
int main(int argc, char const *argv[]) {
    int sum = 0;
    int count;
    printf("请输入一个整数：");
    scanf("%d", &count);

    for (int i = 0; i <= count; i++) {
        sum += i;
    }

    printf("总和是%d\n", sum);
    return 0;
}