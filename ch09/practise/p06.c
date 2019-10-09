#include <stdio.h>
#define NUMBER 80
// #include "util.c"
int str_char();
int main(int argc, char const *argv[]) {
    int count=0;
    char str[NUMBER];
    printf("请输入字符串：");
    scanf("%s", str);
    printf("该字符串中共有%d个c\n", str_char(str, count));

}
int str_char(const char s[], int c) {
    
    for (int i = 0; i < 80; i++) {
        if (s[i] == 'c') {
            c++;
        }
    }

    return c;
}


