#include <stdio.h>

int main(int argc, char **argv)
{
	char *mdp = "password424242";
	char letter_from_mdp;
	char cVar4;
	int i;

	cVar4 = 'p';
	i = 0;
	while (cVar4 != '\0')
	{
		letter_from_mdp = mdp[i];
		if (letter_from_mdp == '\0')
			return 0;
		if (cVar4 - 1 != letter_from_mdp) // o
			return 1;
		printf("%c\n", letter_from_mdp);
		cVar4 = *(char *)(i + 0x203b);
		i++;
	}
}


int main(int argc, char **argv)
{
	char *mdp = "password424242";
	char letter_from_mdp;
	int i = 0;
	while (i < 14) {
		printf("%c", mdp[i] - 1);
		i++;
	}
	printf("\n");
}