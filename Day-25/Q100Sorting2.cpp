// WAP TO SORT WORDS BY LENGTH
#include <stdio.h>
#include <string.h>

int main() {
    char words[50][50], temp[50];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter the words:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", words[i]);   // simple input, no spaces
    }

    // Sorting by length using bubble sort
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for(i = 0; i < n; i++) {
        printf("%s (length=%d)\n", words[i], strlen(words[i]));
    }

    return 0;
}
