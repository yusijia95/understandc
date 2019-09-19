#include <stdio.h>
int main(int argc, char const *argv[] ){
	double ageFirst,ageSec;
	puts("请输入第一个整数");
	scanf("%lf",&ageFirst);
	puts("请输入第二个整数");
	scanf("%lf",&ageSec);
	printf("前者是后者的%f%%。\n",ageFirst*100/ageSec);
	return 0;
}