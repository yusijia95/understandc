#include <stdio.h>
#define NUMBER 80
#include "util.c"
void put_stringr();
int main(int argc, char const *argv[]) {
    int count;
    char str[NUMBER][128];
    printf("请问输入几行：");
    scanf("%d", &count);
    printf("请输入字符串：");

    for (int i = 0; i < count; i++) {
        scanf("%s", str[i]);
    }
    rev_string_n(str, count);
    // printf("该字符串中共有%d个c\n", str_char(str, count));

}



