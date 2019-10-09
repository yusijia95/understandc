#include <stdio.h>
#include "util.c"
#define NUMBER 80

int main(void) {
    int i, j, z;
    int tensu[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
    int sum[4][3] = {0};
    /*求两次考试的分数之和*/

    summary(tensu, sum, 2, 4);
    print(tensu, 0);
    print(tensu, 1);
    puts("考试总分"); printsum(sum, 4);

    return 0;
}