#include <stdio.h>
#include <string.h>

typedef int (*fptr)();

int callfcn(fptr, int args, ...);

int add(int a, int b) {
    return a+b;
}

int testAdd(int a, int b) {
    const int res = callfcn(&add, 2, a, b);
    const int expected = a + b;
    if (res != expected) {
        printf("Expected %d + %d == %d but got %d\n", a, b, expected, res);
        return 1;
    }
    return 0;
}

int quickMath(int a, int b, int c) {
    return (a * b) + c;
}

int testQuickMath(int a, int b, int c) {
    const int expected = (a * b) + c;
    const int res = callfcn(&quickMath, 3, a, b, c);
    if (expected != res) {
        printf("(%d * %d) + %d == %d but got %d\n", a, b, c, expected, res);
        return 1;
    }
    return 0;
}

int returnFive() {
    return 5;
}

int testReturnFive() {
    const int res = callfcn(&returnFive, 0);
    if (res != 5) {
        printf("Got %d, expected 5\n", res);
        return 1;
    }
    return 0;
}

int main() {
    printf("Testing return 5...\n");
    if (testReturnFive()) {
        goto err;
    }
    printf("Testing add...\n");
    if (testAdd(1, 1) || testAdd(0, 4) || testAdd(0, 0) || testAdd(1, 0) || testAdd(-2, 55) || testAdd(2, 2)) {
        goto err;
    }
    printf("Testing quickmath...\n");
    if (testQuickMath(1,2,3) || testQuickMath(2,-5,0) || testQuickMath(10,2,3)) {
        goto err;
    }
    printf("Ok\n");
    return 0;
err:
    return 1;
}