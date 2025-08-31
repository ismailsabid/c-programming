#include <stdio.h>
//🔥🔥Find the total number of pairs in the Array whose sum is equal to the given value x;

// int main(){
//     int arr[10],count=0,a=1;
//     //taking input
//     for(int i=0;i<10;i++){
        
//         printf("Enter %dth element: ", a);
//         scanf("%d",&arr[i]);
//         a++;
//     }
//     //finding pairs
//     for(int i=0;i<10;i++){
//         for(int j=0;j<10;j++){
//             if(arr[i]+arr[j]==12){
//                 printf("(%d,%d)",arr[i],arr[j]);
//                 count++;
//             }
//         }
//     }
//     //result
//     printf("Total number of pairs: %d",count);
// }

// //🔥🔥😎😎Find the total number of triplets whose sum is equal to the given number x;

// int main(){
//     int arr[9]={1,2,3,4,5,6,7,8,9},triplets=0;
//     printf("Triplets are:");
//     for(int i=0;i<9;i++){
        
//         for(int j=0;j<9;j++){

//             for(int k=0;k<9;k++){

//                 if(arr[i]+arr[j]+arr[k]==12){
//                     printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
//                     triplets++;
//                 }

//             }

//         }

//     }
//     printf("\n Total number of triplets is: %d", triplets);

// }

// //😎😎Find the second largest element:😎😎😎

// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10},largest=-1,secondLargest=-1;
//     //finding the largest element;
//     for(int i=0;i<10;i++){
//         if(largest<arr[i]){
//             largest=arr[i];
//         }

//     }
//     for(int i=0;i<10;i++){
//         if(secondLargest<arr[i] && arr[i]<largest){
//             secondLargest=arr[i];
//         }
//     }
//     printf("Second Largest element is: %d",secondLargest);
// }

// //😎😎WAP to copy the contents of an array to another array in reverse order.

//  int main(){
//     int arr[10]={2,5,4,9,7,8,3,1,4,6},revArr[10],i=0,j=9;

//     for(i=0,j=9;i<10 && j>=0;j--,i++){
//         revArr[j]=arr[i];
//     }
//     printf("revArr={");
//     for(i=0;i<10;i++){
//         printf("%d ,",revArr[i]);
//     }
//     printf("}");
//  }


// //🔥🔥//😎😎WAP to copy the contents of an array to another array in reverse order without using an extra array.

// //main part is her the mechanism of reversing the elements;
// void revArr(int arr[],int size){
//     for(int i=0,j=size-1;i<size/2;i++,j--){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
// }

// int main(){
//     //size of the array:
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d",&size);
//     int marks[size],count=1;

//     //having elements in the array:
    
//     for(int i=size-1;i>=0;i--){
//         count+=i;
//         marks[i]=count;
//     }

//     //printing the element:
//     printf("The elements of the array is now: ");
//     for(int i=0;i<size;i++){
//         printf("%d ",marks[i]);
//     }

//     //reversing the elements and printing them;

//     revArr(marks,size);

//     printf("\n\nElements of the array in reverse order: ");

//     for(int i=0;i<size;i++){
//         printf("%d ",marks[i]);
//     }


// }

// //🔥//if an array arr contains n elements,check if the array is palindrome or not:


// int main(){
//     int arr[12] = {7, 4, 9, 1, 5, 8, 8, 5, 1, 9, 4, 7},count=0;
//     for(int i=0,j=11;i<=11;i++,j--){
//         if(arr[i]==arr[j]){
//             count++;
//         }
//     }
//     if(count==12){
//         printf("The array is a palindrom array as in it is symmetrical .its half is symmetirical to other half");
//     }else{
//         printf("The array is not a palindrom array as in it is not symmetrical .its half is not symmetirical to other half");
//     }
// }


// //🔥🔥//reverse 3 to 6 indexed elements of a given array:

// void revArr(int arr[],int a,int b){
//     for(int i=a,j=b;i<=j;i++,j--){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
// }
// int main(){
//     int arr[10]={2,3,4,5,6,78,9,7,5,4};
//     printf("current elements are : ");
//     for(int i=0;i<=9;i++){
//         printf("%d ",arr[i]);
//     }
    
//     revArr(arr,3,6);
//     //printing the elements. 
//     printf("\nConverted elements are : ");
//     for(int i=0;i<=9;i++){
//         printf("%d ",arr[i]);
//     }
// }


// //🔥🔥🔥//😎😎//rotate a given array 'a' by k steps,where k is a non negative given number;k can be bigger than the size of the array.
// void rev(int arr[],int si,int ei){
//     //reverse mechanism;
//     for(int i=si,j=ei;i<=j;i++,j--){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
// }

