// WAP TO PRINT FACTORS OF A NUMBER
#include<stdio.h>
int main(){
     int num,temp;

     printf("Enter the number : \n");
     scanf("%d",&num);

     temp = num;
     printf("The factors of %d are",num);
     for(int i = 1; i <= temp; i++){
        if(temp % i == 0){
          printf(" %d ",i);
        }
     }
   return 0;

}