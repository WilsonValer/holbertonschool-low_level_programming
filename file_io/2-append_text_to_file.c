#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *append_text_to_file - ret to the POSIX standard out
  *@filename: name of the file to read
  *@text_content: number of characters to print
  *Return: 0 on success
  **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int text;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		text = write(fd, text_content, strlen(text_content));

		if (text == -1)
			return (-1);
	}
		close(fd);
	return (1);
}
