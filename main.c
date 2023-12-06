#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "main.h"

int main(void){
    int moduleNum;
    int running = 1;
    do {
        prinf("Modules: Converting[1], Tokenizing[2], Fundamentals[3], Manipulating[4]\n");
        printf("Input [0] to exit\n\n");

        do {
            printf("Pick a module you would like to use: ");
            scanf("%d", &moduleNum);
        } while (moduleNum < 1 || moduleNum > 4);

        if (moduleNum == 1){
            converting();
        } else if (moduleNum == 2){
            tokenizing();
        } else if (moduleNum == 3){
            fundamentals();
        } else if (moduleNum == 4){
            tokenizing();
        } else if (moduleNum == 0){
            running = 0;
        }

    } while (running == 1);

}