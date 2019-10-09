#include <stdio.h>
#define NUMBER 80
// #include "util.c"
enum season change(void);
void spring(void);
void summer(void);
void autumn(void);
void winter(void);
enum season {Spring, Summer, Autumn, Winter, Invalid};
int main(int argc, char const *argv[]) {
    enum season changed;

    do {
        switch (changed = change()) {
        case Spring: spring(); break;

        case Summer: summer(); break;

        case Autumn: autumn(); break;

        case Winter: winter(); break;

        case Invalid: break;
        }
    } while (changed != Invalid);

}
enum season change(void) {
    int n;

    do {
        printf("0...春天|1...夏天|2...秋天|3...冬天|4...结束\n");
        scanf("%d", &n);
    } while (n < 0 || n > 4);
    return n;
}
void spring(void) {
    puts("春天");
}
void summer(void) {
    puts("夏天");
}
void autumn(void) {
    puts("秋天");
}
void winter(void) {
    puts("冬天");
}



