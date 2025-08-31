#include <stdio.h>
#include<conio.h>
/*
ASCII american standard code of information interchange
a<-character :-ASCII code 97
character = numer symbol letter
*/
int main() {
    char ch ='f';
    char ch1=33;
    
    printf("%c = %d\n",ch,ch);
printf("%c = %d\n",ch1,ch1);    

for(ch=0; ch<=122; ch++ ){
     printf("%c = %d \t",ch,ch);
     
}
    return 0;
}
