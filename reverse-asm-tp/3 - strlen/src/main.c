#include <stdio.h>
#include <string.h>

int asmEntry(const char*);

int test(const char* str) {
    // We can call assembly directly because we coded our function well!
    const int res = asmEntry(str);
    const int expected = strlen(str);
    if (res != expected) {
        printf("Expected strlen(\"%s\") == %d, but got %d\n", str, expected, res);
        return 1;
    }
    return 0;
}

int main() {
    // Do a few tests
    if (test("a") || test("bcdef") || test("") || test("\x62\x03\xff\x7f\x84") || test("291dh_lkajdasd1213_dasdj")) {
        return 1;
    }
    printf("Good job! (o_o)\n");
    return 0;
}