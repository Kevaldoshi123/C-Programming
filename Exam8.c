#include<stdio.h>
#include<conio.h>
#include<string.h>




int main(){

char name[50];
int i,count = 0;

printf("Enter a string:- ");
scanf("%s",&name);

for(i=0; i<strlen(name); i++){

      if( name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
               count++;
                  }
}

printf("The number of vowels present in the string is:- %d",count);
    return 0;
}