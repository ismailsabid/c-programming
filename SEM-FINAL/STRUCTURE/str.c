#include <stdio.h>
#include <string.h>
#include<stdlib.h>

// //✌️PROB 1:cREATE A STRUCTURE TYPE 'BOOK' WITH NAME ,PRICE AND NUMBER OF PAGES AS ITS ATTRIBUTES.

// int main(){
//     struct book{
//         char name[40];
//         float price;
//         int noOfPages;
//     }a,b,c;

//     char name[50]={'s','a','b','i','d'};
//     printf("%s",name);


// }

//🔥🔥🔥Array of structure:

// int main(){
//     typedef struct pokemon {
//         int hp;
//         float speed;
//         char tier;
//     }pokemon;
//     pokemon x={4000,200,'d'};
//     pokemon arr[4]={{2,5,'a'},{5,100,'B'},x};

// }

// int main(){
//     struct pokemon{
//         char name[20];
//         int hp;
//         float speed;
//         char tier;
//     };
//     struct pokemon pikachu;
//     struct pokemon chizaru;
//     struct pokemon charizard;
    

//     strcpy(pikachu.name,"Pikachu");
//     pikachu.hp=100;
//     pikachu.speed=200;
//     pikachu.tier='A';

//     strcpy(charizard.name,"Charizard");
//     charizard.hp=520;
//     charizard.speed=470;
//     charizard.tier='B';

//     strcpy(chizaru.name,"Chizaru");
//     chizaru.hp=400;
//     chizaru.speed=430;
//     chizaru.tier='C';

//     struct pokemon arr[3]={pikachu,chizaru,charizard};

//     for(int i=0;i<3;i++){
//         printf("%s\n",arr[i].name);
//         printf("%d\n",arr[i].hp);
//         printf("%f\n",arr[i].speed);
//         printf("%c\n",arr[i].tier);
//     }

// }

// //✌️PROB 1: A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match.Create an array of structure to hold records of 20 such cricketer and then write a prgram to read these records;

// int main(){
//     //structure:
//     typedef struct cricketer{
//         char name[20];
//         int age,noMatch;
//         float avgRun;
//     }cricketer;

//     //creating array of of same structure elements;

//     cricketer arr[20];

//     //taking input:

//     for(int i=0;i<5;i++){
//         printf("Name: ");
//         scanf("%s", arr[i].name);
//         printf("Age: ");
//         scanf("%d", &arr[i].age);
//         printf("Number of matches: ");
//         scanf("%d", &arr[i].noMatch);
//         printf("Average Run per match: ");
//         scanf("%f", &arr[i].avgRun);
//     }
//     for(int i=0;i<5;i++){
//         printf("Name: %s\n",arr[i].name);
//         printf("Age: %d\n", arr[i].age);
//         printf("Number of matches: %d\n", arr[i].noMatch);
//         printf("Average Run per match: %f\n\n", arr[i].avgRun);
//     }
// }



// //✌️PROB 2: Create a structure 'date' that contains three members namely date, month and year. Create 2 structure variables with differnet dates and now compare the tow.If the dates are equal then display message as "Equal" otherwise "Unequal";

// int main(){
//     typedef struct date{
//         int date, month, year;
//     }date;
//     date no1={20,7,2005}, no2;
    
//     no2=no1;
//     printf("%d = %d\n", no2.date, no1.date);

//     no2.date=30;
//     if(no2.date==no1.date){
//        printf("%d and %d are equal ", no2.date, no1.date);
//     }else{
//          printf("%d and %d are not equal ", no2.date, no1.date);
//     }

// }

// int main(){
//     typedef struct employee{
//         int id;
//         int age;
//         float salary;
//         char tier;
//     }worker;

//     worker arr[20]={{440404,20,40000,'a'}, {440404,20,40000,'a'}};
//     printf("%d", arr[2].id);
// }


// //✌️✌️//Nesting of structure.

// int main(){
//     typedef struct pokemon{
//         int hp;
//         int speed;
//         int attack;
//         char tier;
//         char name[15];
//     }pokemon;
//     typedef struct legendPok{
//         pokemon normal;
//         char ability[10];
//     }legendaryPokemon;

//     typedef struct superPok{
//         legendaryPokemon super;
//         char spAbility[20];
//     }superPokemon;

//     superPokemon chongching={{{200,1000,300,'A',"Chongching"},"killing"}, "turningtoHuman"};

    

//     // strcpy(chongching.spAbility,"TurningIntoHuman");
//     printf("%s\n", chongching.spAbility);

//     // strcpy(chongching.super.ability,"Killing");
//     printf("%s\n", chongching.super.ability);

//     // chongching.super.normal.tier='B';
//     printf("%s\n", chongching.super.ability);
// }


