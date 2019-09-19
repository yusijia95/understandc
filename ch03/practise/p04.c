#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x, y;
    printf("整数A:");
    scanf("%d", &x);
    printf("整数B:");
    scanf("%d", &y);

    if (x >= y) {
        if (x > y) {
            puts("A大于B");
        } else {
            puts("A等于B");
        }
    } else {
        puts("A小于B");
    }

    return 0;
}