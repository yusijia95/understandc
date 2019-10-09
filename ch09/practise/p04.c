#include <stdio.h>
#define NUMBER 10
// #include "util.c"
void null_string();
int main(int argc, char const *argv[]) {
    int count;
    char str[] = "ABC";
    null_string(str);

}
void null_string(char s[]) {
    s[0] = '\0';
    printf("字符串str是：%s\n",s);
}


