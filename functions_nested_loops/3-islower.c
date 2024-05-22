/**
 * _islower - Checks for a character that is lowercase.
 * @c: Checked Character.
 *
 * Return: 1 if character is lowercase, 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
