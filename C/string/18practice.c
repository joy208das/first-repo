/*capitalization */

#include <stdio.h>
#include <ctype.h>

int main() {
    char word[1001];
    fgets(word, sizeof(word), stdin);

   
    if (word[0] >= 'a' && word[0] <= 'z') {
        word[0] = toupper(word[0]);
    }

    // Print the capitalized word
    printf("%s", word);

    return 0;
}
