// WAP TO CHECK WHETHER A NUMBER IS PRIME
#include<stdio.h>
int main(){
    int num,count=0;

    printf("Enter the number:");
    scanf("%d",&num);
    
    if(num<=1){
        printf("Entered number %d is not a prime number",num);
    }
    else{
        for(int i =2;i<num;i++){
            if(num % i == 0){
                count = 1;
                break;
            }
        }
        if(count == 0)  {
            printf("Entered number %d is a prime number",num);
        }
        else{
            printf("Entered number %d is not a prime number", num);
        }
    }
    return 0;
}