#include "main.h"

/**
 * create_file - creates file
 * @filename: file
 * @text_content: content
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int ld;
	int let;
	int run;

	if (!filename)
		return (-1);

	ld = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ld == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let++)
		;

	run = write(ld, text_content, let);

	if (run == -1)
		return (-1);

	close(ld);

	return (1);
}
