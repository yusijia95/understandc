#include <stdio.h>
int main(int argc, char const *argv[] ){
	double weight;
	int height;
	puts("请输入您的身高");
	scanf("%d",&height);
	printf("您的标准体重是%4.1f\n",(height-100)*0.9);
	return 0;
}