#include<stdio.h>
#include<conio.h>


int main(){
    char name[4][50] = {"keval","sushil","sarika","charmi"};
    int i;
    
    
    for(i=0; i<4; i++){
        printf("%s ",name[i]); // character print karane ke liye column element use nhi karnge toh chalega
        
        
    }
    return 0;
}