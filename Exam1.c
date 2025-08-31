#include<stdio.h>
#include<conio.h>


char *reverse( char *s  ){

char temp;
int len=0;
while(s[len] != '\0'){
 len++;
}

for(int i=0; i < len/2; i++){

temp = s[i];
s[i]=s[len-1-i];
s[len-1-i]=temp;
}

return s;

}



int main(){

char s[50];

printf("Enter a character string:- ");
scanf("%s",s);

 reverse(s);

printf("The reverse of the string is:- %s",s);

    return 0;
}