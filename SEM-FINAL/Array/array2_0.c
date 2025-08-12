#include<stdio.h>
//🔥🔥Product of all elements in the given array
// int main(){
//     int arr[10],product=1;
//     for(int i=0,a=1;i<=9;i++,a++){
//         printf("Enter the %dth element: ", a);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0,a=1;i<=9;i++,a++){
//         printf("%dth element is : %d\n", a, arr[i]);
//     }
//     for(int i=0;i<=9;i++){
//         product*=arr[i];
//     }
//     printf("The product of all element in the given array is: %d", product);
    
// }


// //🔥2🔥Finding the maximum element:

// int main(){
//     int arr[10],max=-1;
//     for(int i=0;i<=9;i++){
//         int a=i+1;
//         printf("Enter %dth element: ",a);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<=9;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("The maximum value is: %d\n", max);

//     for(int i=0;i<=9;i++){
//         int a=i+1;
//         if(arr[i]==max){
//             printf("%dth element is the maximum element\n",a);
//         }
//     }
    
// }


//🔥🔥Passing arrays to the function:

// //1.SWAPPING::

// void swap(int arr[]){
//     int temp=arr[0];
//     arr[0]=arr[1];
//     arr[1]=temp;
//     return;
// }

// int main(){
//     int score[2]={58,99};
//     printf("First element is : %d\n",score[0]);
//     printf("Second element is : %d\n",score[1]);

//     swap(score);
//     printf("First element is : %d\n",score[0]);
//     printf("Second element is : %d\n",score[1]);
    
// }


// //🔥🔥given an array of integers , change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10;

// int main(){
//     int arr[10];
//     for(int i=0;i<=9;i++){
//         int a=i+1;
//         printf("Enter %d th element: ",a);
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<=9;i++){
//         if(i%2==0){
//             arr[i]+=10;
//         }else{
//             arr[i]*=2;
//         }
//     }
//     for(int i=0;i<=9;i++){
//         int a=i+1;
//         printf(" %d th element: %d\n",a,arr[i]);
        
//     }

// }

//🔥🔥Find the difference between the sum of elements at even indices to the sum of elements at even indices to the sum of elements at odd indices.

// int main(){
//     int arr[6]={1,5,2,5,2,28},sumEven=0,sumOdds=0,diff;
//     for(int i=0;i<=5;i++){
//         if(i%2==0){
//             sumEven +=arr[i];
//         }else{
//             sumOdds+=arr[i];
//         }
//     }
//     diff=sumEven-sumOdds;
//     if(diff<0){
//         diff=diff*-1;
//         printf("The differnece is: %d",diff);
//     }else{
//         printf("The differnece is: %d",diff);
//     }
// }


// //🔥🔥Count the number of elements in a given array greater than a given number x

// int main(){
//     int arr[10]={2,6,48,1,2,5,1,48,9,3},count=0;
//     printf("Elements greater than 5 are: ");
//     for(int i=0;i<=9;i++){
//         if(5<arr[i]){
//             count++;
//             printf("%d, ",arr[i]);
//         }
//     }
//     printf("\n%d elements are greater than 5",count);
// }

