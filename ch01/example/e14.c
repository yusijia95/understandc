#include <stdio.h>
int main(int argc, char const *argv[]){
	int x;
	int y;
	puts("请输入第一个数");
	scanf("%d",&x);
	puts("请输入第二个数");
    scanf("%d",&y);
    printf("两数之和= %d\n",x+y);
	return 0;
}