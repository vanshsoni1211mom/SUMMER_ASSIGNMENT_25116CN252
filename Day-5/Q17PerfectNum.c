// WAP TO CHECK PERFECT NUMBER
#include<stdio.h>
int main(){
    int num,sum = 0;

    printf("Enter the number : \n");
    scanf("%d",&num);

    for(int i = 1; i <= num / 2; i++){
       if( num % i == 0){
        sum = sum + i;
    }
    }
    if(sum == num){
        printf("Entered number is a perfect number\n");
    }
    else{
        printf("Entered number is not a perfect number\n");
    }
    return 0;
}