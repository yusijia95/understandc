#include <stdio.h>
int main(int argc, char const *argv[] ){
	int ageFirst,ageSec;
	puts("请输入第一个整数");
	scanf("%d",&ageFirst);
	puts("请输入第二个整数");
	scanf("%d",&ageSec);
	printf("两数之和是%d\n两数之积是%d\n",ageFirst+ageSec,ageFirst*ageSec);
	return 0;
}