#include<stdio.h>
#include<conio.h>
// enum or enumeration
/*
int main(){

enum days{sun=1,mon,tue,wed,thu,fri,sat};


enum days d1 = tue;

printf("%d",d1);

printf("the value of sun is:- %d\n",sun);
    return 0;
}
*/
enum month{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
enum solar{sun =1,mercury,venus,earth,mars,saturn,jupiter,uranus};

int main(){

enum month m1 = jan;
enum solar s1 = sun;
printf("Month:- %d\n",m1);

printf("Solar:- %d\n",s1);
    return 0;
}