#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define DEVICE_PATH "/dev/logger_device"

void write_log_message(const char *log_msg) {
    int fd, res;
    // Open the device file in write-only mode
    fd = open(DEVICE_PATH, O_WRONLY);
    if (fd == -1) {
        perror("Failed to open the device");
        exit(1);
    }

    // Write the log message to the device
    res = write(fd, log_msg, strlen(log_msg));
    if (res == -1) {
        perror("Failed to write to the device");
        close(fd);
        exit(1);
    }

    printf("Log message written to the device: %s\n", log_msg);

    // Close the device
    close(fd);
}

int main() {
	char msg[100];
    const char *log_msg = snprintf(msg, sizeof(msg), "FILE: %s\nLINE: %d\nDATE: %s\nTIME: %s\n",
             __FILE__, __LINE__, __DATE__, __TIME__);;

    // Write a log message to the device
    write_log_message(log_msg);

    return 0;
}

