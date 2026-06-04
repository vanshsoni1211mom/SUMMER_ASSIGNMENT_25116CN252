// WAP TO CHECK ARMSTSRONG NUMBER
#include<stdio.h>
#include<math.h>

int main(){
    int num,originalnum,rem,n=0;
    double result = 0.0;

    printf("Enter the number :\n");
    scanf("%d",&num);

    originalnum = num;

    // counting digits
    while(originalnum != 0){
        originalnum /= 10;
        n++;
    }
    originalnum = num;

    while(originalnum != 0){
        rem = originalnum % 10;
        result += pow(rem,n);
        originalnum /= 10;
    }

    if((int)result == num){
        printf("Entered number %d is an armstrong number",num);
    }
    else{
        printf("Entered number %d is not an armstrong number",num);
    }

    return 0;
}