#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name for file
 * @text_content: text to put into file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fp = fopen(filename, "r");
		if (fp == NULL)
		{
			return (-1);
		}
		else
		{
			fclose(fp);
			return (1);
		}
	}

	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}

	fputs(text_content, fp);

	fclose(fp);

	return (1);
}
