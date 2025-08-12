#include <stdio.h>

/* Function1: printline( ) */
void printline(void) /* contains no arguments */
{
    int i ;
    for(i=1; i <= 35; i++)
        printf("%c",'-');
    printf("\n");
}
/* Function2: value( ) */
float value(float principal, float inrate, int period) /* contains no arguments */
{
    int year;

    float sum;
    sum = principal;
    year = 1;
    while(year <= period)
    {
        sum = sum*(1+inrate);
        year = year +1;
    }
   
    return sum;
}




int main()
{  
    float inrate, principal, total_payment;
    int period;
    printline();
    printf("Principal amount?");
    scanf("%f", &principal);
    printf("Interest rate?");
    scanf("%f", &inrate);
    printf("Period?");
    scanf("%d", &period);
    total_payment= value(principal,inrate,period);
    printf("\n%8.2f %5.2f %5d %12.2f ", principal,inrate,period,total_payment);
    printline();
}