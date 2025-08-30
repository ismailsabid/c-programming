#include <stdio.h>
#include <string.h>

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
//✌️//PROB  4:Create a  structure 'person' having attributes as age and weight. Access its structure variables using pointers.

typedef struct person{
    int age;
    int weight;
}person;
int main(){
    person tawsif;
    person *x=&tawsif;

    (*x).age=15;
    (*x).weight=30;

    printf("The age of tawsif is : %d\n", (*x).age);
    printf("Tawsif is %d kg.", (*x).weight);
}



