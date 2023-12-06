// Disable secure-related warnings
#define _CRT_SECURE_NO_WARNINGS

// Define buffer size for input strings
#define BUFFER_SIZE 80

// Define maximum number of input attempts
#define NUM_INPUT_SIZE 10

// Include necessary header files
#include <stdio.h>
#include "main.h"

// Function to measure and display string lengths
void fundamentals(void)  {
    // Print start message
    printf("*** Start of Measuring Strings Demo ***\n");

    // Declare buffer for input strings
    char buffer2[BUFFER_SIZE];

    // Input loop until user types 'q'
    do {
        // Prompt user for a string
        printf("Type a string (q - to quit):\n");

        // Read and store input string, remove newline
        fgets(buffer2, BUFFER_SIZE, stdin);
        buffer2[strlen(buffer2) - 1] = '\0';

        // Display string length if not 'q'
        if (strcmp(buffer2, "q") != 0)
            printf("Length of \'%s\' is %d characters\n",
                   buffer2, (int)strlen(buffer2));

    } while (strcmp(buffer2, "q") != 0);  // Continue until user types 'q'

    // Print end message
    printf("*** End of Measuring Strings Demo ***\n\n");
}
