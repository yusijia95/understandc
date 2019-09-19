#include <stdio.h>
int main(int argc, char const *argv[] ){
	int A,B;
	puts("请输入两个整数。");
	printf("整数A：");
	scanf("%d",&A);
	printf("整数B：");
	scanf("%d",&B);
	if(B/A){
		puts("B不是A的约数。");
	}else{
		puts("B不是A的约数。");
	}
	return 0;
}