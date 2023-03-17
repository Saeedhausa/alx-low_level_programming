#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
write("Size of char: %lu  byte(s)\n", sizeof(char));
write("Size of an int: %lu byte(s)\n", sizeof(int));
write("Size of a long int: %lu byte(s)\n", sizeof(long int));
write("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
write("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
