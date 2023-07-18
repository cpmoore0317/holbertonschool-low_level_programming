#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - creates a file
 * @filename: name for file
 * @text_content: text to put into file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}
	
	if (text_content == NULL)
	{
		text_content = "";
	}

	FILE *fp = fopen(filename, "w");
	if (fp == NULL)
	{
		return (-1);
	}

	fputs(text_content, fp);

	fclose(fp);

	chmod(filename, 0o600);

	return (1);
}
