// #include <stdio.h>


// int main(){

//     int arr[10];
//     //taking input //
//     for(int i=0;i<=9;i++){
//         printf("Enter the element\n");
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<=9;i++){
//         printf("%d\n", arr[i]);
//     }

    
// }

// #include <stdio.h>


// int main(){

//     int a=4;
//     int few_numbers[5]={1,3,4,{1,2},a};
//     few_numbers[5]=3;//it cannot be done because there is no 6th place.the size is fixed.
//     printf("%d",few_numbers[5]);//it is also wrong because here there hsould not be any 6th element.
    
    
// }


//Given an array of marks of students, if the mark of any student is lesss than 35 print its roll number.[roll number here referes to the index of the array.]


// #include <stdio.h>

// int main(){
//     int marks[10]={95,90,31,25,100,50,65,89,97,30};

//     for(int i=0;i<=9;i++){
//         if(marks[i] < 35){
//             printf("%d\n",i);
//         }
//     }


// }


//🔥🔥Creating an array using loop

//example 1:


//Example 2:

// #include <stdio.h>
// int main(){

//     int arr[40],i;
//     arr[0]=0;
//     for(i=1;i<=39;i++){
//         arr[i]=arr[i-1]+3;
//         printf("%d\n",arr[i]);
//     }
//     //table of 3 using array;
//     int num[100],a;
//     num[0]=3;
//     printf("3 times 1 is: %d\n",num[0]);
//     for(i=1,a=2;i<=99;i++,a++){
//         num[i]=num[i-1]+3;
//         printf("3 times %d is: %d\n",a,num[i]);
//     }

//    🔥🔥 //calculate the sum of all elements in the array.

       //1st way:: 
//     int marks[10];
//     marks[0]=0;
//     printf("marks[10]=");
//     printf("{0, ");
//     for(i=1;i<=9;i++){
//         marks[i]=marks[i-1]+3;

//         printf("%d, ",marks[i]);
//     }
//     printf("}");

       //2nd way:
       
#include <stdio.h>
int main(){
    int i=0,sum=0,arr[10];
    for(i;i<10;i++){
        int a=i+1;
        printf("Enter %dth element : ", a);
        scanf("%d", &arr[i]);
    }
            
    for(i=0;i<=9;i++){// you have to reset the value of i here in order to do the following unless u dont want to do from the reverse
        sum=sum+arr[i];

    }
    printf("Sum of all the element of the array is: %d",sum);
       
}


    

// }

// //🔥🔥taking input practice

// #include <stdio.h>
// int main(){
//     int arr[100];
//     for(int i=0;i<=9;i++){
//         int a=i+1;
//         printf("Enter %dth element: ",a);
//         scanf("%d", &arr[i]);
//     }

// }