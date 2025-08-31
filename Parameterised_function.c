#include<stdio.h>
#include<conio.h>


//parameterised2

void table(int num){
    int i;
    for(i=1; i<=10; i++){ 
    printf("%d\n",num*i);    
    }
}



void greater(int numa, int numb){
    if(numa>numb){
        printf("the first number is greater than second");
    }else{
        printf("the second number is greater than first");
    }
    
    
    
}

int main(){
    
    
    
    //table(10);
    
    greater(7,4);
    
    return 0;
}