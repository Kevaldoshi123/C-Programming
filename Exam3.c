
#include<stdio.h>
#include<conio.h>

int main(){
int num;
int n1=0,n2=1,n3,i;



printf("Enter a number of terms:- ");
scanf("%d", &num);

if(num <= 0 ){

printf("Enter a positive number");
return 1;
}

printf("%d ",n1);

if(num > 1){
 
   printf("%d", n2);

}

for(i=2; i < num; i++){

     n3 = n1+n2;
     printf("%d",n3);
     n1=n2;
     n2=n3;
     
     
     
}

    return 0;
}





