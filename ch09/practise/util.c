#include <stdio.h>
void rev_string(const char s[]) {
    int c = 0;
    int i;

    while (s[c]) {
        c++;
    }

    // for (i = 0; i < NUMBER; i++) {
    //     if (s[i]) {
    //         c++;
    //     }
    // }

    printf("%d\n", c);
    printf("反向输出字符串是");

    for (int i = c - 1; i >= 0; i--) {
        printf("%c", s[i]);

    }

    putchar('\n');

}
void del_digit(char s[]) {
    char arr[NUMBER];
    int c, j;

    while (s[c]) {
        c++;
    }

    for (int i = 0; i < c; i++) {
        if (s[i] >= 65 && s[i] <= 91) {
            arr[j] = s[i];
            j++;
        }
    }

    for (int i = 0; i < c; i++) {
        if (s[i] >= 97 && s[i] <= 123) {
            arr[j] = s[i];
            j++;
        }
    }

    printf("%s\n", arr);
}
void rev_string_n(char s[][128], int n) {
    int arr[] = {0};
    int j = 0;

    for (int i = 0; i < n; i++) {

        while (s[i][j]) {
            arr[i] = arr[i] + 1;
            j++;
        }
    }

    // for (int i = 0; i < n; i++) {
    //     printf("%d\n", arr[i]);
    // }

    for (int i = 0; i < n; i++) {
        for (int j = arr[i] - 1; j >= 0 ; j--) {
            int temp = s[i][j];
            s[i][j] = s[i][j - arr[i] - 1];
            s[i][j - arr[i] - 1] = temp;
        }
    }

    printf("nihap\n");

    for (int i = 0; i < n; i++) {
        printf("%s\n", s[i]);
    }
}



