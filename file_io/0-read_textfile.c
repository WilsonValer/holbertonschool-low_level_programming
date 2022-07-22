#include "main.h"
/**
  * read_textfile - reads a text file and prints it to the POSIX standard out
  * @filename: name of the file to read
  * @letters: number of characters to print
  * Return: 0 on success
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int fd = 0;
	ssize_t characters;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	characters = read(fd, buffer, letters);
	close(fd);
	if (characters == -1)
	{
		return (0);
	}
	else
	{
		write(STDOUT_FILENO, buffer, characters);
		return (characters);
	}
	close(fd);
	free(buffer);
}
