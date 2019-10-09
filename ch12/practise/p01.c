#include <stdio.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];   /*姓名*/
    int height;            /*身高*/
    float weight;          /*体重*/
    long schols;
    double score;          /*奖学金*/
};

int main(void) {
    struct student takao = {"Takao", 173, 86.2, 100, 98.5};

    printf("姓名 = %s\n", takao.name);
    printf("身高 = %d\n", takao.height);
    printf("体重 = %.1f\n", takao.weight);
    printf("奖学金 = %ld\n", takao.schols);
    printf("姓名 = %lu\n", (unsigned)sizeof(takao.name));
    printf("奖学金 = %lu\n", (unsigned)sizeof(takao.schols));
    printf("身高 = %lu\n", (unsigned)sizeof(takao.height));
    printf("体重 = %lu\n", (unsigned)sizeof(takao.weight));
    printf("分数 = %lu\n", (unsigned)sizeof(takao.score));
    printf("姓名 = %ld\n", &takao.name);
    printf("身高 = %ld\n", &takao.height);
    printf("体重 = %ld\n", &takao.weight);
    printf("奖学金 = %ld\n", &takao.schols);
    printf("奖学金 = %ld\n", &takao.score);

    return 0;
}