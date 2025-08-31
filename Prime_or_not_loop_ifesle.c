#include<stdio.h>
#include<conio.h>

int main(){

int num;
int i;
int count = 0;
printf("Enter a number:- ");
scanf("%d",&num);


   for(i=1; i<=num; i++){

   if( num % i == 0){
  count++;
        }

  if(count > 2){
 break;
    }
}

printf("count:- %d\n",count);

if(count == 2){
printf("Prime number");
}else{
printf("Not a prime number");
}

    return 0;
}