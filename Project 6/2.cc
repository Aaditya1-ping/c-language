#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};  
    int i = 0;

    
    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    
    while (str[i] != '\0') {
        freq[(int)str[i]]++;
        i++;
    }

   
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

 
}


/*
  output:
  Enter a string: development
Character frequencies:
'd' = 1
'e' = 3
'l' = 1
'm' = 1
'n' = 1
'o' = 1
'p' = 1
't' = 1
'v' = 1
*/
