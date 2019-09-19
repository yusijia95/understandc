#include <stdio.h>
int main(void) {
    int i , j;
    int height, width;
    puts("等腰直角三角形，直角在左上角。");
    printf("高："); scanf("%d", &height);
    // printf("宽："); scanf("%d", &width);

    for (i = 1; i <= height; i ++) {
        for (j = height; j >= i; j--) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}