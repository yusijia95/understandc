#include <stdio.h>
#define NUMBER 80
#include "util.c"
int main(int argc, char const *argv[]) {
    int input, num;
    int arr[10] = {0};
    // printf("请输入第一个整数：");
    // scanf("%d", &input);
    // printf("请输入第二个整数：");
    // scanf("%d", &num);

    while ((input = getchar()) != EOF) {
        if (input >= 48 && input <= 57) {
            arr[input - 48]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("数字%d出现：", i);

        for (int j = 0 ; j < arr[i]; j++) {
            putchar('*');
        }

        putchar('\n');
    }


}



