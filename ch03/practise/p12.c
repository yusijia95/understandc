#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    printf("整数x:");
    scanf("%d", &x);

    switch (x % 2) {
    case (0): puts("该整数为偶数"); break;

    case (1): puts("该整数为奇数"); break;
    }

    return 0;
}