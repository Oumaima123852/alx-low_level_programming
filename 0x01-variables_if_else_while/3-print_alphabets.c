#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowerLetter = 'a';
char upperLetter = 'A';
while (lowerLetter <= 'z')
{
putchar(lowerLetter);
lowerLetter++;
}
while (upperLetter <= 'Z')
{
putchar(upperLetter);
upperLetter++;
}
putchar('\n');
return (0);
}
