#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void fprint_board(char (*board)[10])
{
    FILE* f;
    f = fopen("moves.txt", "a");

    fprintf(f, "+---------------------+");
    for (int i = 0; i < 10; i++) {
        fprintf(f, "\n");
        fprintf(f, "| ");
        for (int j = 0; j < 10; j++) {
            fprintf(f, "%c ", board[i][j]);
        }
        fprintf(f, "|");
    }
    fprintf(f, "\n");
    fprintf(f, "+---------------------+\n");

    fclose(f);
}

void fprint_step(int ffc, int fsc, int sfc, int ssc)
{
    FILE* f;
    f = fopen("moves.txt", "a");
    fprintf(f, "%c%d %c%d\n", ffc + 96, 9 - fsc, sfc + 96, 9 - ssc);
    fclose(f);
}