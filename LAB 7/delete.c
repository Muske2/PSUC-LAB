/*
 * C Program to Remove given Word from a String
 */
#include <stdio.h>
#include <string.h>

void main ()
{
	char str[100], word[100], twoD[50][50];
	int i = 0, j = 0, k = 0;

	printf ("Enter the string: ");
	gets (str);

	printf ("Enter the word to be removed: ");
	gets (word);

	// let us convert the string into 2D array
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			twoD[k][j] = '\0';
			k ++;
			j = 0;
		}
		else
		{
			twoD[k][j] = str[i];
			j ++;
		}
	}

	twoD[k][j] = '\0';

	j = 0;
	for (i = 0; i < k + 1; i++)
	{
		if (strcmp(twoD[i], word) == 0)
            {
			twoD[i][j] = '\0';
		}
	}

	j = 0;
	printf("The sentence is: ");

	for (i = 0; i < k + 1; i++)
	{
		if (twoD[i][j] == '\0')
			continue;
		else
			printf (" %s ", twoD[i]);
	}


}
