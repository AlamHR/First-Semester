#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    char words[5][10] = {"hangman", "jukebox", "respect", "helpful", "courage"};
    int numWords = sizeof(words) / sizeof(words[0]);
    srand(time(NULL));
    int randomIndex = rand() % numWords;
    char word[10];
    strcpy(word, words[randomIndex]);;
    int reserve[9]= {0};
    int enter;
    char guess;
    int trying=0;
    int win=0;


    printf("\t\t The guess words are \n\t\t\thangman\n\t\t\tjukebox\n\t\t\trespect\n\t\t\thelpful\n\t\t\tcourage\n");
    do
    {
        printf("If you want to quit press 0\n\n");
        printf("If you want to play press any integer except 0\n\n");
        scanf("%d",&enter);
        if(enter==0)
        {
            printf("Thank you for playing.\n\n");
            break;
        }
        else
        {
            printf("Let's play!\n");
        }
        if(trying==0)
            printf("\n");
        if(trying==1)
        {
            printf("You have failed 1 time\n\n");
            printf("  ________\n"
                   "  |      |\n"
                   "  |      O\n"
                   "  |\n"
                   "  |\n"
                   "__|__\n");
        }
        if(trying==2)
        {
            printf("You have failed 2 time\n\n");
            printf("  ________\n"
                   "  |      |\n"
                   "  |      O\n"
                   "  |      |\n"
                   "  |\n"
                   "__|__\n");
        }
        if(trying==3)
        {
            printf("You have failed 3 time\n\n");
            printf("  ________\n"
                   "  |      |\n"
                   "  |      O\n"
                   "  |     /|\n"
                   "  |\n"
                   "__|__\n");
        }
        if(trying==4)
        {
            printf("You have failed 4 time\n\n");
            printf("  ________\n"
                   "  |      |\n"
                   "  |      O\n"
                   "  |     /|\\\n"
                   "  |\n"
                   "__|__\n");
        }
        if(trying==5)
        {
            printf("You have failed 5 time\n\n");
            printf("  ________\n"
                   "  |      |\n"
                   "  |      O\n"
                   "  |     /|\\\n"
                   "  |     /\n"
                   "__|__\n");
        }
        if(trying==6)
        {
            printf("You have failed 6 time\n\n");
            printf("  ________\n"
                   "  |      |\n"
                   "  |      O\n"
                   "  |     /|\\\n"
                   "  |     / \\\n"
                   "__|__\n");
        }

        for(int i=0; i<strlen(word); i++)
        {
            if(reserve[i])
            {
                printf("%c ", word[i]);
            }
            else
            {
                printf("_ ");
            }
        }
        printf("\n");
        printf("Enter the guess letter=");
        scanf(" %c", &guess);

        int correct =0;


        for (int i = 0; i < strlen(word); i++)
        {
            if (word[i] == guess)
            {
                reserve[i] = guess;
                correct = 1;

            }
        }
        if(!correct)
            trying++;


        win=1;

        for (int i = 0; i < strlen(word); i++)
        {
            if (!reserve[i])
            {
                win = 0;
                break;
            }
        }



    }
    while(trying<=6 && !win);
    printf("\n\n");
    if (win)
    {
        printf("Congratulations! You guessed the word: %s\n", word);
        printf("You have failed %d times",trying);
    }
    else
    {
        printf("Sorry, you ran out of tries. The word was: %s\n", word);
    }




}
