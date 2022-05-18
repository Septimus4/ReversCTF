//
// Created by septimus on 18/09/2020.
//

#include <stdio.h>

int main(int argc, char **argv)
{
	char *mdp = argv[1];
	int i = 0;
	while (i < 20) {
		if (mdp[i] - 1 == '`')
			printf("%c", mdp[i] - 1);
		else
			printf("%c", mdp[i] - 1);
		i++;
	}
	printf("\n");
	return 0;
}
