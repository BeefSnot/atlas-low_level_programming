/**
 * clear_bit- Sets the value of a bit to 0 at a given index.
 * @n: pointer to a number
 * @index: Where to put the 0 bit
 *
 * Return: 1 for success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}

