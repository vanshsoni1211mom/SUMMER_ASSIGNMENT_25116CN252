// WAP TO WRITE FUNCTION TO FIND SUM OF TWO NUMBERS
#include<stdio.h>

int sum(int a,int b){
    return a + b;
}
int main(){
    int num1,num2,result;

    printf("Enter the first no.:");
    scanf("%d",&num1);

    printf("Enter the second number:");
    scanf("%d",&num2);

    result = sum(num1,num2);

    printf("Sum=%d",result);

    return 0;
} 