#include "main.n"
void _puts_recursion(char *s);
{
	if (*s == '\0')

	{
		-putchar('\n');
	}
	else 

		{
			_putchar(*s);
			_puts_recursion(s + 1);
		}
}
