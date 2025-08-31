#include<stdio.h>
#include<conio.h>

int main(){

int n1,n2;
int i;

top:
printf("Enter two numbers:- ");
scanf("%d %d",&n1,&n2);


if(n2 == 0){

printf("please enter a proper number\n");
goto top;
}else{

    printf("%f\n",n1 / n2);
}
    return 0;
}
