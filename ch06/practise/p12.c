#include <stdio.h>
#include "util.c"
#define NUMBER 80
int main(int argc, char const *argv[]) {
   int i, j;
    int num;
    int arr[4][3];
    int arr2[3][4];
    int arr3[4][4];
    printf("请输入第一个矩阵的数值：\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("请输入第二个矩阵的数值：\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    matrix(arr,arr2,arr3,3,4,4);
    return 0;
}