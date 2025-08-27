#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    char name[20];
    int player, choice, computer;
    // 0 --> Snake
    // 1 --> Water
    // 2 --> Gun
    printf("Enter your name:\n");
    scanf("%s", &name);
    printf("Hello %s\n", name);

    for (;;)
    {
        computer = (rand() % 3);
        printf("Choose 0 for Snake\nChoose 1 for Water\nChoose 2 for Gun\n");
        scanf("%d", &player);
        printf("Computer : %d\n", computer);

        if (player == 0 && computer == 0)
        {
            printf("It's a draw!\n");
        }
        else if (player == 0 && computer == 1)
        {
            printf("You Wins!\n");
        }
        else if (player == 0 && computer == 2)
        {
            printf("You Lose!\n");
        }
        else if (player == 1 && computer == 0)
        {
            printf("You Lose!\n");
        }
        else if (player == 1 && computer == 1)
        {
            printf("It's a draw!\n");
        }
        else if (player == 1 && computer == 2)
        {
            printf("You Win!\n");
        }
        else if (player == 2 && computer == 0)
        {
            printf("You Win!\n");
        }
        else if (player == 2 && computer == 1)
        {
            printf("You Lose!\n");
        }
        else if (player == 2 && computer == 2)
        {
            printf("It's a draw!\n");
        }
        else
        {
            printf("Something Went Wrong\n");
        }
        printf("\nDo you want to play again? (1 = Yes / 0 = No): \n");
        scanf("%d", &choice);
    
        if (choice == 0)
        {
            printf("Thanks for playing, %s!\n", name);
            break;
        }
    }

    return 0;
}