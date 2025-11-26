#include <stdio.h>
#include "chatbot.h"
#include "utils.h"

int main()
{
    char naam[50];

    srand(time(NULL));

    clrscr();

    printf("Bot: Hello user :)\n");
    printf("Bot: What is your name?\n");
    printf("You: ");
    fgets(naam, 50, stdin);
    remove_newline(naam);

    clrscr();

    greet_user(naam);

    chat_loop(naam);

    return 0;
}