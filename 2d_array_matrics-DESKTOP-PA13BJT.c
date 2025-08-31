#include<stdio.h>
#include<conio.h>

int main(){
    int arr[3][3];
    int i,j;
    
    
    printf("enter 9 numbers");
     
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            
            scanf("%d",&arr[i][j]);   
        }
    }
    printf("Matrix is:- \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
        
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


