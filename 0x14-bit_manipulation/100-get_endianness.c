
/**
 * get_endianness - this checks endianness
 * Return: 1 if big endian, or 0 if little endian
 */
int get_endianness(void)
{
	int numb;

	numb = 1;
	if (*(char *)&numb == 1)
		return (1);
	else
		return (0);
}
