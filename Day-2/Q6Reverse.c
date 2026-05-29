// WAP TO REVERSE THE NUMBER
#include<stdio.h>
int main(){
    int num, rev=0;

    printf("Enter the number:");
    scanf("%d", &num);

    if(num<0){
        num = -num;
    }

    while(num>0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    printf("The reverse of the number is: %d",rev);

    return 0;

}