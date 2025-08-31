#include<stdio.h>
#include<conio.h>


int main(){
int x = -24;

 if(x > 0){
    if(x % 2 == 0){
   printf("The entered number is a positive even number");
    }else{
        printf("The entered number is a positive odd number");
    }
}else if(x < 0){

if(x % 2 == 0){
 printf("The entered number is a negative even number");
}else{
  printf("The entered number is a nehative odd numebr");
}

}


    return 0;
}