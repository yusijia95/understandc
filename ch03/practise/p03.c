#include <stdio.h>
int main(int argc, char const *argv[]) {
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no > 0) {
        printf("%d\n", no);
    } else  {
        printf("%d\n", -no);
    }

    return 0;
}