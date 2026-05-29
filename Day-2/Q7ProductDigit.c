// WAP TO FIND THE PRODUCT OF THE DIGIT
#include<stdio.h>
int main(){
    int num,prod=1;

    printf("Enter the number:");
    scanf("%d", &num);

    if(num<0){
        num = -num;
    }

    while(num>0){
         int digit = num % 10;
         prod = prod * digit;
         num = num / 10;
    }
    
    printf("The product of the digit is :%d",prod);

    return 0;
}