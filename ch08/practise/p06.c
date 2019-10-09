#include <stdio.h>
#define NUMBER 80
// #include "util.c"
int factorial();
int main(int argc, char const *argv[]) {
    int input;
    printf("请输入一个整数：");
    scanf("%d", &input);
    printf("输入整数的阶乘是%d\n", factorial(input));

}
int factorial(n) {
    int mul = 1;

    for (int i = 0; i < n; i++) {
        mul *= (i+1);
    }
    return mul;
}


