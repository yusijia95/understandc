#include <stdio.h>
#define NUMBER 80
#include "util.c"
void del_digit(char *s) {
    int j = 0;
    int i = 0;
    char *arr=s;
    while (*s) {
        if (*s < '0' || *s > '9') {
            arr[j++] = *s;
            // printf("%c\n",s[j]);
        }
        // i++;
        s++;
    }
    arr[j]='\0';

    printf("字符串中字母是%s\n", arr);
}

    // *str = '\0';

    // for (int i = 0; i < count; i++) {
        // printf("字符串中字母是%c\n", str[0]);
    // // }void del_digit(char *str) {
    // char *p = str;
    // int count;

    // while (*p) {
    //     if (*p >= '0' && *p <= '9') {
    //         p++;
    //     } else {
    //         *str = *p++;
    //         printf("%c\n", *str);
    //         str++;
    //     }

    //     count++;
    // }

// }
// int main(void) {
//     char str[128];
//     printf("请输入字符串：");
//     scanf("%s", str);
//     del_digit(str);
//     printf("删除数字后为：%s\n", str);
//     return 0;
// }


int main(void) {
    char str[128];
    int num = 0;
    printf("请输入字符串：");
    scanf("%s", str);
    del_digit(str);
    // printf("字符串中c的指针%s\n", str);

    return 0;
}