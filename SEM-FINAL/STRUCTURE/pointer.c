#include <stdio.h>
#include <string.h>

//✌️prob 1:

int main(){
    int x=7,y=5;
    int *a =&x,**b =&a,*c =&y;
    printf("%d",**b);
    
}