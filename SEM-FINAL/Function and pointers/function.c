#include <stdio.h>

// //✌️PROBLEM ONE:print nCr using function;

// int ncr(int a,int b){
//     int nfact=1,rfact=1,nrfact=1,numerator,denominator,ncr;
//     for(int i=a;i>=1;i--){
//         nfact*=i;
//     }
//     for(int i=b;i>=1;i--){
//         rfact*=i;
//     }
//     for(int i=a-b;i>=1;i--){
//         nrfact*=i;
//     }
//     numerator=nfact;
//     denominator=rfact*nrfact;
//     ncr=numerator/denominator;
//     return ncr;
// }
// int main(){
//     int n,r;
//     printf("Enter n and p= ");
//     scanf("%d %d",&n,&r);

//     printf("%dC%d is = %d",n,r,ncr(n,r));
// }


// //🔥🔥🔥//PROBLEM 2: print pascal triangle using nCr function.

// int nCr(int a,int b){
//     int afact=1,bfact=1,abfact=1,numerator,denominator,aCb;
//     for(int i=a;i>=1;i--){
//         afact*=i;
//     }
//     for(int i=b;i>=1;i--){
//         bfact*=i;
//     }
//     for(int i=a-b;i>=1;i--){
//         abfact*=i;
//     }
//     numerator=afact,denominator=bfact*abfact,aCb=numerator/denominator;
//     return aCb;
// }
// int main(){
//     int n;
//     printf("How many rows do u want? And: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         printf("\n1 ");
//         for(int j=1;j<=i;j++){
//             printf("%d ",nCr(i,j));
//         }
        
//     }
// }

// //✌️Write a function to find the greates common divisor of two numbers.

// #include <stdio.h>
// int hcf(int a,int b){
//     int arr[100],x,j=0,max=-1;
//     if(a>b){
//         x=a;
//     }else{
//         x=b;
//     }
//     for(int i=1;i<=x;i++){
//         if(a%i==0 && b%i==0){
//             arr[j]=i;
//             j++;
//         }
//     }
//     for(int i=0;i<=j;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;

// }
// int main(){
//     printf("%d",hcf(12,16));
// }