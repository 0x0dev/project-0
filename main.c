#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>


int main() {
	int fd = open("key.txt", O_RDONLY);
	if (fd < 0) {
		perror("open :");
		return -1;
	}
	printf("fd : %d\n", fd);
	char *const argv[] = {"/bin/sh", NULL};
	char *const envp[] = {NULL};
	if (execve("/bin/sh", argv, envp) == -1) perror("execve :");
	close(fd);
	return 0;
}
