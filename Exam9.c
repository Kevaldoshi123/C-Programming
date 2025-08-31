#include<stdio.h>
#include<conio.h>
/*
int main(){

int a[20],size,i,j,k;

printf("Enter a no of elements:- ");
scanf("%d",&size);

    printf("Enter array elements:- ");
        for(i=0; i<size; i++){
             scanf("%d",&a[i]);
        }


for(i=0; i<size; i++){
     for(j=i+1; j<size; j++){

         if( a[i] == a[j]){

              for(k=j; k<size; k++){
                    a[k] = a[k+1];
                      
              }
                size--;
                j--;
         }

     }

}


for(i=0; i<size; i++){

printf("%d ",a[i]);

}


    return 0;
}
*/

void Duplicates(int a[], int *size) {
    int i, j, k;

    for (i = 0; i < *size; i++) {
        for (j = i + 1; j < *size; j++) {
            if (a[i] == a[j]) {
                // to shift elements to left
                for (k = j; k < *size - 1; k++) {
                    a[k] = a[k + 1];
                }
                (*size)--;  // decrease the size of the array
                j--;  //  recheck the current position 
            }
        }
    }
}

int main() {
    int a[20], size, i;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    Duplicates(a, &size);

    printf("Array after removing duplicates: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}