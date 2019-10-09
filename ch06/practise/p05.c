#include <stdio.h>
#include "util.c"
int main(int argc, char const *argv[]) {
    int inputFir;
    puts("请输入一个数：");
    scanf("%d",&inputFir);
    printf("1到%d之间整数和是%d\n",inputFir,sumup(inputFir));
    return 0;
}