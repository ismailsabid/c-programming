#include<stdio.h>

// //✌️prob1:taking input and printing elements;

// int main(){
//     int srow,scolumn;
//     printf("Enter size of row and column sequentially= ");
//     scanf("%d %d", &srow,&scolumn);
//     int arr[srow][scolumn];
// //taking input;
//     for(int i=0;i<srow;i++){
//         for(int j=0;j<scolumn;j++){
//             printf("Enter element for (%d,%d) coordinate : ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// //printing the element:
//     for(int i=0;i<srow;i++){
//         for(int j=0;j<scolumn;j++){
//             printf("Element for (%d,%d) coordinate : %d\n",i,j,arr[i][j]);
            
//         }
//     }
// }


// //✌️prob2:wap to store 10 at every indext of 2d array.

// //just for practice creating a function;
// void print(int rowsize,int columnsize,int arr[rowsize][columnsize]){//🔥way to set parameter for 2d array.
    
//     for(int i=0;i<rowsize;i++){
//         for(int j=0;j<columnsize;j++){
//             printf("(%d,%d) for this coordinate the element is: %d\n",i,j,arr[i][j]);
//         }
//     }
// }
// int main(){
//     int srow,scolumn;
//     printf("Enter the size of row and column: ");
//     scanf("%d %d",&srow,&scolumn);
//     int arr[srow][scolumn];
//     for(int i=0;i<srow;i++){
//         for(int j=0;j<scolumn;j++){
//             arr[i][j]=10;
//         }
//     }

//     print(srow,scolumn,arr);
// }

// //✌️Prob 3:Wap to add two matrices;

// int main(){
//     int arr[3][4]={{1,3,5,6},{1,3,5,6},{1,3,5,6}},arr2[3][4]={{1,3,5,6},{1,3,5,6},{1,3,5,6}}, sumarray[3][4];
//     printf("sumarray[3][4]={");
//     for(int i=0;i<=2;i++){
//         printf("{");
//         for(int j=0;j<=3;j++){
//             sumarray[i][j]=arr[i][j]+arr2[i][j];
//             printf("%d ",sumarray[i][j]);

//         }
//         printf("}");
//     }
//     printf("}");

// }

// //✌️Prob 4:Find the sum of a given matrix n * m;

// int main(){
//     int n,m,sum=0;
//     printf("Enter the row and column size: ");
//     scanf("%d %d", &n,&m);
//     int arr[n][m];

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("Enter (%d,%d) element: ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             sum+=arr[i][j];
//         }
//     }
//     printf("The sum of all the elements of the matrix is: %d", sum);

// }

// //😎PROB 5: Given a matrix 'a' of dimension n*m and 2 coordinates(l1,r1) to (l2,r2).Return the sum of the rectangle from (l1,r1) to (l2,r2).

// int main() {
    
//     int a[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     },sum=0;
//     for(int i=1;i<=2;i++){
//         for(int j=1;j<=2;j++){
//             sum+=a[i][j];
//         }
//     }
//     printf("%d is the total sum of the rectangle", sum);
// }

// //🔥PROB 5:WAP a program to print the row number having the maximum num sum in a given matrix.

// int main(){
//     int a[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     },arr[3],sum=0,max=-1,maxrow;
//     //calculting the sum of each row;
//     for(int i=0;i<=2;i++){
//         for(int j=0;j<4;j++){
//             sum+=a[i][j];
//         }
//         arr[i]=sum;
//         sum=0;
//     }
//     //finding the row having max sum;
//     for(int i=0;i<=2;i++){
//         if(max<arr[i]){
//             max=arr[i];
//             maxrow=i;
//         }
//     }
//     maxrow=maxrow+1;
//     //printing the result;
//     printf("%dth row is the one having the max sum.\n", maxrow);
// }

//👌PROB 6: Given a matrix having 0-1 only,find the row with maximum number of 1's;

// int main() {
//     int n = 4, m = 5;
//     int a[4][5] = {
//         {0, 1, 0, 1, 1},  // row 0
//         {1, 1, 1, 0, 0},  // row 1
//         {0, 0, 1, 1, 1},  // row 2
//         {1, 1, 1, 1, 0}   // row 3
//     },countrow=0,countarray[4],countno,max=-1;

//     for(int i=0;i<4;i++){
//         for(int j=0;j<5;j++){
//             if(a[i][j]==1){
//                 countrow++;
//             }

//         }
//         countarray[i]=countrow;
//         countrow=0;
//     }
//     for(int i=0;i<4;i++){
//         if(max<countarray[i]){
//             max=countarray[i];
//             countno=i+1;
//         }
//     }
//     printf("%dth row is the one having maximum number of 1's",countno);

// }

// //😎🔥PROB 7:WAP to print the transpose of the matrix entered by the user.
// int main() {
//     int arr[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     },transarr[4][3];
//     printf("Tranpose array:{ ");
//     for(int i=0;i<4;i++){
//         printf("{");
//         for(int j=0;j<3;j++){
//             transarr[i][j]=arr[j][i];
//             printf("%d ",transarr[i][j]);
//         }
//         printf("} ");
//     }
    

// }

