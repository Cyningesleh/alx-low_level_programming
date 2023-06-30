#include "main.h"
#include <stdlib.h>

/**
 * _print - this function moves a string one place to the left and prints the string
 * @str: The string to be moved
 * @l: The size of string to be moved
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int i, size;

	i = size = 0;
	while (i < l)
	{
		if (str[i] != '0')
			size = 1;
		if (size || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mult - This function multiplies a char with a str and places the answer into destination
 * @n: The char to multiply
 * @num: The string to multiply
 * @num_index: The last non NULL index of num
 * @dest: multiplication destination
 * @dest_index: The highest index to start add
 *
 * Return: The pointer to dest/NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int a, b, mul, mul_rem, add, add_rem;

	mul_rem = add_rem = 0;
	for (a = num_index, b = dest_index; a >= 0; a--, b--)
	{
		mul = (n - '0') * (num[a] - '0') + mul_rem;
		mul_rem = mul / 10;
		add = (dest[b] - '0') + (mul % 10) + add_rem;
		add_rem = add / 10;
		dest[b] = add % 10 + '0';
	}
	for (add_rem += mul_rem; b >= 0 && add_rem; b--)
	{
		add = (dest[b] - '0') + add_rem;
		add_rem = add / 10;
		dest[b] = add % 10 + '0';
	}
	if (add_rem)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check_for_digits - This function checks the arguments and ensures they are digits only
 * @av: The pointer to args
 *
 * Return: 1 if not, 0 if digits.
 */
int check_for_digits(char **av)
{
	int i, size;

	for (i = 1; i < 3; i++)
	{
		for (size = 0; av[i][size]; size++)
		{
			if (av[i][size] < '0' || av[i][size] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - This function initializes a string
 * @str: initialized string
 * @l: The length of string
 *
 * Return: void
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * main - function to multiply two numbers
 * @argc: The number of arguments in function
 * @argv: vector
 *
 * Return: exit status of 98, if failure or zero
 */
int main(int argc, char *argv[])
{
	int lent_1, lent_2, lent_n, t_i, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (t_i = 0; e[t_i]; t_i++)
			_putchar(e[t_i]);
		exit(98);
	}
	for (lent_1 = 0; argv[1][lent_1]; lent_1++)
		;
	for (lent_2 = 0; argv[2][lent_2]; lent_2++)
		;
	lent_n = lent_1 + lent_2 + 1;
	a = malloc(lent_n * sizeof(char));
	if (a == NULL)
	{
		for (t_i = 0; e[t_i]; t_i++)
			_putchar(e[t_i]);
		exit(98);
	}
	init(a, lent_n - 1);
	for (t_i = lent_2 - 1, i = 0; t_i >= 0; t_i--, i++)
	{
		t = mul(argv[2][t_i], argv[1], lent_1 - 1, a, (lent_n - 2) - i);
		if (t == NULL)
		{
			for (t_i = 0; e[t_i]; t_i++)
				_putchar(e[t_i]);
			free(a);
			exit(98);
		}
	}
	_print(a, lent_n - 1);
	return (0);
}
