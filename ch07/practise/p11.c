#include <stdio.h>
#include "util.c"
int main(int argc, char const *argv[]) {
    int i;
    float x, sumInt, sumDouble;

    for (x = 0.0; x <= 1.0; x += 0.01) {
        sumInt = sumInt + x;
    }

    printf("sumInt = %f", sumInt);
    putchar('\n');

    for (i = 0; i <= 100; i++) {
        sumDouble += i / 100.0;
    }

    printf("sumDouble = %f", sumDouble);
    // float inputFir;
    // double inputSec;
    // long double inputThr;
    // printf("请输入一个float型数：");
    // scanf("%f", &inputFir);
    // // printf("请输入一个double数：");
    // // scanf("%lf", &inputSec);
    // // printf("请输入一个long double型数：");
    // // scanf("%Lf", &inputThr);
    // printf("正方形的面积是%f\n", inputFir*inputFir);
    // // printf("double型字符长度是%u\n", (unsigned)sizeof(inputSec));
    // // printf("long double型字符长度是%u\n", (unsigned)sizeof(inputThr));
    return 0;
}