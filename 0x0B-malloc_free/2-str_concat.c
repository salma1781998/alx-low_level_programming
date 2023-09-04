#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci;

	if (S1 == NULL)
		S1 = "";
	if (S2 == NULL)
		S2 = "";

	i = ci = 0;
	while (S1[i] != '\0')
		i++;
	while (S2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (S1[i] != '\0')
	{
		conct[i] = S1[i];
		i++;
	}
	conct[i] = '\0';
	return (conct);
}
