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



// //🔥🔥🔥PROB 10:WAP to print the multiplication of two matrices givne by the user.🔥🔥🔥

// int main(){
//     int m=2,n=3,p=3,q=2; 
//     int a[2][3]={
//     {1, 2, 3},
//     {4, 5, 6}
//     };
//     //printing a matrix;
//     printf("\n A matrix : \n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");

//     int b[3][2]={
//     {7, 8},
//     {9, 10},
//     {11, 12}
//     };

//     //printing b matrix;
//     printf("\n B matrix : \n");
//     for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");

//     int res[m][q];
//     if(n!=p){
//         printf("Matrices cannot be multiplied");
//     }else{
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 res[i][j]=0;
//                 for(int k=0;k<n;k++){
//                     res[i][j]+=a[i][k]*b[k][j];
//                 }
//             }
//         }
//     }
//     printf("\n result:\n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");


// }


// //😎//PROB 11: Wave printing -1(row wise);

// int main (){
//     int arr[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     for(int i=0;i<3;i++){
//         if(i%2==0){
//             for(int j=0;j<3;j++){
//                 printf("%d ",arr[i][j]);
//             }
//         }else{
//             for(int j=2;j>=0;j--){
//                 printf("%d ", arr[i][j]);
//             }
//         }
//     }
// }

//😎PROB 12: WAVE printing -2(Column wise);//this one needs to be checked


int main(){
    //making array:

    int m,n;
    printf("Enter row of the matrix: ");
    scanf("%d", &m);
    printf("Enter column of the matrix: ");
    scanf("%d", &n);
    int arr[m][n];

    //taking input:

    printf("Enter elements of the matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }


    //wave printing:
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=m-1;j>=0;j--){
                printf("%d ", arr[j][i]);
            }
        }else{
            for(int j=0;j<m;j++){
                printf("%d ", arr[j][i]);
            }
        }
    }
}