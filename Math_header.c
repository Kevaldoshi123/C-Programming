#include<stdio.h>
#include<conio.h>
#include<math.h>



int main(){
    double result;
    
    
    
    result = ceil(5.3);        // ceil means round off    
    printf("ceil function:- %lf\n", result);
    
    result = floor(5.6);     // floor matlab decimal ke baad ke numbers hata dena       
    printf("floor function:- %lf\n", result);
    
    result = sqrt(169);            
    printf("square root function:- %lf\n", result);
    
    result = pow(2,3);;            
    printf("power function:- %lf\n", result);
    
    result = sin(5.3);            
    printf("trigo sin function:- %lf\n", result);
    
    result = cos(5.3);            
    printf("trigo cos function:- %lf\n", result);
    
    
    return 0;
}