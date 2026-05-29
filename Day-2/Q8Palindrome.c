// WAP TO CHECK WHETHER THE NUMBER IS PALINDROME OR NOT
#include<stdio.h>
int main(){
    int num,rev=0,n;

    printf("Enter the number");
    scanf("%d",&num);

    n = num;
    if (num<0){
        num = -num;
    }

    while(num>0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;

    }

if(n==rev){
    printf("Entered number %d is palindrome",n);
}

else{
    printf("Entered number %d is not palindrome",n);
}

return 0;
}