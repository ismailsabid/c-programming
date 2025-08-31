#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// //🔥PROB 1:pROGRAM TO SUM ALL ELEMENTS STORED IN AN ARRAY USING POINER;

// int main(){
//     int *r;
//     int arr[4]={1,2,3,5},sum=0;
    
//     r=arr;
//     printf("%d\n",r[2]);//equivalent to: printf("%d",*(r+2));
    
//     //adding elements :

//     for(int i=0;i<4;i++){
//         sum+=*(r+i);
//     }
//     printf("Sum: %d",sum);
// }

//🔥🔥//PROB 2:2d array with pointers:

// int main(){
//     int arr[2][3]={{1,3,5},
//                    {4,5,6}
//                   };
//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<3;j++){
//     //         printf("%d %d\n", arr[i][j],*((arr+i)+j));
//     //     }
//     // }
//     printf("%d",*(*arr+2));

//     //output 5:
//     printf("\n%d\n",*(*(arr+1)+2));
//     printf("The element of the array are: \n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d\t%d\n",arr[i][j],*(*(arr+i)+j));
//         }
//     }
// }

// //🔥🔥//PROB 3: sWAPPING (CALL BY REFERENCE);
// void swap(int *x, int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int a=7,b=8;
//     printf("%d\t%d\n",a,b);

//     printf("After swappping ");
//     swap(&a,&b);
//     printf("\n%d\t%d",a,b);

// }
// //🔥🔥//PROB 4: ADDITIONG OF MATRIX:

// int main(){
//     int arr1[10][10],arr2[10][10],arr3[10][10];
//     int rsize1,csize1,rsize2,csize2;
//     //taking input of row column size;

//     printf("Enter the rowsize of first array: ");
//     scanf("%d", &rsize1);
//     printf("Enter the column size of first array: ");
//     scanf("%d", &csize1);
//     printf("Enter the rowsize of second array: ");
//     scanf("%d", &rsize2);
//     printf("Enter the column size of second array: ");
//     scanf("%d", &csize2);

//     //checking if rowsize and column size equal:

//     if(rsize1!=rsize2||csize1!=csize2){
//         printf("Addition cannot be completed");
//     }else{
//         //taking elements:
//         printf("Enter the elements of the 1st  array: \n");

//         for(int i=0;i<rsize1;i++){
//             for(int j=0;j<csize1;j++){
//                 scanf("%d",(*(arr1+i)+j));
//             }
//         }

//         //printing 1st array:
//         for(int i=0;i<rsize1;i++){
//             for(int j=0;j<csize1;j++){
//                 printf("%d ",*(*(arr1+i)+j));
//             }
//             printf("\n");
//         }

//         //second array:

//         //taking elements:
//         printf("Enter the elements of the 2nd  array: \n");

//         for(int i=0;i<rsize2;i++){
//             for(int j=0;j<csize2;j++){
//                 scanf("%d",(*(arr2+i)+j));
//             }
//         }

//         //printing 2nd array:
//         for(int i=0;i<rsize2;i++){
//             for(int j=0;j<csize2;j++){
//                 printf("%d ",*(*(arr2+i)+j));
//             }
//             printf("\n");
//         }
//         //addition:

//         for(int i=0;i<rsize1;i++){
//             for(int j=0;j<csize2;j++){
//                 *(*(arr3+i)+i)=*(*(arr1+i)+j)+*(*(arr2+i)+j);
//             }
//         }
//         //printing 3rd array:
//         for(int i=0;i<rsize2;i++){
//             for(int j=0;j<csize2;j++){
//                 printf("%d ",*(*(arr3+i)+j));
//             }
//             printf("\n");
//         }

//         //printing the addition:

        
//     }
    
// }
//🔥🔥//PROB:MULTIPLICATOIN USING POINTER OF 3*3 MATRIX;

int main(){
    int a[3][3],b[3][3],c[3][3],sum=0;
    //taking input:
    //1st matrix:
    printf("Enter the element:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",(*(a+i)+j));
        }
    }
    //2nd matrix:
    printf("Enter the element:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",(*(b+i)+j));
        }
    }
    //printing:
    //1st matrix:
    printf("1st matrix: \n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", *(*(a+i)+j));
        }
        printf("\n");
    }
    
    //2nd matrix:
    printf("2nd matrix: \n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", *(*(b+i)+j));
        }
        printf("\n");
    }
    //multiplicatoin::
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=0;
            for(int k=0;k<3;k++){
                sum=sum+*(*(a+i)+k) * *(*(b+k)+j);
            }
            *(*(c+i)+j)=sum;
        }
    }
    //printing:
    printf("The final matrix :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",*(*(c+i)+j));
        }
        printf("\n");
    }
}


// //✌️prob 1:

// int main(){
//     int x=7,y=5;
//     int *a =&x,**b =&a,*c =&y;
//     printf("%d",**b);
    
// }