// //✌️😎//PROB 3: Create a structure specifiy data on students with these attributes: Roll number ,nName , Department, Course., Year of joinging. Create 2 structure variables. Now, create a function to check if two students have the same Department.Pass the two structure variable as input tho this function.
// typedef struct studentinfo{
//     int rollNumber;
//     char nName[20];
//     char Deparment[10];
//     int yearOfJoining;
// }studentInfo;
// void depCheck(studentInfo x,studentInfo y){
//     if(x.Deparment==y.Deparment){
//         printf("They have same department.");
//     }
// }

// int main(){
//     studentInfo  arr[2]={};

//     for(int i=0;i<2;i++){
//         printf("%s,what is you department?",arr[i].nName);
//         scanf("%s", arr[i].Deparment);
//     }
//     printf("\n%d",rakib.rollNumber);

// //needs to check

// }
// //✌️//PROB  4:Create a  structure 'person' having attributes as age and weight. Access its structure variables using pointers.

// typedef struct person{
//     int age;
//     int weight;
// }person;
// int main(){
//     person tawsif;
//     person *x=&tawsif;

//     (*x).age=15;
//     (*x).weight=30;

//     printf("The age of tawsif is : %d\n", (*x).age);
//     printf("Tawsif is %d kg.", (*x).weight);
// }


// //😎PROB 5: SWAPPING NUMBERS.(PASS BY REFERENCE)

// void swap(int *x,int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int sakib=12,rakib=20;
//     printf("Sakib=%d\nRakib=%d\n\nAfter swapping:\n",sakib,rakib);
//     swap(&sakib,&rakib);
//     printf("Sakib=%d\nRakib=%d",sakib,rakib);
// }

// //🔥PROB 6: Create a structure Student with members name (string) and marks (int). Write a function void updateMarks(Student *s, int newMarks) that takes a pointer to a Student and updates its marks with the given newMarks. In the main() function, create a Student variable and input its name and marks from the user. Then call updateMarks() passing the address of the student. Finally, print the student’s details both before and after calling the function to verify that the marks have been updated using pass by reference.

// // If you want, I can also write the full C code for this paragraph so you can directly try it out.
// struct Student{
//     char name[20];
//     int marks;
// };

// void updateMarks(struct Student *x, int newMarks){
//     strcpy(x->name,"Tawsif");
//     x->marks=newMarks;
// }


// int main(){
    
//     struct Student tawsif={"rakib",100},rakib={"Rakib", 120};
//     struct Student *x=&tawsif, *y=&rakib;
//     updateMarks(x,200);
//     printf("%s\n", x->name );
//     printf("%d\n", x->marks);

//     x=y;
//     printf("%s\n", x->name );
//     printf("%d\n", x->marks);
    

    

// // }
// //😎//PROB 7:Write a program to take N number of integers as input and display them.

// int main(){
//     int *x =(int*) malloc(10*sizeof(int));
//     int *p=x;
//     for(int i=1;i<=10;i++){
//         printf("Enter the %dth element: ",i);
//         scanf("%d",x);
//         x++;
//     }
//     for(int i=1;i<=10;i++){
//         printf("%dth element is: %d",i,(*p));
//         p++;
//     }
// }
// // 🔥Dynamic Memory Allocation using malloc:
// // Write a program to dynamically allocate memory for an array of integers using malloc.
// // • Prompt the user to enter the size of the array.
// // • Allocate memory for the array based on the user input.
// // • Prompt the user to enter elements for the array.
// // • Print the array elements.
// // • Freethe allocated memory using free

// int main(){
//     int *arr;
//     int size;

//     //asking the size:

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);


//     //allocating memory using malloc;

//     arr=(int*)malloc(size*sizeof(int));

//     //failed or not:
//     if(arr==NULL){
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     //taknig input for the array:
//     printf("Enter elements for the array: ");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);//scanf("%d", (arr+i));
//     }
//     //printing the array:
//     printf("The elements are: \n");
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     free(arr);
    
// }
// // //🔥PROB 8:Dynamic Memory Reallocation using realloc:
// // Write a program to demonstrate dynamic memory reallocation using realloc.
// // • Initially, allocate memory for an array of integers with a small size using malloc.
// // • Prompt the user to enter additional elements to be added to the array.
// // • Userealloc to resize the array dynamically to accommodate the new elements.
// // • Print the updated array elements after reallocation.
// // • Freethe allocated memory using free

// int main(){
//     int *arr, size,newSize;

//     //initial size:
//     size=5;

//     //allocating memory using malloc:

//     arr=(int*)malloc(size*sizeof(int));
//     if(arr==NULL){
//         printf("memory allocation failed\n");
//         return 1;
//     }

//     //taking additional input :

//     printf("Enter additional elements: ");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     //asking how many elements to be added:
//     printf("How many elements left to be added:");
//     scanf("%d", &newSize);
//     //resizing the array using realloc:

//     arr=realloc(arr,newSize*sizeof(int));

//     //printing the updated elements:

//     printf("Updated elements are: \n");
//     for(int i=0;i<newSize;i++){
//         printf("%d ",arr[i]);
//     }
// }


