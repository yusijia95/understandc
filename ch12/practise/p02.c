#include <stdio.h>
#define NUMBER 80
struct student {
    char name[NUMBER];
    int height;
    double weight;
};
void hiriko(struct student *xiaoyu) {
    if ((*xiaoyu).height < 180) {
        (*xiaoyu).height = 180;
    }
}
int main(void) {
    struct student yusijia;
    printf("请打印姓名、身高、体重\n");
    scanf("%s%d%lf", &yusijia.name, &yusijia.height, &yusijia.weight);
    hiriko(&yusijia);
    printf("姓名%s\n", yusijia.name);
    printf("身高%d\n", yusijia.height);
    printf("体重%f\n", yusijia.weight);
}