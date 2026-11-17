#include<stdio.h>
int main(){
int gross,basic,HRA,DA;
printf("Enter your basic salary: ");
printf("Enter your HRA salary: ");
printf("Enter your DA salary: ");
scanf("%d %d %d",&basic,&HRA,&DA);

gross=basic+HRA+DA;
printf("Your gross salary is: %d\n",gross);
return 0;
}
