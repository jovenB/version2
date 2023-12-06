#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


#define BUFFER_SIZE 50

void converting(void) {
    // Print header for the program
    printf("*** Start of Converting Strings to double Demo ***\n");

    char doubleString[BUFFER_SIZE];
    double doubleNumber;

    // Start an infinite loop for user input
    do {
        // Prompt the user to enter a double numeric string
        printf("Type the double numeric string (q to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);

        // Remove the newline character from the input string
        doubleString[strlen(doubleString) - 1] = '\0';

        // Check if the user wants to quit (input is "q")
        if (strcmp(doubleString, "q") != 0) {
            // Convert the entered string to a double
            doubleNumber = atof(doubleString);

            // Print the converted number
            printf("Converted number is %f\n", doubleNumber);
        }

    // Continue the loop until the user enters "q"
    } while (strcmp(doubleString, "q") != 0);

    // Print the closing message for the program
    printf("*** End of Converting Strings to double Demo ***\n\n");
}