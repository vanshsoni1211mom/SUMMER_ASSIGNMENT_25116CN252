// WAP TO FIND THE LARGEST PRIME FACTOR
#include<stdio.h>
int main(){
     int num,temp,count=0,pFact;

     printf("Enter the number : \n");
     scanf("%d",&num);

     temp = num;
     printf("The factors of %d are ",num);

    
     for(int i = 2; i <= temp; i++){
         if (temp % i == 0){
            count=1;
         for(int j = 2; j < i; j++){
             if (i % j == 0){
                count=0;
                break;
             }
         }
         if(count){
            pFact=i;
         }
         
     }


}
printf("%d", pFact);
return 0;
}