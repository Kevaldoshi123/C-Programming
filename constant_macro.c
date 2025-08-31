#include<stdio.h>
#include<conio.h>

#define A 10
#define B A+12 
#define AREA(L,B) L*B
#define CIRCLE(R) 3.14*R*R


// constant: it means the assigned will be fixed and cannot be changed
// try to make assigned variable in capital in constant
/*
int main(){

const int X = 12;

printf("the vllue of x is:- %d\n",X);

    return 0;
}
*/

// macro > symbolic constant
// 1.simple 2.nested 3.funciton type
int main(){


printf("The value of A is:- %d\n",A);   //simple macro

printf("The value of B is:- %d\n",B);    // nested macro


printf("The area of rectangle is:- %d\n",AREA(3,3));

printf("The area of cicle:- %f\n",CIRCLE(2));

    return 0;
}