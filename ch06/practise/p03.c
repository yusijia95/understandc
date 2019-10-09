#include <stdio.h>
#include "util.c"
int main(int argc, char const *argv[]) {
    int inputFir;
    puts("请输入一个数：");
    scanf("%d",&inputFir);
    printf("该数的立方是%d\n",cube(inputFir));
    return 0;
}