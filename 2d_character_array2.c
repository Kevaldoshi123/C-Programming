#include<stdio.h>
#include<conio.h>

/*
data_type arra_name[row element][column element]= {{1,2,3},{4,5,6,},{7,8,9}}

*/
int main(){
  char name[50] = {'a','b','c'}; 
  char UPG[50] = "keval doshi";
  char year[50];
    int i;
    
    
 printf("%c",name[0]);  
   printf("%c",name[1]); 
   printf("%c",name[2]);
    
    
    
   for(i=0; name[i] != '\0'; i++){
  printf("%c",name[i]);              
   }
    
    
    printf("print character array with string format:-%s\n",name );
    printf("%s\n",UPG);
    printf("%c\n",UPG[0]);
    printf("%c\n",UPG[1]);
    printf("%c\n",UPG[2]);
    printf("%c\n",UPG[3]);
    printf("%c\n",UPG[4]);
    printf("%c\n",UPG[5]);
    printf("%c\n",UPG[6]);
    printf("%c\n",UPG[7]);
    printf("%c\n",UPG[8]);
    printf("%c\n",UPG[9]);
    printf("%c\n",UPG[10]);
    
    
    
    printf("enter your year:-");
    scanf("%s",&year);
    
    
    printf("enter your year:- %s\n",year);
    
    
    
    return 0;
}