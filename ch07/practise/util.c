#include <stdio.h>
unsigned rrotate(unsigned x, int n) {

    for (int i = 0; i < x; i++) {
        n = n / 2;
    }

    return n;
}
unsigned lrotate(unsigned x, int n) {

    for (int i = 0; i < x; i++) {
        n = n * 2;
    }

    return n;
}
unsigned set(unsigned x, int pos) {

    return x | (1 << (pos - 1));
}
unsigned reset(unsigned x, int pos) {

    return x & ~(1 << (pos - 1));
}
unsigned inverse(unsigned x, int pos) {

    return x ^ (1 << (pos - 1));
}
unsigned set_n(unsigned x, int pos, int n) {
    int no;

    for (int i = 0 ; i < n; i++) {
        x |= (1 << (pos - 1 + i));
    }

    return x ;
}
unsigned reset_n(unsigned x, int pos, int n) {
    int no;

    for (int i = 0 ; i < n; i++) {
        x &= ~(1 << (pos - 1 + i));
    }

    return x ;
}
unsigned inverse_n(unsigned x, int pos, int n) {
    int no;

    for (int i = 0 ; i < n; i++) {
        x ^= (1 << (pos - 1 + i));
    }

    return x ;
}