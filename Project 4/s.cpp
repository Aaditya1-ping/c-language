#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 0; i < 5; i++) {
        
        for (space = 0; space < i; space++) {
            printf("  ");
        }

        for (j = 0; j < 5 - i; j++) {
            printf("%d ", j % 2 == 0 ? 1 : 0);
        }

    
        printf("\n");
    }

    
}
/*

  1 0 1 0 1
    1 0 1 0
      1 0 1
        1 0
          1
*/