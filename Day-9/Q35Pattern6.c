// WAP TO PRINT REPEATED CHARACTER TRIANGLE
#include<stdio.h>
int main(){
    int n;
    char ch = 'A';

    printf("Enter the rows:");
    scanf("%d",&n);

    for(int i = 1;i <= n; i++){
        for(int j = 0;j < i; j++){
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}