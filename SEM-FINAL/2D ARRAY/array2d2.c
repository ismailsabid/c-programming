#include <stdio.h>

// //🔥PROB 8: WAP to change the given n*n matrix to its transpose without using extra array.

// int main(){
//     int n = 3;
//     int a[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     },x=0;
//     //printing the original;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");

//     //using the logic to swap for transposing.
//     for(int i=0;i<3;i++){
//         for(int j=x;j<n;j++){
//             int temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//         x++;
//     }
//     //printing the transpose matrix;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }

// }


// //testing prob 8 logic.
// int main(){
//     int n = 4; // try bigger matrix here
//     int a[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}
//     },x=0;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");
//     for(int i=0;i<3;i++){
//         for(int j=x;j<n;j++){
//             int temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//         x++;
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }

// }

// //🔥🔥🔥PROB 9: WAP  to rotate a matrix 90deg clockwise;

// int main(){
    
//     int n = 3;
//     int a[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     //printing the original:
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");
    

//     //reverse the original array;
//     for(int i=0;i<n;i++){
//         for(int j=0,k=n-1;j<=n/2;j++,k--){
//             int temp=a[j][i];
//             a[j][i]=a[k][i];
//             a[k][i]=temp;
//         }
//     }

//     //printing the reversed function.
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");

//     //transposing the reversed matrix so that it is done with the rotaion.
//     int x=0;
//     for(int i=0;i<n;i++){
//         for(int j=x;j<n;j++){
//             int temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//         x++;
//     }

//     //printing the rotated matrix;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
    


// }

//🔥🔥🔥PROB 10:WAP to print the multiplication of two matrices givne by the user.




