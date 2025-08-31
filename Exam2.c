#include<stdio.h>
#include<conio.h>
#include<string.h>



char palindrome(char *s){

int start = 0;
int end = strlen(s)-1;

while(start < end){

     if(  s[start] != s[end]){

           return 0;

     }

     start++;
     end--;

}
return 1;
}

int main(){
char s[50];

   printf("Enter a stirng:- ");
      scanf("%s",s);

if(palindrome(s)){
printf("The entered string is palindrome");

}else{

printf("Not a palindrome");
}

    return 0;
}