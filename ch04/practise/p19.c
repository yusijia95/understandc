#include <stdio.h>
int main(int argc, char const *argv[]) {
    int  no, i,count;

    printf("整数值：");
    scanf("%d", &no);

    for (i = 1; i <= no; i ++) {
        if (no % i == 0){
            printf("%d ", i);
            count++;
        }
    }
    putchar('\n');
    printf("约数有%d个\n",count);
    return 0;
}
