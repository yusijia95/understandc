#include <stdio.h>
#include <string.h>
#define NUMBER 80
#include "util.c"
int main(void) {
    char str[128];
    char str1[128];
    int num = 0;
    printf("请输入字符串：");
    scanf("%s", str);
    printf("请输入字符串：");
    scanf("%s", str1);
    // del_digit(str);
    printf("字符串长度%lu\n", strlen(str));
    // printf("字符串复制%s\n", strcpy(str,str1));
    printf("字符串复制%s\n", strncpy(str,str1,3));
    // printf("字符串继承%s\n", strcat(str,str1));
    printf("字符串继承%s\n", strncat(str,str1,3));
    // printf("字符串比较%d\n", strcmp(str,str1));
    printf("字符串比较%d\n", strncmp(str,str1,3));

    return 0;
}