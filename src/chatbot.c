#include <stdio.h>
#include <string.h>
#include <time.h>
#include "chatbot.h"
#include "utils.h"

void greet_user(const char* name)
{
    printf("Bot: Nice to meet you %s\n", name);
    printf("Bot: Type help for commands\n\n");
}

void chat_loop(const char* name)
{
    char msg[200];
    int i;

    while(1)
    {
        printf("You: ");
        fgets(msg, 200, stdin);
        remove_newline(msg);

        clrscr();

        if(strcmp(msg, "hi") == 0 || strcmp(msg, "hello") == 0)
        {
            int r = rand() % 3;
            if(r == 0)
                printf("Bot: Hello bro :)\n");
            else if(r == 1)
                printf("Bot: Hi there!\n");
            else
                printf("Bot: Hey hey!\n");
        }
        else if(strcmp(msg, "how are you") == 0)
        {
            int r = rand() % 3;
            if(r == 0)
                printf("Bot: I'm fine hehe\n");
            else if(r == 1)
                printf("Bot: Doing great!\n");
            else
                printf("Bot: Surviving in C language XD\n");
        }
        else if(strcmp(msg, "time") == 0)
        {
            time_t t;
            time(&t);
            printf("Bot: Current time is %s", ctime(&t));
        }
        else if(strcmp(msg, "tell me a fact") == 0)
        {
            int r = rand() % 3;
            if(r == 0)
                printf("Bot: Honey never spoils\n");
            else if(r == 1)
                printf("Bot: Bananas are berries\n");
            else
                printf("Bot: Octopus has 3 hearts\n");
        }
        else if(strcmp(msg, "motivate me") == 0)
        {
            int r = rand() % 3;
            if(r == 0)
                printf("Bot: You can do it!\n");
            else if(r == 1)
                printf("Bot: Never give up\n");
            else
                printf("Bot: Hard work pays off bro\n");
        }
        else if(strcmp(msg, "love you bot") == 0)
        {
            printf("Bot: Love you too %s but only as friend hehe\n", name);
        }
        else if(strcmp(msg, "joke") == 0)
        {
            int r = rand() % 3;
            if(r == 0)
                printf("Bot: Why C programmers are bad at relationships? Too many bugs XD\n");
            else if(r == 1)
                printf("Bot: Computer caught cold because it forgot to close Windows\n");
            else
                printf("Bot: I ate my homework... compiler error LOL\n");
        }
        else if(strcmp(msg, "help") == 0)
        {
            printf("\n--- Commands List ---\n");
            printf("hi / hello\n");
            printf("how are you\n");
            printf("time\n");
            printf("tell me a fact\n");
            printf("motivate me\n");
            printf("love you bot\n");
            printf("joke\n");
            printf("bye\n\n");
        }
        else if(strcmp(msg, "bye") == 0)
        {
            printf("Bot: Bye bye %s :) Have a nice day\n", name);
            break;
        }
        else
        {
            int r = rand() % 3;
            if(r == 0)
                printf("Bot: I don't understand\n");
            else if(r == 1)
                printf("Bot: Try help command\n");
            else
                printf("Bot: Something went wrong XD\n");
        }
    }
}