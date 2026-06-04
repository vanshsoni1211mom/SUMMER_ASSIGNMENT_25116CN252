// WAP TO GENERATE FIBONACCI SERIES
#include<stdio.h>
int main(){
    int n, a=0, b=1, c;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    if(n<=0){
        printf("Enter a positive number:");
    }

    printf("The fibonacci series is: ");

    for(int i = 1; i<=n; i++){
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}