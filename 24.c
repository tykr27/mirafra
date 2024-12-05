#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    int fd = open("/dev/log_driver1", O_RDONLY);
    if (fd < 0) {
        perror("Failed to open device");
        return 1;
    }

    char log[256];
    while (read(fd, log, sizeof(log)) > 0) {
        printf("Log: %s\n", log);
    }

    close(fd);
    return 0;
}

