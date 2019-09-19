#include <stdio.h>
int main(int argc, char const *argv[]) {
    int  no, i;

    printf("n的值：");
    scanf("%d", &no);
    int count = 0;

    for (int i = 1; i <= no ; i++) {
        printf("*");

        count++;

        if (count > 4) {
            count = count - 5;
            putchar('\n');
        }


    }

    putchar('\n');
    return 0;
}
