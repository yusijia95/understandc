#include <stdio.h>
#define NUMBER 80
// #include "util.c"
enum sex {Female, Male, Invalid};
enum sex select();
void female();
void male();
int main(int argc, char const *argv[]) {
    // int sex;
    enum sex selected;

    do {
        switch (selected = select()) {
        case Female : female(); break;

        case Male: male(); break;

        case Invalid: break;
        }
    } while (selected != Invalid);

    return 0;
}
enum sex select(void) {
    int n;

    do {
        printf("0...female|1...male|2...结束\n");
        scanf("%d", &n);

    } while (n < 0 || n > 2);

    return n;
}
void female(void) {
    puts("是女的");
}
void male(void) {
    puts("是男的");
}
