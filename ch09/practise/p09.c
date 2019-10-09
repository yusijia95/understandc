#include <stdio.h>
#define NUMBER 80
#include "util.c"
void put_stringr();
int main(int argc, char const *argv[]) {
    int count;
    char str[NUMBER];
    printf("请输入字符串：");
    scanf("%s", str);
    // printf("请问重复几次：");
    // scanf("%d", &count);
    rev_string(str);
    // printf("该字符串中共有%d个c\n", str_char(str, count));

}



