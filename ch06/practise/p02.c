#include <stdio.h>
#include "util.c"
int main(int argc, char const *argv[]) {
    int inputFir,inputSec,inputThr;
    puts("请输入三个数：");
    scanf("%d%d%d",&inputFir,&inputSec,&inputThr);
    printf("两数最小值%d\n",min3(inputFir,inputSec,inputThr));
    return 0;
}