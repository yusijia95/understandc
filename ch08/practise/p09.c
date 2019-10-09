#include <stdio.h>
#define NUMBER 80
#include "util.c"
int main(int argc, char const *argv[]) {
    int input,num;
    // printf("请输入第一个整数：");
    // scanf("%d", &input);
    // printf("请输入第二个整数：");
    // scanf("%d", &num);
    while((input= getchar()) !=EOF){
    	if(input == '\n'){
    		num++;
    	}
    }
    printf("共输入%d行\n", num);

}



