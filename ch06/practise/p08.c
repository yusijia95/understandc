#include <stdio.h>
#include "util.c"
#define NUMBER 80
int main(int argc, char const *argv[]) {
    int no;
    int arr[NUMBER];
    printf("请问需要输入几个整数:");
    scanf("%d", &no);
    printf("请输入整数：\n");

    for (int i = 0; i < no; i++) {
        scanf("%d", &arr[i]);
    }

    printf("数组中的最小值是%d\n", min_of(arr, no));
}