#include<stdio.h>
void printHello(); //declaration
void printHi();

int main(){
printHello();
printHi();  //call
return 0;
}

void printHello(){
    printf("hello world\n");    //defination
}

void printHi(){
    printf("hi\n");
}
