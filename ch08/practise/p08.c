#include <stdio.h>
#define NUMBER 80
#include "util.c"
int main(int argc, char const *argv[]) {
    int input,num;
    printf("请输入第一个整数：");
    scanf("%d", &input);
    printf("请输入第二个整数：");
    scanf("%d", &num);
    printf("两个整数最大公约数是%d\n", gcd(input,num));

}



