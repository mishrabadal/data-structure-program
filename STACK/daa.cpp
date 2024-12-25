#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define REFRESH_RATE 400000
#define RANDOMNESS_LEVEL 5 // Higher value means less randomness

// Clear the console screen (cross-platform)
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Print a random leaf character with preference to '*'
void printLeaf() {
    char leafTypes[5] = { '.', '*', '+', 'o', 'O' };
    int randomValue = rand() % RANDOMNESS_LEVEL;

    // Prefer '*' but occasionally choose other characters
    if (randomValue == 0)
        printf("%c ", leafTypes[rand() % 5]);
    else
        printf("* ");
}

// Draw a triangular section of the tree
void drawTriangle(int startRow, int endRow, int totalHeight) {
    int spaces = 2 * totalHeight - 2;

    // Adjust initial spaces for the triangle
    spaces -= (startRow - 1);

    for (int i = startRow - 1; i < endRow; i++) {
        // Print leading spaces
        for (int j = 0; j < spaces; j++)
            printf(" ");
        spaces--;

        // Print leaves
        for (int j = 0; j <= i; j++)
            printLeaf();

        printf("\n");
    }
}

// Print the entire tree
void drawTree(int height) {
    int startRow = 1, endRow = 0, rowIncrement = 3;

    while (endRow < height + 1) {
        endRow = startRow + rowIncrement;
        drawTriangle(startRow, endRow, height);
        rowIncrement++;
        startRow = endRow - 2;
    }
}

// Print the trunk of the tree
void drawTrunk(int height) {
    int spaces = 2 * height - 4;

    for (int i = 1; i <= 4; i++) {
      
        // Print leading spaces
        for (int j = 0; j < spaces; j++)
            printf(" ");

        // Print trunk
        for (int j = 1; j <= 6; j++)
            printf("#");

        printf("\n");
    }
}

// Main function
int main() {
    srand(time(NULL));
    int treeHeight = 6;

    // Refresh loop
    while (1) {
        clearScreen();
          printf("\n********* MERRY CHRISTMAS *********\n\n");
        drawTree(treeHeight);
        drawTrunk(treeHeight);
        usleep(REFRESH_RATE);
    }

    return 0;
}