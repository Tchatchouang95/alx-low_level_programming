#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file
 * @letters: Size of the file name
 * Return: The actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _open, _read, _write;
	char *buf;

	buf = (malloc(sizeof(char) * letters));
	if (filename == NULL)
	{
		return (0);
	}
	/*open the file*/
	_open = open(filename, O_RDONLY);
	if (_open == -1)
	{
		return (0);
	}
	/*read the file*/
	_read = read(_open, buf, letters);
	if (_open == -1)
	{
		return (0);
	}
	/*write to the file*/
	_write = write(STDOUT_FILENO, buf, _read);
	if (_write == -1)
	{
		return (0);
	}
	free(buf);
	close(_open);
	return (_write);
}
