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
    printf("trigo sin function:- %lf\n", result);  // this is radian value 

    /*
    printf("sin(30) = %lf\n",sin(30 * 3.14)/100);   this is to find degree value
    */
    
    result = cos(5.3);            
    printf("trigo cos function:- %lf\n", result);
    
    result = fabs(-3);
    printf("anstract value:- %lf\n",result);  // it means 0 tak pohochne ke liye kitne index value hogi

    return 0;
}