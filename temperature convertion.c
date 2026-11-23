#include<stdio.h>
int main(){
float f,c;
printf("Enter temperature in celcius: ");
scanf("%f",&c);
f=(c*9/5)+32;
printf("Temperature in fahrenheit is: %.2f\n",f);
return 0;
}
