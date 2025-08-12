#include<stdio.h>
int main(){
    int mark;
    scanf("%d", &mark);
    if (mark>33)
    {
       printf("pass\n");
       if (33<mark && mark<50)
       {
        printf("u are in 3rd division\n");
        if (33<mark && mark<40)
        {
           printf("grade c\n");
        }
        else if (40<mark && mark<50)
        {
            printf("grade b\n");
        }
       }
       
    }
    /*switch statement*/
    int a=0, b=3, c=0;
    switch (a+b*c)
    {
        case 0:printf("choice is 0\n");break;
        case 1:printf("choice is 1\n");break;
        default:printf("choice is default\n");break;
    }
    /*loop*/
        /*while loop*/
        int i;
        i=6;
        while (i>0)
        {
            printf("%d\n", i);
            i--;
        }
       for (float num=2.3; num<20; num+=2.3)
       {
        printf("%f\n",num);
       }
    return 0;
}
