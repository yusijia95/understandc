#include <stdio.h>
int main(int argc, char const *argv[]) {
    int  no, i;

    printf("整数值：");
    scanf("%d", &no);

    for (int i = 0; i <= no ; i++) {
       if (i%2) {
       	printf("%d", i);
    }else{
    	printf(" ");
    }
}

putchar('\n');
return 0;
}
