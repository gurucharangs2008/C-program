#include<stdio.h>
 void namaste();
 void bonjour();

 int main(){
    char na;
    printf("enter your nationality :");
    scanf("%c",&na);
    if(na == 'i'){
        namaste();
    }
    else{
        bonjour();

    }
   

    return 0;
 }
 void namaste(){
    printf("namaste\n");
 }
 void bonjour(){
    printf("Bonjour\n");
 }