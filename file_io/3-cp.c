#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int safe_close(int fd);

/**
 * main - Copies the content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits with error codes on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int from_fd, to_fd, bytes_read, bytes_written, close_status;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(from_fd);
		exit(99);
	}

	while ((bytes_read = read(from_fd, buffer, 1024)) != 0)
	{
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			safe_close(from_fd);
			safe_close(to_fd);
			exit(98);
		}

		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safe_close(from_fd);
			safe_close(to_fd);
			exit(99);
		}
	}

	close_status = safe_close(to_fd);
	if (close_status == -1)
	{
		safe_close(from_fd);
		exit(100);
	}

	close_status = safe_close(from_fd);
	if (close_status == -1)
		exit(100);

	return (0);
}

/**
 * safe_close -_*
