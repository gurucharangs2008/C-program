#include<stdio.h>
int squarearea(int n);
int circlearea(int r);        //declaration
int rectanglearea(int b,int h);


int main(){
    int n,r,b,h;
    printf("enter side");
    scanf("%d",&n);

    printf("enter radius");
    scanf("%d",&r);

     printf("enter breath");
    scanf("%d",&b);

     printf("enter height");
    scanf("%d",&h);

    

    printf("area of square is %d\n",squarearea(n));
    printf("area of circle is %d\n",circlearea(r));
    printf("area of rectangle is %d\n",rectanglearea(b,h));

 return 0;

}
int squarearea(int n){
    return n*n;
}
int circlearea(int r){
    return 3.14*r*r;          //defination
}
int rectanglearea(int b, int h){
    return b*h;
}