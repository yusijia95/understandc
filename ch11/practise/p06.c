#include <stdio.h>
#define NUMBER 80
#include "util.c"
char *str_chr(const char *s , int c) {

    while (*s) {
        if (*s == 'c') {
            return *s;
        }
        *s++;
    }

    return s + 1;

}
int main(void) {
    char str[128];
    int num = 0;
    printf("请输入字符串：");
    scanf("%s", str);

    printf("字符串中c的指针%d\n", str_chr(str, num));

    return 0;
}