
/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: copy to
 *
 * @src: add to dest
 *
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	return (dest);
}
