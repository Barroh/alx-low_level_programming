#include <stdio.h>
/**
 * main - A program that prints sizes of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of char: %d byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %d byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %d byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %d byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
