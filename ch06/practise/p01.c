#include <stdio.h>
#include "util.c"
int main(int argc, char const *argv[]) {
    int inputFir,inputSec;
    puts("请输入两数：");
    scanf("%d%d",&inputFir,&inputSec);
    printf("两数最小值%d\n",min2(inputFir,inputSec));
    return 0;
}