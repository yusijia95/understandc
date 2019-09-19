#include <stdio.h>
int main(int argc, char const *argv[]) {
    int  no;

     printf("正方形边长：");
     scanf("%d", &no);

    for (int i = 1; i <= no; i++) {

        for (int j = 1; j <= no; j++)
            {
                printf("* ");
            }
            putchar('\n');
    }

    putchar('\n');
    return 0;
}
