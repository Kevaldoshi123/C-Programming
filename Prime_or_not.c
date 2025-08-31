#include<stdio.h>
#include<conio.h>

int main(){
int num ,i;
int count = 0;

printf("Enter a  number:- ");
scanf("%d",&num);

for(i=1; i<=num; i++){

if(num%i == 0){
count++;
}

}
if(count == 2){
printf("%d is a pirme number ",num);
}else{
printf("%d is not a prime number",num);
}

    return 0;
}