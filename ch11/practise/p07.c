#include <stdio.h>
#define NUMBER 80
#include "util.c"
void str_toupper(char *s) {

    while (*s) {
        if (*s >= 'a' && *s <= 'z') {
            *s = *s - 32;
        }

        *s++;
    }

}
void str_totower(char *s) {

    while (*s) {
        if (*s >= 'A' && *s <= 'Z') {
            *s = *s + 32;
        }

        *s++;
    }

}
int main(void) {
    char str[128];
    int num = 0;
    printf("请输入字符串：");
    scanf("%s", str);
    str_toupper(str);
    printf("字符串中c的指针%s\n", str);
    str_totower(str);
    printf("字符串中c的指针%s\n", str);

    return 0;
}