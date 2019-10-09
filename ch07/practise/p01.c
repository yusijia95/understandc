#include <stdio.h>
int main(int argc,char const *argv[]){
	int n;
	printf("%u\n",(unsigned)sizeof 1);
	printf("%u\n",(unsigned)sizeof +1);
	printf("%u\n",(unsigned)sizeof -1);
	printf("%u\n",(unsigned)sizeof(unsigned) -1);
	printf("%u\n",(unsigned)sizeof(double) -1);
	printf("%u\n",(unsigned)sizeof((double) -1));
	printf("%u\n",(unsigned)sizeof n+2);
	printf("%u\n",(unsigned)sizeof (n+2));
	printf("%u\n",(unsigned)sizeof (n+2.0));
}