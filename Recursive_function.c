
#include<stdio.h>
#include<conio.h>



// recursive function = self calling fucntion
// normal : summation of first 10 natutral numbers

/*
int summation(int num){
    
    int i,sum =0;
    for(i=0; i<=num; i++){
        sum = sum+i;
        
    }
    return sum;
}*/

//complex recursive 
int summation(int num1){

    if(num1 == 1){
        return 1;        
    }else{
        return num1 + summation(num1 - 1);   
    }  
}


int factorial(int num1){

    if(num1 == 1){
        return 1;        
    }else{
        return num1 * factorial(num1 - 1);   
    }  
}


int main(){
    int ans,ans1;
    
   
    ans = summation(10);
    printf("the summation of number is:- %d\n",ans);
    
     ans1 = factorial(4);
    printf("the factorial of number is:- %d\n",ans1);
    
    return 0;
}