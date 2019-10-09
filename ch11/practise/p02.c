#include <stdio.h>
#define NUMBER 80
#include "util.c"
int main(int argc, char const *argv[]) {
    int i,n,no;
    char a[][5]={"LISP","C","Ada"};
    char *p[]={"PAUL","X","MAC"};
    n=sizeof(a)/sizeof(a[0]);
    no=sizeof(p)/sizeof(p[0]);
    for (i = 0; i < n; i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);
    for (i = 0; i < no; i++)
        printf("p[%d] = \"%s\"\n", i, p[i]);
    return 0;
}
