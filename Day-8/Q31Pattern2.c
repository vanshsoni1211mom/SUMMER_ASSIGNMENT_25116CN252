// WAP TO PRINT CHARACTER TRIANGLE
#include<stdio.h>
int main(){
    int n;

    printf("Enter the rows:");
    scanf("%d",&n);

    for(int i = 1;i <= n; i++){
        char ch = 'A';
        for(int j = 0;j < i; j++){
            printf("%c ",ch + j);
        }
        printf("\n");
    }
    return 0;
}