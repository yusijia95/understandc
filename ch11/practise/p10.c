#include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
#define NUMBER 80
#include "util.c"
// int stroi(const char *nptr) {
//     int i = 0;

// // int arr[32];
//     while (*nptr) {
//         if (*nptr >= '0' && *nptr <= '9') {
//             printf("%d", *nptr-48);
//             // putchar('*nptr');
//         }
//         nptr++;
//     }
//     putchar('\n');
// }
int atoi(const char *nptr) {
    int i = 0;
    int count=0;
    int inputInt=0;
    while (*nptr) {
        if (*nptr >= '0' && *nptr <= '9') {
            inputInt = inputInt * 10 + (*nptr - '0');
            count++;
        }else{
        	break;
        }

        nptr++;
    }

    return inputInt;
}

long atol(const char *nptr) {
    int i = 0;
    int count=0;
    long inputInt=0;
    while (*nptr) {
        if (*nptr >= '0' && *nptr <= '9') {
            inputInt = inputInt * 10 + (*nptr - '0');
            count++;
        }else{
        	break;
        }

        nptr++;
    }
    return inputInt;
}
double atof(const char *nptr) {
   int i = 0;
    int count=0;
    int inputInt=0;
    double inputDou=0;
    int mul=1;
    while (*nptr) {
        if (*nptr >= '0' && *nptr <= '9') {
            inputInt = inputInt * 10 + (*nptr - '0');
            count++;
        }else{
        	break;
        }

        nptr++;
    }
    while (*nptr) {
        if (*nptr >= '0' && *nptr <= '9') {
        	mul*=10;
            inputDou = inputDou * 10 + (*nptr - '0');
            count++;
        }

        nptr++;
    }

    return inputInt+(inputDou/mul);
}

int main(void) {
    char str[128];
    // char str1[128];
    int num = 0;
    printf("请输入字符串：");
    scanf("%s", str);
    printf("转换字符串%d\n", atoi(str));
    printf("转换字符串%ld\n", atol(str));
    printf("转换字符串%f\n", atof(str));

    return 0;
}
