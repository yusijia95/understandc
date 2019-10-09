#include <stdio.h>
#define NUMBER 80
#include "util.c"
int main(int argc, char const *argv[]) {
    int i;
    int a[] = {1, 2, 3, 4, 5};

    ary_set(&a[2], 5, 99);

    for (i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}



