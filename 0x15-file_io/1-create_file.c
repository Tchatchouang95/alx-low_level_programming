#include "main.h"

/**
 * len - finds the length of the string "text_content"
 * @str: input pointer
 * Return: Always i
 */
int len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * create_file - creates a file
 * @filename: Name of the file to be created
 * @text_content: Content to write to the file
 * Return: Always 1 on sucess and -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int _open, _write;

	if (filename == NULL)
	{
		return (-1);
	}
	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (_open == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	_write = write(_open, text_content, len(text_content));
	if (_write == -1)
	{
		return (-1);
	}
	close(_open);
	return (1);
}

