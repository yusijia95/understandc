#include <stdio.h>
#define NUMBER 80
#include "util.c"
int main(int argc, char const *argv[]) {
    int input;
    printf("请输入一个整数：");
    scanf("%d", &input);
    adjust_point(&input);
}




