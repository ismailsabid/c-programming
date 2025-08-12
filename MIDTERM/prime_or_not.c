#include <stdio.h>


int main(){

    int n;
    printf("Enter a number  ");
    scanf("%d",&n);
    int a=5;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==1){
        printf("This is a composite number");
    }else{
        printf("This is a prime number");
    }
}