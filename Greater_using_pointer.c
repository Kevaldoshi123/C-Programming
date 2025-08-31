#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    
    
    printf("Please enter first number:- ");
    scanf("%d",ptr1);
    
    printf("Please enter second number:- ");
    scanf("%d",ptr2);
    
    
    if(*ptr1 > *ptr2){
        
        printf("First number is greater than second");    
    }else{
        
        printf("Second number is greater than first");
    }
    
   return 0;
}