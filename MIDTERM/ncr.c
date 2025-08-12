#include<stdio.h>

int n,r,i,denominator;



int factorial(int x){

    int fact=1;
    for(i=2;i<=x;i++){
        fact*=i;
    }
    return fact;

}



int main(){
   
    printf("Write n= ");
    scanf("%d", &n);
    printf("Write r= ");
    scanf("%d", &r);
    int nr= n-r;
    denominator=factorial(r) * factorial(nr);
    int Factorial=factorial(n)/denominator;
    printf("%dC%d is equal to :%d",n,r,Factorial);



}