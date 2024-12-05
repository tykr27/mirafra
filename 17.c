#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int fun(int n1, int n2) {
    int fd = open("/dev/simple_driver1", O_RDWR);
    if (fd == -1) {
        perror("Failed to open the device file\n");
        exit(1);
    }

    char buf[100];
    snprintf(buf, sizeof(buf), "%d %d", n1, n2);

    // Write input to the device
    if (write(fd, buf, strlen(buf)) == -1) {
        perror("Failed to write to the device\n");
        close(fd);
        exit(1);
    }

    close(fd);
    return 0;
}

int main() {
    fun(5, 2);
    return 0;
}

