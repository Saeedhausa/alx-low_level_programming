#include "main.h"
/**
 * main - postive_or_negative checks the number if positive or negative
 * @i: the number to be checked
 * Return: 0 on success
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}

	return;
}
