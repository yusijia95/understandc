#include <stdio.h>
#define NUMBER 80
#include "util.c"
int str_chnum(const char *s , int c) {
    while (*s) {
        if (*s == 'c') {
            c++;
        }

        *s++;
    }

    return c;

}
int main(void) {
    char str[128];
    int num = 0;
    printf("请输入字符串：");
    scanf("%s", str);

    printf("字符串中c的个数%d\n", str_chnum(str, num));

    return 0;
}