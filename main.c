#include "get_next_line.h"

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/*
int main(int argc, char **argv)
{
    int fd;
    char *line;

    if (argc != 2)
		return (0);
    fd = open(argv[1], O_RDONLY);
    get_next_line(fd, &line);
	printf("line 1 %s\n", line);
	get_next_line(fd, &line);
	printf("line 2 %s\n", line);
	free(line);
    return (0);
}
*/

int main(int argc, char **argv)
{
	char *line;
	int fd;

	if (argc != 2)
		return(0);
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%s\n", line);
		free(line);
	}
}
