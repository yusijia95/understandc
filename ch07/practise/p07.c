#include <stdio.h>
#include "util.c"
int main(int argc, char const *argv[]) {
    float inputFir;
    double inputSec;
    long double inputThr;
    printf("请输入一个float型数：");
    scanf("%f", &inputFir);
    printf("请输入一个double数：");
    scanf("%lf", &inputSec);
    printf("请输入一个long double型数：");
    scanf("%Lf", &inputThr);
    printf("三个数分别是%f\n%f\n%Lf\n", inputFir,inputSec,inputThr);
    return 0;
}