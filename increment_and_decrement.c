#include<stdio.h>
#include<conio.h>

int main(){

int x = 12;
int y = x++;
int z = x--;

printf("the value of x:- %d\n",x);
printf("the value of y after increment of x:- %d\n",y);
printf("the value of z after decrement:- %d\n",z);
    return 0;
}
/*  agar ++ ya prefix lagaya hota toh (y) ki value 13 aati 
    lekin ++ postfix me lagaya hai toh ++ hua hai but (y) ki value me 
    display nhi hoga (x) ke value me hoga. 
    
*/