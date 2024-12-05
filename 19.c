#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

int main()
{
    int fd, res;
    char buf[40];

    // Open the device file with write-only permission, create if it doesn't exist
    fd = open("/dev/key_driver1", O_WRONLY);  // Only O_WRONLY is needed for writing
    if (fd == -1)
    {
        perror("Failed to open the file");
        exit(1);
    }

    // Get input from the user
    printf("Enter data to write to the device: ");
    fgets(buf, sizeof(buf), stdin);

    // Remove the trailing newline character if present
    buf[strcspn(buf, "\n")] = '\0';

    // Write the data to the device file
    res = write(fd, buf, strlen(buf));
    if (res == -1)
    {
        perror("Failed to write");
        close(fd);
        exit(1);
    }

    printf("Data written successfully!\n");

    // Close the file descriptor
    close(fd);
    return 0;
}

