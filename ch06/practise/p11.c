#include <stdio.h>
#include "util.c"
#define NUMBER 80
int main(int argc, char const *argv[]) {
    int no,num;
    int arr[NUMBER];
    int arr2[NUMBER];
    printf("请问需要输入几个整数:");
    scanf("%d", &no);
    printf("请输入整数：\n");

    for (int i = 0; i < no; i++) {
        scanf("%d", &arr[i]);
    }

    // rev_intary(arr, no);
    printf("相等个数有%d\n个", search_idx(arr,arr2, no,num));
}