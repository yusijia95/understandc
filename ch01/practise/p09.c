#include <stdio.h>
int main(int argc, char const *argv[] ){
	int age,height,name;
	puts("请输入三个整数。");
	printf("整数1: ");
	scanf("%d",&age);
	printf("整数2: ");
	scanf("%d",&height);
	printf("整数3: ");
	scanf("%d",&name);
	printf("它们的和是%d。\n",age+height+name);
	return 0;
}