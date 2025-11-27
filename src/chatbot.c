#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "chatbot.h"
#include "utils.h"

void chatbot_loop(char *naam) {
    char msg[200];
    int i;

    printf("Bot: Nice to meet you %s\n", naam);
    printf("Bot: Type help for commands\n\n");

    while(1) {
        printf("You: ");
        fgets(msg, 200, stdin);
        for(i = 0; msg[i] != '\n'; i++);
        msg[i] = '\0';
        clrscr();

        if(strcmp(msg, "hi") == 0 || strcmp(msg, "hello") == 0) {
            int r = rand() % 3;
            if(r == 0) printf("Bot: Hello bro :)\n");
            else if(r == 1) printf("Bot: Hi there!\n");
            else printf("Bot: Hey hey!\n");
        }
        // ... (add all other command handlers here, including srand(time(NULL)) at start)
        else if(strcmp(msg, "bye") == 0) {
            printf("Bot: Bye bye %s :) Have a nice day\n", naam);
            break;
        }
        else {
            int r = rand() % 3;
            if(r == 0) printf("Bot: I don't understand\n");
            else if(r == 1) printf("Bot: Try help command\n");
            else printf("Bot: Something went wrong XD\n");
        }
    }
}