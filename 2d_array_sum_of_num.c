#include<stdio.h>
#include<conio.h>


int main(){
    int arr[3][3];
    int i,j;
    int sum =0;
    
    
    printf("enter 9 numbers");
     
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            
            scanf("%d",&arr[i][j]);   
        }
    }
    printf("sum of numbers:- \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
        
        sum = sum + arr[i][j];
        }
        
    }printf("total:- %d\n",sum);
    return 0;
}