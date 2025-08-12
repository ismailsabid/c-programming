#include <stdio.h>

int main(){
    int a;int b;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b= ");
    scanf("%d", &b);
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
        printf("%dth =%d\n",i,power);
    }
    printf("The result is= %d", power);
}