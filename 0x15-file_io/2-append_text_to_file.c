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
 * append_text_to_file - Apends text to the end of the file
 * @filename: Name of the file to be created
 * @text_content: Null string to add at the end of the file
 * Return: 1 on sucess and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _open, _write;

	if (filename == NULL)
	{
		return (-1);
	}
	_open = open(filename, O_WRONLY | O_APPEND);
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
		return (0);
	}
	close(_open);
	return (1);
}

