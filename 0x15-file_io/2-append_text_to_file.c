#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends the text at the end of a file
 * @text_content: String added to the end of the file
 * @filename: Pointer to the name of the file
 * Return: If the filename is NULL --1,
 * if the file doesn't exist and the user has no required permissions --1
 * Otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int w = 0;
	int o = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
