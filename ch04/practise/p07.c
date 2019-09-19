#include <stdio.h>
int main(int argc, char const *argv[]) {
    int no, i;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    i = 1;

    while (i < no) {
        if (i % 2 == 0) {
            printf("%d \n",i);
        }
        i = i*2;
        // printf("\n");
    }

    return 0;
}