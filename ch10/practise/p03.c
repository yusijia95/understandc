#include <stdio.h>
#define NUMBER 80
#include "util.c"
int main(int argc, char const *argv[]) {
    int inputFir,inputSec,inputThr;
    printf("请输入一个整数：");
    scanf("%d", &inputFir);
    printf("请输入一个整数：");
    scanf("%d", &inputSec);
    printf("请输入一个整数：");
    scanf("%d", &inputThr);
    sort3(&inputFir,&inputSec,&inputThr);
}




