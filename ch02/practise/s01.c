#include <stdio.h>
int main(int argc, char const *argv[] ){
	double height,width;
	puts("请输入长方形的长");
	scanf("%lf",&height);
	puts("请输入长方形的宽");
	scanf("%lf",&width);
	printf("长方形的面积是%f\n",height*width);
	return 0;
}