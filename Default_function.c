#include<stdio.h>
#include<conio.h>


//function = group of statements

// default function
void def(){
    printf("hello welcome to the world of computers\n");    
} 


//parameterised
void add(int a, int b){
    printf("the sum of two number is:- %d\n",a+b);
        
}
int main(){
    
    
    def();
    
    add(1,2);
    
    return 0;
}