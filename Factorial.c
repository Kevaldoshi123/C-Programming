#include<stdio.h>
#include<conio.h>

int main(){
int fact, i;
int sum = 1;

printf("Enter a number:- ");
scanf("%d",&fact);


if( fact != 0 && fact != 1){


for(i=1; i<=fact; i++){
sum = sum * i;
}
printf("The factorial of the entered number is:- %d\n",sum);

}else{
printf("You should not enter 0  or 1 !");

}

    return 0;
}