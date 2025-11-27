#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "chatbot.h"

int main() {
    char naam[50];
    int i;

    srand(time(NULL));
    clrscr();
    printf("Bot: Hello user :)\n");
    printf("Bot: What is your name?\n");
    printf("You: ");
    fgets(naam, 50, stdin);
    for(i = 0; naam[i] != '\n'; i++);
    naam[i] = '\0';
    clrscr();

    chatbot_loop(naam);
    return 0;
}