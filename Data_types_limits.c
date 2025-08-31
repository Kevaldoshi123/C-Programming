#include<stdio.h>
#include<conio.h>



//data types

//int-> -32768 to 32767
// unsigned int-> 0 to 65345
// -2341234567 to 



int main(){
    int a = -23000;      // %d
     unsigned int b = 64000;   //%u   
    long int c = -9000111;    //%ld
    
    float d = 12.123;    //upto 6 after decimal
    double e = 321.321;  // upto 15 after decimal
    
    
    printf("this is int:- %d\n",a);
    printf("this is unsignedint:- %u\n",b);
    printf("this is  long int:- %d\n",c);
    printf("this is float:- %f\n",d);
    printf("this is double:- %lf\n",e);
    return 0;
}