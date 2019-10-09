#include <stdio.h>
void adjust_point(int *n) {
    if (*n >= 0 && *n <= 100) {
        printf("您输入的是%d\n", *n);
    } else if (*n < 0) {
        *n = 0;
        printf("您输入的是%d\n", *n);
    } else {
        *n = 100;
        printf("您输入的是%d\n", *n);
    }
}


void increment_date(int *y, int *m, int *d) {
    if (*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10) {
        if (*d == 31) {
            printf("%d年%d月%d日\n", *y, *m + 1, *d - 30);
        } else {
            printf("%d年%d月%d日\n", *y, *m, *d + 1);
        }
    } else if (*m == 2) {
        if ((*y % 100 != 0) && (*y % 4 != 0)) {
            if (*d == 29) {
                printf("%d年%d月%d日\n", *y, *m + 1, *d - 28);
            } else {
                printf("%d年%d月%d日\n", *y, *m, *d + 1);
            }
        } else {
            if (*d == 28) {
                printf("%d年%d月%d日\n", *y, *m + 1, *d - 27);
            } else {
                printf("%d年%d月%d日\n", *y, *m, *d + 1);
            }
        }
    } else if (*m == 12) {

        if (*d == 31) {
            printf("%d年%d月%d日\n", *y + 1, *m - 11, *d - 30);
        } else {
            printf("%d年%d月%d日\n", *y, *m, *d + 1);
        }
    } else {
        if (*d == 30) {
            printf("%d年%d月%d日\n", *y, *m + 1, *d - 29);
        } else {
            printf("%d年%d月%d日\n", *y, *m, *d + 1);
        }
    }
}
void decrement_date(int *y, int *m, int *d) {
    if (*m == 12 || *m == 5 || *m == 7 || *m == 8 || *m == 10) {
        if (*d == 1) {
            printf("%d年%d月%d日\n", *y, *m - 1, *d + 29);
        } else {
            printf("%d年%d月%d日\n", *y, *m, *d - 1);
        }
    } else if (*m == 3) {
        if ((*y % 100 != 0) && (*y % 4 != 0)) {
            if (*d == 1) {
                printf("%d年%d月%d日\n", *y, *m - 1, *d + 27);
            } else {
                printf("%d年%d月%d日\n", *y, *m, *d - 1);
            }
        } else {
            if (*d == 1) {
                printf("%d年%d月%d日\n", *y, *m - 1, *d + 26);
            } else {
                printf("%d年%d月%d日\n", *y, *m, *d + 1);
            }
        }
    } else if (*m == 1) {

        if (*d == 1) {
            printf("%d年%d月%d日\n", *y - 1, *m + 11, *d + 30);
        } else {
            printf("%d年%d月%d日\n", *y, *m, *d - 1);
        }
    } else {
        if (*d == 1) {
            printf("%d年%d月%d日\n", *y, *m - 1, *d + 30);
        } else {
            printf("%d年%d月%d日\n", *y, *m, *d - 1);
        }
    }
}
void sort3(int *n1, int *n2, int *n3) {
    int *arr[3];
    arr[0] = &*n1; arr[1] = &*n2; arr[2] = &*n3;

    for (int i = 0; i < 2; i++) {
        for (int j = 2; j > i; j--) {
            if (*arr[j] < *arr[j - 1]) {
                int temp = *arr[j];
                *arr[j] = *arr[j - 1];
                *arr[j - 1] = temp;
            }
        }
    }

    printf("%d\n%d\n%d\n", *n1, *n2, *n3);
}

void set_idx(int *v, int n) {
    for (int i = 0; i < n; i++) {
        v[i] = i;
    }

    for (int i = 0; i < n; i++) {
        printf("v[%d]=%d\n", i, v[i]);
    }
}
void ary_set(int &a[], int 2,int 99) {
    int i;

    for (i = 0; i < 2; i++) {
        a[i] = 99;
    }
}




