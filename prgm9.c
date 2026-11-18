#include<stdio.h>
int main(){
int op,a,b,add;
printf("enter the operation u want to perform from 1 to 5:");
scanf("%d",&op);
printf("enter the two numbers :");
scanf("%d %d",&a ,&b);
switch(op){
    case 1:
    printf("addition %d",a+b);
    break;
    case 2:
    printf("subtraction %d",a-b);
    break;
    case 3:
    printf("multiplication %d",a*b);
    break;
    case 4:
    printf("division %d",a/b);
    break;
    case 5:
    printf("reminder %d",a%b);
    break;
}
return 0;
}