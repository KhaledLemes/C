#include <stdio.h>

// Tictactoe
int main() {
    int game[3][3] = {
        {0,0,0},
        {0,0,0},
        {0,0,0},
    };
    int attempt = 0, winner = 0;
    int current = 'X';
    int sum = 0;

    while (attempt < 9 && !winner) {
        for (int i = 0; i < 3; i++) {
            printf("\n");
            for (int j = 0; j < 3; j++) {
                game[i][j] == 0 ? printf("- ") : printf("%c ", game[i][j]);
            }
        }
        printf("\n");
        printf("Choose a LINE and a COLUMN to put %c\n", current);
        int col, lin;
        scanf("%d%d", &col, &lin);
        if ((col > 3 || col < 1) || (lin > 3 || lin < 1)) {
            printf("Wrong, try again\n");
            continue;
        }
        if (game[col-1][lin-1] == 0)
            game[col-1][lin-1] = current;
        else {
            printf("This cell already contains a value. Try again\n");
            continue;
        }

        for (int i = 0; i < 3; i++) {
            sum = 0;
            for (int j = 0; j < 3; j++) {
                sum += game[i][j];
                if (sum == 264 || sum == 237) {
                    printf("\nCongratulations! %c is the winner", current);
                    winner = 1;
                    break;
                }
            }
        }
        for (int i = 0; i < 3; i++) {
            sum = 0;
            for (int j = 0; j < 3; j++) {
                sum += game[j][i];
                if (sum == 264 || sum == 237) {
                    printf("\nCongratulations! %c is the winner", current);
                    winner = 1;
                    break;
                }
            }
        }
        sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += game[i][i];
            if (sum == 264 || sum == 237) {
                printf("\nCongratulations! %c is the winner", current);
                winner = 1;
                break;
            }
        }
        sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += game[i][2-i];
            if (sum == 264 || sum == 237) {
                printf("\nCongratulations! %c is the winner", current);
                winner = 1;
                break;
            }
        }
        if (current == 'X')
            current = 'O';
        else
            current = 'X';
        attempt++;
        if (attempt == 9 && winner == 0)
            printf("Draw :(");
        else if (winner) {
                printf("Final result:");
                for (int i = 0; i < 3; i++) {
                    printf("\n");
                    for (int j = 0; j < 3; j++) {
                        game[i][j] == 0 ? printf("- ") : printf("%c ", game[i][j]);
                }
            }
        }
    }

    return 0;
}