/**
 * _pow_recursion - computes x to the power of y
 * @x: the number
 *
 * @y: the exponent
 *
 * Return: x to the y.th power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y  <= 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
