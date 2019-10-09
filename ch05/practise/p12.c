#include <stdio.h>
#define NUMBER 80

int main(void) {
    int i, j, z;
    int tensu[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
    int sum[4][3] = {0};
    /*求两次考试的分数之和*/

    for (j = 0; j < 4; j++) {
        for (z = 0; z < 3; z++) {
            for (i = 0; i < 2; i++) {
                sum[j][z] += tensu[i][j][z];
            }
        }
    }

    /*显示第一次考试的分数*/
    puts("第一次考试的分数");

    for (j = 0; j < 4; j++) {
        for (z = 0; z < 3; z++) {
            printf("%4d", tensu[0][j][z]);
        }

        putchar('\n');
    }


    /*显示第二次考试的分数*/
    puts("第二次考试的分数");

    for (j = 0; j < 4; j++) {
        for (z = 0; z < 3; z++) {
            printf("%4d", tensu[1][j][z]);
        }

        putchar('\n');
    }

    /*显示总分*/
    puts("两次考试总分");


    for (j = 0; j < 4; j++) {
        for (z = 0; z < 3; z++) {
            printf("%4d", sum[j][z]);
        }

        putchar('\n');
    }


    putchar('\n');


    return 0;
}