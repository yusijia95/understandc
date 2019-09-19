#include <stdio.h>
int main(int argc, char const *argv[]) {
    int i, no, count;
    count=1;
    printf("请输入一个整数：");
    scanf("%d", &no);

    for (int i = 0 ; i <= no ; i++) {
        printf("%d", count++);

        if (count >= 10) {
            count = count - 10;
        }
    }

    putchar('\n');
    return 0;
}
