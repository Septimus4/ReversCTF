#include <stdio.h>

// Declare the asmStart symbol, defined in the main.asm file
int asmStart();

int main() {
    // Call the ASM function and get its return value
    const int res = asmStart();
    if (res != 42) {
        printf("That's not 42, that's %d!\n", res);
        return 1;
    }
    printf("Good job! :)\n");
    return 0;
}