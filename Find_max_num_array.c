#include<stdio.h>
#include<conio.h>
/*
int main(){

int arr[5] = {12,13,11,10,1}; 
int max = arr[0];
int i;


for( i=1; i<5; i++){
if(max < arr[i]){
max = arr[i];

}

}
printf("maximum value is:- %d",max);

    return 0;
}
*/





// max in array user input



int main(){

int arr[5];
int i,max;


printf("Enter five numbers:- ");
for(i=0; i<5; i++){

scanf("%d",&arr[i]);

}
max = arr[0];

for(i=1; i<5; i++){
if( max < arr[i]){
max = arr[i];

}

}

printf("The maximum value entered is:- %d",max);


return 0;

}