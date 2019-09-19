#include <stdio.h>
int main(int argc, char const *argv[]) {
    int  no,heightFir,heightSec,height,space;
    double weight;
    
    // no = (heightSec-heightFir)/space;
    printf("开始数值 (cm)：");
    scanf("%d", &heightFir);
    printf("结束数值 (cm)：");
    scanf("%d", &heightSec);
    printf("间隔数值 (cm)：");
    scanf("%d", &space);
    putchar('\n');
     
    for ( ; heightFir <= heightSec ;) {
        weight = (heightFir -100)*0.9;
        printf("%dcm %8.2fkg \n", heightFir,weight);
        heightFir += space; 
    }

    putchar('\n');
    return 0;
}
