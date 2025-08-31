#include<stdio.h>


int maximum(int array[], int n){
int max=0;

for(int i=0; i<n; i++){
 
    if(array[i] > max){
      max = array[i];
         }

}

return max;
}


int main(){

int arr[] = {1,2,3,4,5,56,78};
int max = maximum(arr,7);

printf("The maximum element present is:- %d",max);

    return 0;
}