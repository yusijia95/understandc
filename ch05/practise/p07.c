#include <stdio.h>
#define NUMBER 7
int main(void) {
    int i,no;
    int arr[NUMBER];
    printf("请问需要输入多少个数据：\n");
    scanf("%d",&no);
    printf("请输入数据：\n");
    for(i=0;i<no;i++){
    	scanf("%d",&arr[i]);
    }
    printf("您一共输入了%d个数字，分别是：\n",no);
    for(i=0;i<no;i++){
    	printf("{arr[%d] = %d},  ",i,arr[i]);
    }
}