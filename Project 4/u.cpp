#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;  

    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }


        space = (n - i) * 2;  
        for (j = 1; j <= space; j++) {
            printf("  ");
        }

    
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        
        printf("\n");
    }

    return 0;
}
/* Output:
1                 1       
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/