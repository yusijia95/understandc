#include <stdio.h>
#define NUMBER 80
#include "util.c"
int main(int argc, char const *argv[]) {
    int year,month,day;
    printf("请输入一个整数：");
    scanf("%d", &year);
    printf("请输入一个整数：");
    scanf("%d", &month);
    printf("请输入一个整数：");
    scanf("%d", &day);
    decrement_date(&year,&month,&day);
    increment_date(&year,&month,&day);
}




