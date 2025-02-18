#include<stdio.h>
int main(){
int a,b,result,choice;
printf("1 add ,2 sub");
printf("enter a&b value");
scanf("%d%d",&a,&b);
printf("enter the choice");
scanf("%d",&choice);
switch(choice){
case 1:
    result=a+b;
    printf("the value of a+b is%d",result);
    break;
case 2:
    result=a-b;
    printf("we have only 4 choice");
    };
    return 0;
}
