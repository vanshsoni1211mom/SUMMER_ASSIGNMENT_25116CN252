// WAP TO FIDNTHE SUM OF THE DIGITS OF A NUMBER
#include<stdio.h>
int main(){
    int num, sum=0, digit;

     printf("Enter a number:");
     scanf("%d", &num);
    if(num < 0){
        num = -num;
    } 

    while(num > 0){
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("The sum of the digit of the number is: %d",sum);
    return 0 ;

}