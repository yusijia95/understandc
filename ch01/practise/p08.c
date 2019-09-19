#include <stdio.h>
int main(int argc, char const *argv[] ){
	int age,height;
	puts("请输入两个整数。");
	printf("整数1: ");
	scanf("%d",&age);
	printf("整数2: ");
	scanf("%d",&height);
	printf("它们的乘积是%d\n",age*height);
	return 0;
}