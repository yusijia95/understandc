#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x, y, z,min;
    printf("整数x:");
    scanf("%d", &x);
    printf("整数y:");
    scanf("%d", &y);
    printf("整数z:");
    scanf("%d", &z);
    if(x==y || y==z || x==z){
        if(x==y && y==z && x==z){
            puts("三个值都相等");
        }else{
            puts("有两个值相等");
        }
    }else{
        puts("三个值各不相同");
    }

return 0;
}