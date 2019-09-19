#include <stdio.h>
int main(int argc, char const *argv[] ){
	int ageFirst,ageSec;
	puts("请输入第一个整数");
	scanf("%d",&ageFirst);
	puts("请输入第二个整数");
	scanf("%d",&ageSec);
	printf("前者是后者的%d%%。\n",ageFirst*100/ageSec);
	return 0;
}