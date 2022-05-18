//
// Created by septimus on 17/09/2020.
//
#include <stdio.h>

int main(int argc, char **argv)
{
	int iVar1;
	char letter_password;
	int iVar4;
	int i;

	letter_password = *argv[1];
	iVar4 = 0;
	i = 1;
	while (letter_password != '\0') {
		iVar4 = iVar4 + letter_password;
		iVar1 = i;
		letter_password = argv[1][i];
		i++;
	}
	printf("%d\n", iVar4);
	printf("%d\n", iVar1);
	if ((iVar1 == 16) && (iVar4 == 1664)) {
		printf("Yes, is correct!\n");
		return 0;
	}
	printf("No, is not correct.\n");
	return 0;
}
