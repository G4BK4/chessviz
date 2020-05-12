#include <stdio.h>
#define m 10

void display_board(char (*board)[10])
{
    printf("+---------------------+");
    for (int i = 0; i < 10; i++) {
        printf("\n");
        printf("| ");
        for (int j = 0; j < 10; j++) {
            printf("%c ", board[i][j]);
        }
        printf("|");
    }
    printf("\n");
    printf("+---------------------+\n");
}

void init_board(char (*board)[m])
{

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            board[i][j] = ' ';
        }
    }

    board[0][1] = 'a';
    board[0][2] = 'b';
    board[0][3] = 'c';
    board[0][4] = 'd';
    board[0][5] = 'e';
    board[0][6] = 'f';
    board[0][7] = 'g';
    board[0][8] = 'h';

    board[9][1] = 'a';
    board[9][2] = 'b';
    board[9][3] = 'c';
    board[9][4] = 'd';
    board[9][5] = 'e';
    board[9][6] = 'f';
    board[9][7] = 'g';
    board[9][8] = 'h';

    board[1][0] = '8';
    board[2][0] = '7';
    board[3][0] = '6';
    board[4][0] = '5';
    board[5][0] = '4';
    board[6][0] = '3';
    board[7][0] = '2';
    board[8][0] = '1';

    board[1][9] = '8';
    board[2][9] = '7';
    board[3][9] = '6';
    board[4][9] = '5';
    board[5][9] = '4';
    board[6][9] = '3';
    board[7][9] = '2';
    board[8][9] = '1';

    board[1][1] = 'R';
    board[1][2] = 'N';
    board[1][3] = 'B';
    board[1][4] = 'Q';
    board[1][5] = 'K';
    board[1][6] = 'B';
    board[1][7] = 'N';
    board[1][8] = 'R';

    board[8][1] = 'r';
    board[8][2] = 'n';
    board[8][3] = 'b';
    board[8][4] = 'q';
    board[8][5] = 'k';
    board[8][6] = 'b';
    board[8][7] = 'n';
    board[8][8] = 'r';

    board[2][1] = 'P';
    board[2][2] = 'P';
    board[2][3] = 'P';
    board[2][4] = 'P';
    board[2][5] = 'P';
    board[2][6] = 'P';
    board[2][7] = 'P';
    board[2][8] = 'P';

    board[7][1] = 'p';
    board[7][2] = 'p';
    board[7][3] = 'p';
    board[7][4] = 'p';
    board[7][5] = 'p';
    board[7][5] = 'p';
    board[7][5] = 'p';
    board[7][6] = 'p';
    board[7][7] = 'p';
    board[7][8] = 'p';
}

int main()
{
    char board[m][m];
    init_board(board);
    display_board(board);
}