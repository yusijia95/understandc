#include <stdio.h>
#define NUMBER 80
#include "util.c"
void put_string(const char *s) {
    printf("%s\n",s);
}
int main(void) {
    char str[128];
    printf("请输入字符串：");
    scanf("%s", str);
    put_string(str);
    // printf("str = \"%s\"\n", str_copy(str, tmp));

    return 0;
}