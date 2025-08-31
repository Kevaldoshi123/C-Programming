#include<stdio.h>
#include<conio.h>

// %u &=address of operater
// pointer = stores address of another variable
/*
int main(){

int x = 12;
int *ptr = &x;

int *ptr;       pointer can be used this way to
ptr = &x;

printf("address of x using pointer:- %u\n",ptr);          //when only ptr is is means address of pointer
printf("value of x using pointer:- %d\n",*ptr);          // when ptr is used with (*) i.e *ptr it means the value of pointer 


//user input using pointer

int main(){

int x;
int *ptr = &x;

printf("Enter a number:- ");
scanf("%d",ptr);


printf("The entered number is:- %d",*ptr);

    return 0;
}



//addition,subtraction,multiplcation,divisionof two numbers using pointers


int main(){

  int a;
  int b;
  int *ptr1 = &a;
  int *ptr2 = &b;



printf("Enter first number:- ");
scanf("%d",ptr1);

printf("Enter second number:- ");
scanf("%d",ptr2);


printf("Addition of two number is:- %d\n",*ptr1 + *ptr2);
printf("Subtraction of two number is:- %d\n",*ptr1 - *ptr2);
printf("Multiplication of two number is:- %d\n",*ptr1 * *ptr2);
printf("Division of two number is:- %d\n",*ptr1 / *ptr2);
    return 0;
}



//greater

int main(){


  int x;
  int y;
  int *ptr1 = &x;
  int *ptr2 = &y;



 printf("Enter first number:- ");
 scanf("%d",ptr1);

 printf("Enter second number:- ");
 scanf("%d",ptr2);


if(*ptr1 > *ptr2){

printf("The first number is greater than second number.");

}else{
    printf("The second number is greater than first number.");
}

    return 0;
}



//pointer with array
int main(){

int arr[5] = {1,2,3,4,5};
int i;
int *ptr = &arr[0];

for(i=0; i<5; i++){
 
   printf("%d ",*(ptr+i));

}

    return 0;
}

*/




//user input pointer array

int main(){


int arr[5];
int i;
int *ptr = &arr[0];

printf("Enter five numbers:- ");
for(i=0; i<5; i++){

scanf("%d",(ptr+i));

}


for(i=0; i<5; i++){

printf("%d ",*(ptr+i) );

}

    return 0;
}









































































