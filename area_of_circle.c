#include<stdio.h>
#include<conio.h>



int main(){

float area,radius;
float pie = 3.14;

printf("Enter the radius ");
scanf("%f",&radius);

area=pie*(radius*radius);

printf("the area of circle is:- %0.2f\n",area);

    return 0;
}