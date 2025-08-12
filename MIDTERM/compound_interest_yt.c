#include<stdio.h>
int main(){
    float p,r,A,ci;
    int t;
    printf("Enter the amount of principle: ");
    scanf("%f",&p);
    printf("Enter the interest rate: ");
    scanf("%f",&r);
    printf("Enter the time period: ");
    scanf("%d",&t);
    float rate=r/100;
    float second=1+rate;
    float S=1.0;
    for(int i=1;i<=t;i++){
        S=S*second;
    }
    A=p*S;

    ci=A-p;
    printf("Compound interest is : %.4f", ci);
}