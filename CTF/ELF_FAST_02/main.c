//
// Created by septimus on 18/09/2020.
//

#include <stdio.h>

int main(int argc, char **argv)
{
	char cVar1;
	int64_t i;
	char *input;
	char *pcVar5;

	input = argv[1];
	i = -1;
	pcVar5 = input;
	while (cVar1 != '\0') {
		if (i == 0)
			break;
		i--;
		cVar1 = *pcVar5;
		pcVar5 = pcVar5 + 1;
	}
	if (i == -22) {
		if (*input != '\0') {
			if (*input != '1') {
	code_r0x000011ed:
				printf("No, is not correct.\n");
				return 1;
			}
			pcVar5 = (char *)0x2051;
			cVar1 = 'u';
			do {
				input = input + 1;
				if (*input == '\0')
					break;
				if (cVar1 + -1 != (int32_t) * input)
					goto code_r0x000011ed;
				cVar1 = *pcVar5;
				pcVar5 = pcVar5 + 1;
			} while (cVar1 != '\0');
		}
		printf("Yes, is correct!\n");
	} else
		printf("No, is not correct.\n");
	return 0;
}
// 2ujq2RrHB9Z3vaK9H9na