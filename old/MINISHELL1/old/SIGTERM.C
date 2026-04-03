/*
** EPITECH PROJECT, 2026
** 
** File description:
** 
*/

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void signalHandler(int sig) {
    if (sig == SIGTERM) {
        printf("Received SIGTERM signal. Performing cleanup and exiting gracefully.\n");
        // Perform cleanup tasks here (e.g., close files, free memory)
        exit(0); 
    }
}

int main(void) {
    // Register the custom handler for SIGTERM
    if (signal(SIGTERM, signalHandler) == SIG_ERR) {
        perror("signal error");
        return 1;
    }

    printf("Program running. Send SIGTERM (e.g., kill %d) to terminate.\n", getpid());
    while (1) {
        // Main program loop
    }

    return 0;
}
