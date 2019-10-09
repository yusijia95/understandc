#include <stdio.h>
#define NUMBER 80
#include "util.c"
int main(int argc, char const *argv[]) {
    int input,num;
    printf("请问输入一个整数：");
    scanf("%d", &input);
    printf("请问取出多少个整数的组数和：");
    scanf("%d", &num);
    printf("输入整数的阶乘是%d\n", combination(input,num));

}



