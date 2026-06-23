// WAP TO CHECK ANNAGRAM STRING
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len1, len2, i, j;
    int count1[256] = {0};  // frequency array
    int count2[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    for(i = 0; i < len1; i++) {
        count1[(int)str1[i]]++;
        count2[(int)str2[i]]++;
    }

    for(j = 0; j < 256; j++) {
        if(count1[j] != count2[j]) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams!\n");

    return 0;
}
