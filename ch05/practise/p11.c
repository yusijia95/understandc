#include <stdio.h>
#define NUMBER 80

int main(void) {
    int i, j;
    int num, no;
    // double studentSum[6];
    double subjectSum[2];
    int arr[6][2];
    // double subjectSum,subjectAvg;
    // int arr2[3][4];
    // int arr3[4][4];
    printf("请输入学生人数：\n");
    scanf("%d", &num);
    printf("请输入学科总数：\n");
    scanf("%d", &no);

    printf("请输入学生分数：\n");

    for (i = 0; i < num; i++) {
        printf("第%d位学生语文数学分数：\n", i + 1);

        for (j = 0; j < no; j++) {
            scanf("%d", &arr[i][j]);
        }

        putchar('\n');
    }

    for (i = 0; i < num; i++) {
        for (j = 0; j < no; j++) {
            subjectSum[j] += arr[i][j];

        }
    }

    printf("各学科总分与平均分分别是：\n");
    printf("语文总分:%f   平均分:%f\n数学总分:%f   平均分:%f\n", subjectSum[0], subjectSum[0] / 6, subjectSum[1], subjectSum[1] / 6);
    printf("各学生总分与平均分分别是：\n");

    for (i = 0; i < num; i++) {
        printf("第%d位学生总分：%d  平均分：%d\n", i + 1, arr[i][0] + arr[i][1], (arr[i][0] + arr[i][1]) / 2);
    }


    return 0;
}