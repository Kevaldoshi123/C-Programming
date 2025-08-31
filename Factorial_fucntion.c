#include<stdio.h>
#include<conio.h>

int fact(int n){

if((n == 0 || n == 1)){

    return 1;

}else{

    return (n * fact(n-1));
}


}


int main(){

int res,n;

printf("Enter a number:- ");
scanf("%d",&n);

res = fact(n);

printf("The factorial is:- %d",res);

    return 0;
}