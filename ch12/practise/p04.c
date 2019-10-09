#include <stdio.h>
#define NUMBER 80
int main(void) {
    struct student yusijia;
    // printf("请打印姓名、身高、体重\n");
    // scanf("%s%d%lf", &yusijia.name, &yusijia.height, &yusijia.weight);
    yusijia=scan_xyz(170,120);
    // printf("姓名%s\n", yusijia.name);
    printf("身高%d\n", yusijia.height);
    printf("体重%f\n", yusijia.weight);
}