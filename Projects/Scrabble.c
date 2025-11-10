#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char player1[100];
    char player2[100];

    printf("Player 1: ");
    scanf(" %[^\n]", player1);

    printf("Player 2: ");
    scanf(" %[^\n]", player2);

    int points[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    int player1Score = 0;
    int player2Score = 0;

    for (int i = 0, length = strlen(player1); i < length; i++)
    {
        if (isalpha(player1[i]))
        {
            char c = toupper(player1[i]);
            player1Score += points[c - 65];
        }
    }

    for (int i = 0, length = strlen(player2); i < length; i++)
    {
        char c = toupper(player2[i]);
        player2Score += points[c - 65];
    }

    if (player1Score > player2Score)
    {
        printf("Player 1 wins!\n");
    }

    else if (player2Score > player1Score)
    {
        printf("Player 2 wins!\n");
    }

    else
    {
        printf("Tie!\n");
    }

    return 0;
}
