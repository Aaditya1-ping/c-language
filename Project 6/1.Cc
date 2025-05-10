#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, a = 1;

    
    printf("Enter a string: ");
    scanf("%s", str);

  
    while (str[length] != '\0') {
        length++;
    }

  
  
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            a = 0;
            break;
        }
    }

 
 
    if (a)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

   
}
/*
  output:
  Enter a string: nayan
The string is a palindrome.

*/