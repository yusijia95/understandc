#include <stdio.h>
#define NUMBER 80
#include "util.c"
int main(int argc, char const *argv[]) {
    char *p = "123";
    printf("p =\"%s\"\n", p);
    p = "456" +1;
    printf("p = \"%s\"\n", p);
    return 0;
}