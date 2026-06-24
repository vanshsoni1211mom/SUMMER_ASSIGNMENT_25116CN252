// WAP TO CHECK STRING ROTATION
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    int len1, len2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Strings are not rotations (different lengths).\n");
        return 0;
    }

    // Make a new string by joining str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is inside temp
    if (strstr(temp, str2) != NULL) {
        printf("Yes, the strings are rotations of each other.\n");
    } else {
        printf("No, the strings are not rotations.\n");
    }

    return 0;
}
