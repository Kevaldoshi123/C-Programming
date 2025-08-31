#include<stdio.h>
#include<conio.h>


/*
int main(){


int arr1[2][3] = {{1,2,3},{4,5,6}};
int arr2[3][2] = {{10,11},{20,21},{30,31}};


int result[2][2] = {{0,0},{0,0}};

int i,j,k;


// m x n n x p
//i=m   j=p   k = n

for(i=0; i<2; i++){
     for(j=0; j<2; j++){

         for(k=0; k<3; k++){

                   result[i][j] += arr1[i][k] * arr2[k][j];   // result[i][j] = result[i][j] +(arr1[i][k] * arr2[k][j]); 

         }

     }
}

printf("Printing the result:- \n");

for(i=0; i<2; i++){
     for(j=0; j<2; j++){

           printf("%d ",result[i][j]);
     }
 
printf("\n");
}



    return 0;
}

*/



int main(){


int i,j,k,Arow,Acolumn,Brow,Bcolumn;
int a[3][3],b[3][3],product[3][3];

printf("Enter number of rows and column for A:- ");
scanf("%d %d",&Arow,&Acolumn);

printf("Enter elements for matrics A:- ");
for(i=0; i<Arow; i++){
     for(j=0; j<Acolumn; j++){
                  
            scanf("%d",&a[i][j]);

    }
}





printf("Enter number of rows and column for B:- ");
scanf("%d %d",&Brow,&Bcolumn);

if( Acolumn != Brow){

printf("This matrics cannot get multiplied!");

}else{


printf("Enter elements for matrics B:- ");
for(i=0; i<Brow; i++){
     for(j=0; j<Bcolumn; j++){
                  
            scanf("%d ",&b[i][j]);

    }
}
printf("\n");

for(i=0; i<Arow; i++){

    for(j=0; i<Bcolumn; j++){
              for(k=0; k<Brow; k++){
     
                     product[i][j] += a[i][k]*b[k][j];
     
     
       }
    }
}

printf("The resulted matrix is:- ");
for(i=0; i<Arow; i++){
      for(j=0; j<Bcolumn; j++){

            printf("%d ",product[i][j]);

      }

printf("\n");
    }


}
    return 0;
}












