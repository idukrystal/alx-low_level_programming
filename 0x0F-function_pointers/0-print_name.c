/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function to use
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
