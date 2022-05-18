#include <stdio.h>

int asmAdd(const int, const int);

int test(int a, int b) {
    // We can call assembly directly because we coded our function well!
    const int res = asmAdd(a, b);
    const int expected = a + b;
    if (res != expected) {
        printf("Expected %d + %d == %d, but got %d\n", a, b, expected, res);
        return 1;
    }
    return 0;
}

int main() {
    // Do a few tests
    if (test(0, 0) || test(1, 1) || test(-4, 56) || test(-2, -10)) {
        return 1;
    }
    printf("Good job! :O\n");
    return 0;
}