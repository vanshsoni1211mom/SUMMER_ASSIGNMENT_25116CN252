// WAP TO CHECK STRONG NUMBER
#include<stdio.h>
int main(){
    int digit,num,a,sum=0;

    printf("Enter the number:\n");
    scanf("%d",&num);

    a = num;
    while(num != 0){
        digit = num % 10;
        int fact=1;
        for(int i = 2; i <= digit; i++){
            fact = fact*i;
            
        }
        sum = sum + fact;
        num /= 10;
    }
   // printf("SUM %d",sum);
    if(sum == a){
        printf("Entered number %d is a strong number",a);
    }
    else{
        printf("Entered number %d is not a strong number",a);
    }
    return 0;
   
}