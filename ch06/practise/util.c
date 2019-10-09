#include <stdio.h>
int min2(int a , int b) {
    if (a >= b) {
        return b;
    } else {
        return a;
    }
}

int min3(int a , int b , int c) {
    if (a >= b) {
        if (c >= b) {
            return b;
        } else {
            return c;
        }
    } else if (a >= c) {

        return c;
    } else {
        return a;
    }
}

int cube(int a) {
    return a * a * a;
}

int pow4(int a) {
    return a * a * a * a;
}

int sumup(int a) {
    int sum;

    for (int i = 0; i <= a; i++) {

        sum += i;
    }

    return sum;
}

void alert(int a) {
    for (int i; i < a; i++) {
        printf("\a");
    }

    putchar('\n');
}

void hello(int a) {
    printf("你好。\n");
}

int min_of(const int v[], int n) {
    int min = v[0];

    for (int i = 0; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }

    return min;
}

void  rev_intary(int v[], int n) {
    int temp;

    for (int i = 0; i < n / 2; i++) {
        temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }

    putchar('\n');
}
int search_idx(const int v[], int idx[], int n, int key) {
    int count;
    printf("请问搜索哪个数字：");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (v[i] == key) {
            idx[count] = i;
            count++;
        }
    }

    return count;
}

void matrix(int arr[][3], int arr2[][4], int arr3[][4],  int a, int b, int c) {
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            arr3[i][j] = arr[i][0] * arr2[0][j] + arr[i][1] * arr2[1][j] + arr[i][2] * arr2[2][j];
        }
    }

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

}

void summary(int tensu[][4][3],int sum[][3], int n, int a) {
    int i, j, z;

    for (j = 0; j < 4; j++) {
        for (z = 0; z < 3; z++) {
            for (i = 0; i < n; i++) {
                sum[j][z] += tensu[i][j][z];
            }
        }
    }
}
/*显示第一次考试的分数*/
void print(int tensu[][4][3], int n) {
    printf("第%d次考试分数\n",n+1);
    int j, z;

    for (j = 0; j < 4; j++) {
        for (z = 0; z < 3; z++) {
            printf("%4d", tensu[n][j][z]);
        }

        putchar('\n');
    }
}
void printsum(int sum[][3], int n) {
    int j, z;

    for (j = 0; j < 4; j++) {
        for (z = 0; z < 3; z++) {
            printf("%4d", sum[j][z]);
        }

        putchar('\n');
    }

    putchar('\n');

}


