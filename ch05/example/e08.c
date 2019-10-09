#include <stdio.h>
int main(void){
	int input,temp;
	int inputArr[2]={3,5};
	int inputArr2[2]={2,4};
	for(int i=0;i<2 ;i++){
		temp=inputArr[i];
		inputArr[i]=inputArr2[i];
		inputArr2[i]=temp;
	}
	for(int i=0;i<2;i++)
	printf("%d\n%d\n",inputArr[i],inputArr2[i]);
}