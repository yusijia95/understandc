#include <stdio.h>
int main(int argc, char const *argv[]) {
    int  no;

    // printf("整数值：");
    // scanf("%d", &no);
    printf("  |  1     2      3      4       5        6         7        8       9\n");
    printf("  |  -----------------------------------------------------------------\n");

    for (int i = 1; i <= 9; i++) {
        printf("%d |", i);

        for (int j = 1; j <= i; j++)
            {
                printf("%d*%d=%d  ", i, j, i * j);
            }
            putchar('\n');
    }

    putchar('\n');
    return 0;
}
