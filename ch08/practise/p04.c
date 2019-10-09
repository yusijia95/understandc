#include <stdio.h>
#define NUMBER 80
// #include "util.c"
void rank();
int main(int argc, char const *argv[]) {
    int num;
    int height[num];
    printf("请问有几个人：");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("第%d个人的身高：", i + 1);
        scanf("%d", &height[i]);
    }

    rank(height, num);

    puts("每个人身高降序是：");

    for (int i = 0; i < num; i++) {
        printf("第%d个人的身高:%d\n", i + 1, height[i]);
    }

    return 0;
}
void rank(int height[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (height[j - 1] < height[j]) {
                int temp = height[j];
                height[j] = height[j - 1];
                height[j - 1] = temp;
            }
        }
    }
}