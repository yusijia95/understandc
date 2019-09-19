#include <stdio.h>
int main(int argc, char const *argv[] ){
	int inPutFirst,inPutSec;
	puts("当前是减法");
	puts("请输入第一个整数");
	scanf("%d",&inPutFirst);
	puts("请输入第二个整数");
	scanf("%d",&inPutSec);
	printf("%d减%d结果是%d\n",inPutFirst,inPutSec,inPutSec-inPutFirst);
	return 0;
}
