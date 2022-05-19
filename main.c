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
	char buf[64] = {0};
	int nb = read(fd, buf, 64);
	printf("nb : %d\nbuf : %s\n", nb, buf);
	close(fd);
	return 0;
}
