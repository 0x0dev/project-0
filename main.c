#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>


int main() {
	int fd = open("key", O_RDONLY);
	if (fd < 0) {
		perror("open :");
		return -1;
	}
	close(fd);
	return 0;
}
