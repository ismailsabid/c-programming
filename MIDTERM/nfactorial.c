//n! calculatoin using function:
#include <stdio.h>
//step 1:Initialize Global variable.
int i,  n;



//create function
int factorial(int x){

    for(i=x-1;i>=1;i--){
        x=x*i;
    }
    return x;
}







///execute function in the main function.
int main(){

    printf("Write the value of n= ");
    scanf("%d", &n);
    int Factorial=factorial(n);
    printf("%d! is equal to %d",n,Factorial);
}




