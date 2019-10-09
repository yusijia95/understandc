#include <stdio.h>
#define NUMBER 10
// #include "util.c"
int str_char();
int main(int argc, char const *argv[]) {
    int count;
    char str[NUMBER];
    printf("请输入字符串：");
    scanf("%s", str);
    printf("该字符串中c位于：%d位\n", str_char(str, NUMBER));

}
int str_char(const char s[], int c) {
    for (int i = 0; i < c; i++) {
        if (s[i] == 'c') {
            return i;
        }
    }

}


