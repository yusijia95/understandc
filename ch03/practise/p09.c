#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x, y, z, min;
    printf("整数x:");
    scanf("%d", &x);
    printf("整数y:");
    scanf("%d", &y);
    printf("整数z:");
    scanf("%d", &z);
    min = x;
    min = min > y ? y : min ;
    min = min > z ? z : min ;
    printf("最小值是%d\n", min);

    return 0;
}