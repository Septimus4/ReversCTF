#include <stdio.h>

int main(int ac, char **av)
{
    char *mdp = "qazwsxedcrfvtgbyhn";
    char *myString = "MasKerade133742A\0";
    char *hex = "\x02\x03\x02\x03\x05\0";

    int i = 0;
    while (1) {
        printf("%c", hex[i] + myString[i]);
        if (mpd[i] != (hex[i] + myString[i]))
            return 0;
        if ((myString[i] + 1) == '\0')
            break;
        i++;
        if (mdp[i] == '\0')
            return 1;
    }
    return 1;
}