#include <stdio.h>
int main(int argc, char const *argv[]) {
    int input, no;
    int mul ;
    int div ;
    printf("请输入一个整数：");
    scanf("%d", &input);
    printf("请输入移动位数：");
    scanf("%d", &no);
    printf("无符号整数左移%d位=%d\n", no, input << no);
    mul = input; div = input;

    for (int i = 0; i < no; i++) {
        mul = mul * 2;
    }

    printf("无符号整数乘以2的%d幂=%d\n", no, mul);
    printf("无符号整数右移%d位=%d\n", no, input >> no);

    for (int i = 0; i < no; i++) {
        div = div / 2;
    }

    printf("无符号整数除以2的%d幂=%d\n", no, div);
    return 0;
}