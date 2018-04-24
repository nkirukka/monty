#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	ssize_t bytes_read;
	size_t len = 0;
	char *line = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("Successfully passed validation of file input\n");
		fp = fopen(argv[1], "r");
		if (fp == NULL)
		{
			printf("Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
		else
		{
			while ((bytes_read = getline(&line, &len, fp)) != -1)
			{
				printf("bread: %d, len: %d, line: %s", (int)bytes_read, (int)len, line);	     
			}
			printf("bytes read EOF: %d\n", (int)bytes_read);
			free(line);
			fclose(fp);
		}
	}

	return (0);
}
