#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: file
 * @text_content: content
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ld;
	int let;
	int run;

	if (!filename)
		return (-1);

	ld = open(filename, O_WRONLY | O_APPEND);

	if (ld == -1)
		return (-1);

	if (text_content)
	{
		for (let = 0; text_content[let]; let++)
			;

		run = write(ld, text_content, let);

		if (run == -1)
			return (-1);
	}

	close(ld);

	return (1);
}
