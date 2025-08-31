#include<stdio.h>
#include<conio.h>
// enum or enumeration
int main(){

enum days{sun=1,mon,tue,wed,thu,fri,sat};


enum days d1 = tue;

printf("%d",d1);

printf("the value of sun is:- %d\n",sun);
    return 0;
}