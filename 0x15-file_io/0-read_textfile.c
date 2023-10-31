#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: file
 * @letters: numbers of letters
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ld;
	ssize_t nrd, nwr;
	char *lut;

	if (!filename)
		return (0);

	ld = open(filename, O_RDONLY);

	if (ld == -1)
		return (0);

	lut = malloc(sizeof(char) * (letters));
	if (!lut)
		return (0);

	nrd = read(ld, lut, letters);
	nwr = write(STDOUT_FILENO, lut, nrd);

	close(ld);

	free(lut);

	return (nwr);
}

