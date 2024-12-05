/*#include <stdio.h>
void example_function() {
    printf("Function: %s\n", __func__);
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    LOG_INFO();
}

int main() {
    example_function();
    return 0;
}*/


#include <stdio.h>

// Macro to log function, file, line, date, and time
#define LOG_INFO()                                \
    do {                                          \
        printf("Function: %s\n", __func__);       \
        printf("File: %s\n", __FILE__);           \
        printf("Line: %d\n", __LINE__);           \
        printf("Date: %s\n", __DATE__);           \
        printf("Time: %s\n", __TIME__);           \
    } while (0)

void example_function() {
    LOG_INFO(); // Use the macro
}

int main() {
    example_function();
    return 0;
}

