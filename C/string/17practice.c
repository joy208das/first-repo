/*1st letter capitalization 
input:joy
output:Joy
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    // Convert the first character to uppercase
    for (int i = 0; input[i] != '\0'; i++) {
        if (i == 0 && isalpha(input[i])) {         
            input[i] = toupper(input[i]);            //use tolower() for small letter convertion.
        }
    }

    printf("Capitalized string: %s\n", input);

    return 0;
}

/*isalpha() and toupper() are both functions provided by the C standard library, specifically from the <ctype.h> header file.

1.isalpha() is a function that checks whether a given character is an alphabetic character (a letter). 
It returns a non-zero value if the character is an alphabet (either uppercase or lowercase), and 0 otherwise.
2.toupper() is a function that converts a given lowercase character to its corresponding uppercase equivalent. If the character is already uppercase or is not an alphabet, it returns the character unchanged.
In the provided code:

isalpha(input[i]) is used to check if the current character input[i] is an alphabet.
toupper(input[i]) is used to convert the current character input[i] to its uppercase equivalent if it is an alphabet.*/
