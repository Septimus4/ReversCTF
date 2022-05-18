//
// Created by septimus on 17/09/2020.
// break sur comp et verifier cl a chaque boucle
#include <stdio.h>

int main(int ac, char **av)
{
	char *myString = "MasKerade133742A";
	long long int nbr = 0x503020302;
	int i = 0;
	while (i < 16) {
		int x = (nbr >> (8*i)) & 0xff;
		char c = x + myString[i];
		printf("%c", c);
		if (c != (x + myString[i]))
			return 0;
		if ((myString[i] + 1) == '\0')
			break;
		i++;
	}
	return 1;
}