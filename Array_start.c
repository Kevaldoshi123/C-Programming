#include<stdio.h>
#include<conio.h>


// array :- we can store multiple values in it of same data type.
// index number of first number is 0  


int main(){

int arr1[5] = {10,20,30,40,50};
int arr2[2] = {12,10};    //an array cannot exceed a limit []; 

int arr3[] = {1,2,3,4};    // an array with no limit set can store only four value
int i;

//arr1[0] = 7;   // we can change values in array 

for(i=0; i<=4; i++){
printf("%d ",arr1[i]);
}

       printf("The value of index 0 is:- %d\n",arr1[0]);




    return 0;
}


/*
int main(){

int arr[5];   //user se input mangana hai toh limit dalna he padega
int i;

// user input ke liye loop
printf("Enter five numbers:- ");
for(i=0; i<5; i++){

scanf("%d",&arr[i]);
}

//print ke liye loop
printf("The entered numbers are:- ");
for(i=0; i<5; i++){
printf("%d ",arr[i]);
}
    
    
    
    
    return 0;
}
*/