// int main(){
//     int arr[7]={5,6,4,89,3,4,6};
//     //printing the elements. 
//     printf("current elements are : ");
//     for(int i=0;i<=9;i++){
//         printf("%d ",arr[i]);
//     }
//     int n=7;
//     int k=2;
//     rev(arr,0,n-1);
//     rev(arr,0,k-1);
//     rev(arr,k-1,n-1);
//     //printing the elements. 
//     printf("\n elements are : ");
//     for(int i=0;i<=9;i++){
//         printf("%d ",arr[i]);
//     }
// }

//🔥🔥Searching::🔥🔥


// //😎🔥🔥😎Given an array containing elements 1 to 100 except one element in this range is missing.Find the missing element.

// //1st way:
// int main(){
//     int arr[99] = {
//     1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
//     11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
//     21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
//     31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
//     41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
//     51, 52, 53, 54, 55, 56,
//     // missing 57 here
//     58, 59, 60, 61, 62, 63, 64, 65, 66, 67,
//     68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
//     78, 79, 80, 81, 82, 83, 84, 85, 86, 87,
//     88, 89, 90, 91, 92, 93, 94, 95, 96, 97,
//     98, 99, 100
//     },count=0;
//     for(int j=1;j<=100;j++){
//         count=0;
//         for(int i=0;i<99;i++){
            
//             if(j==arr[i]){
//                 count=1;
//             }
//         }
//         if(count==0){
//             printf("%d is missing here.",j);
//         }
//     }


// }
// //1st way practice:

// int main(){
//     int arr[99] = {
//     1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
//     11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
//     21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
//     31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
//     41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
//     51, 52, 53, 54, 55, 56,
//     // missing 57 here
//     58, 59, 60, 61, 62, 63, 64, 65, 66, 67,
//     68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
//     78, 79, 80, 81, 82, 83, 84, 85, 86, 87,
//     88, 89, 90, 91, 92, 93, 94, 95, 96, 97,
//     98, 99, 100
//     },count=0;//0 means it's missing.

//     for(int i=1;i<=100;i++){
//         count=0;
//         for(int j=0;j<=98;j++){
//             if(i==arr[j]){
//                 count=1;
//                 break;
//             }

//         }
//         if(count==0){
//             printf("%d is missing here in the loop.",i);
//         }
//     }

// }

// //best way:

// int main(){
//     int fullSum=0,missSum=0,missElement;
//     int arr[99] = {
//     1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
//     11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
//     21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
//     31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
//     41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
//     51, 52, 53, 54, 55, 56,
//     // missing 57 here
//     58, 59, 60, 61, 62, 63, 64, 65, 66, 67,
//     68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
//     78, 79, 80, 81, 82, 83, 84, 85, 86, 87,
//     88, 89, 90, 91, 92, 93, 94, 95, 96, 97,
//     98, 99, 100
//     };
//     //finding total sum of 1 to 100;
//     for(int i=1;i<=100;i++){
//         fullSum+=i;
//     }
//     for(int i=0;i<=98;i++){
//         missSum+=arr[i];
//     }
//     missElement=fullSum-missSum;

//     printf("Missing element is %d",missElement);
// }

// //😎//WAP to find the duplement element of from a given array of integers.
// //needs to be fixed;
// int main(){
//     int arr[15] = {4, 2, 7, 2, 9, 4, 5, 7, 1, 3,4,2,6,7,7},count=0;
//     printf("Duplicates are: ");
//     for(int i=0;i<=14;i++){
//         for(int j=i+1;j<=14;j++){
//             if(arr[i]==arr[j]){
//                 count++;
                
//             }

//         }
//         if(count>0){
//             printf("%d(%d) ",arr[i],count);
//         }
//         count=0;
//     }
// }


// //🔥🔥😎😎//find the unique number in a given Array where all the elements are being repeated twice with one value being unique;

// int main(){
//     int arr[9] = {4, 2, 7, 9, 2, 4, 9, 6, 6},count=0;
//     for(int i=0;i<9;i++){
//         count=0;
//         for(int j=0;j<9;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             printf("The unique number is: %d", arr[i]);
//         }
//     }
// }


//to delete from a postion:

int main(){
    int arr[7]={1,3,5,6,7,3,2},pos;
    printf("Enter the positoin");
    scanf("%d",&pos);
    for(int i=pos-1;i<7;i++){
        arr[i]=arr[i+1];
    }
    printf("%d",arr[6]);
}
