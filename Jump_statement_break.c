#include<stdio.h>
#include<conio.h>

int main(){

int i;

for(i=0; i<=10; i++){
if(i == 5){
break;
}
printf("%d\n",i);
}


    return 0;
}

/*
output
0
1
2
3
4
*/