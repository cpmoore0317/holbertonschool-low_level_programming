#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - prints text from a file
 * @filename: name of the file
 * @letters: number of characters to read
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char buffer[1024];
	ssize_t n;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}

	n = fread(buffer, 1, letters, fp);
	if (n < 0)
	{
		return (0);
	}

	buffer[n] = '\0';
	n = write(STDOUT_FILENO, buffer, n);
	if (n < 0)
	{
		return (0);
	}

	fclose(fp);
	return (n);
}
