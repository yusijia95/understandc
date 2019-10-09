#include <stdio.h>
#define NUMBER 80
int main(void) {
    int no;
    // int inputArr[2] = {3, 5};
    int point[NUMBER];
    printf("请输入学生人数:");
    scanf("%d", &no);
    printf("请输入%d名学生分数:\n", no);

    for (int i = 0; i < no ; i++) {
        printf("%d号学生分数:", i + 1);
        scanf("%d", &point[i]);
    }

    for (int i = 0; i < no; i++) {
        if (point[i] >= 60) {
            printf("成绩大于等于60的分数是%d\n", point[i]);
        }
    }
}