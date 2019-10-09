#include <stdio.h>
#define NUMBER 80

int main(void) {
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

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            arr3[i][j] = arr[i][0] * arr2[0][j] + arr[i][1] * arr2[1][j] + arr[i][2] * arr2[2][j];
        }
    }

    // for (i = 0; i < 4; i++) {
    //     for (j = 0; j < 4; j++) {
    //         for (int z = 0; z < 3; z++) {
    //             arr3[i][j] += arr[i][z] * arr2[z][j];
    //         }
    //     }
    // }

    printf("您输入的第一个矩阵是：\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }

        putchar('\n');
    }

    printf("您输入的第二个矩阵是：\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", arr2[i][j]);
        }

        putchar('\n');
    }

    printf("两个矩阵的乘积是：\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%2d ", arr3[i][j]);
        }

        putchar('\n');
    }

    return 0;
}