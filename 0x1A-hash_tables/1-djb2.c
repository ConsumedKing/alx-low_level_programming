/**
 * hash_djb2 - function that hash stings
 * @str: the input string to hash
 * Return: unsigned long int hash result
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
