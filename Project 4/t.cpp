#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf("  ");
        }

        // Print increasing numbers from i to 5
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }

        
        for (j = 5 - 1; j >= i; j--) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
/*
          5
        4 5 4
      3 4 5 4 3
    2 3 4 5 4 3 2
  1 2 3 4 5 4 3 2 1

*/