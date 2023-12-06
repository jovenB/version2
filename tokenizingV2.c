// Disable secure-related warnings
#define _CRT_SECURE_NO_WARNINGS

// Define buffer size for input sentences
#define BUFFER_SIZE 300

// Include necessary header files
#include <stdio.h>
#include "main.h"

// Function to tokenize and display sentences
void tokenizing(void)  {
    // Print start message
    printf("*** Start of Tokenizing Sentences Demo ***\n");

    // Declare variables for input sentences
    char  sentences[BUFFER_SIZE];
    char* nextSentence = NULL;
    int   sentencesCounter;

    // Input loop until user types 'q'
    do {
        // Prompt user for sentences separated by dots
        printf("Type a few sentences separated by dots (q - to quit):\n");

        // Read and store input sentences, remove newline
        fgets(sentences, BUFFER_SIZE, stdin);
        sentences[strlen(sentences) - 1] = '\0';

        // Tokenize and display sentences if not 'q'
        if (strcmp(sentences, "q") != 0) {
            nextSentence = strtok(sentences, ".");
            sentencesCounter = 1;

            // Loop through each tokenized sentence
            while (nextSentence) {
                printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, ".");
            }
        }
    } while (strcmp(sentences, "q") != 0);  // Continue until user types 'q'

    // Print end message
    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}
