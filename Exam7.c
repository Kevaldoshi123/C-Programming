#include<stdio.h>
#include<conio.h>

int fact(int n){

  if( n == 0 || n == 1){
  return 1;

 }else{

    return n*fact(n-1);
}

}

int main(){


int number;

printf("Enter a number:- ");
scanf("%d",&number);

  if( number <0){
    printf("The entered number cannot be negative");

}else{

    printf("The entered number is %d & the factorial for this number is:- %d",number,fact(number));
}

    return 0;
}