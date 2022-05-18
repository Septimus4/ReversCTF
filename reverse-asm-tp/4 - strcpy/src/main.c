#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void asmEntry(char* dest, const char* source);

int test(const char* str) {
    char* buffer = malloc((strlen(str) + 1) * sizeof(char));
    if (!buffer) {
        printf("Oui je check mes mallocs, code ton asm toi.\n");
        return 2;
    }
    asmEntry(buffer, str);
    int retValue = 0;
    if (strcmp(buffer, str)) {
        printf("\"%s\" != \"%s\"\n", buffer, str);
        retValue = 1;
    }
    free(buffer);
    return retValue;
}

int main() {
    if (test("a") || test("bcdef") || test("") || test("\x62\x03\xff\x7f\x84") || test("291dh_lkajdasd1213_dasdj")) {
        return 1;
    }
    printf("Good job!\n<(o_o<)  (>o_o)>  <(o_o<)\nYou now know basics of x86 asm!\n");
    return 0;
}