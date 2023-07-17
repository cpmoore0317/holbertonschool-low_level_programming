#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char buffer[letters + 1];
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
