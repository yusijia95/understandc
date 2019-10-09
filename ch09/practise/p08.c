#include <stdio.h>
#define NUMBER 80
// #include "util.c"
void put_stringr();
int main(int argc, char const *argv[]) {
    int count;
    char str[NUMBER];
    printf("请输入字符串：");
    scanf("%s", str);
    // printf("请问重复几次：");
    // scanf("%d", &count);
    put_stringr(str);
    // printf("该字符串中共有%d个c\n", str_char(str, count));

}
void put_stringr(const char s[]) {
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
    // for (int i = 0; i < c; i++) {
    //     int temp = s[i];
    //     s[i] = s[c - i];
    //     s[c - i] = temp;

    // }
    printf("反向输出字符串是");

    for (int i = c-1; i >= 0; i--) {
        printf("%c", s[i]);

    }

    putchar('\n');

}


