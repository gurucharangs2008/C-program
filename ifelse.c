#include<stdio.h>
int main(){
int age;
char gender;
printf("Enter your age: ");
scanf("%d",&age);
printf("Enter your gender (M/F): ");
scanf(" %c",&gender);
if(age>=60  && (gender=='M' || gender=='m')){
    printf("You are a senior citizen and male.\n");
}
 else {
        printf("not a senior citizen");

    }

if (gender=='F' || gender=='f'){
    

  if (age>=58){
    printf("You are a senior citizen and female.\n");
  }
   else {
        printf("not a senior citizen");
   }
    }
else{
    printf("Invalid gender input.\n");
}
   

return 0;
}
