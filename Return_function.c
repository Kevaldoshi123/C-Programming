#include<stdio.h>
#include<conio.h>


//return function

int add(int a, int b){
    
    int result = a+b;
return result;    
}


int greater(int num1, int num2){
    
    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}

int main(){
    int ans;
    int ans2;
    
    ans = add(2,4);
    printf("ans:-%d\n",ans);
    
    ans2 = greater(4,5);
    printf("%d\n",ans2);
    
    return 0;
}