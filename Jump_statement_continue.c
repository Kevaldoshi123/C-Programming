#include<stdio.h>
#include<conio.h>

int main(){
int i;

for(i=0; i<=10; i++){
if(i == 5){
continue;
}
printf("%d\n",i);
printf("Hello \n");
}

//isme sirf 5 hello print nhi hoga because of continue
    return 0;
}