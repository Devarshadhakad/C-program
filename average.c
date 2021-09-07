#include<stdio.h>
int main(){
    int a,b,c,d,e,n=5,avg;

    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
    printf("Enter the value of c \n");
    scanf("%d",&c);
    printf("Enter the value of d \n");
    scanf("%d",&d);
    printf("Enter the value of e \n");
    scanf("%d",&e);

    avg= (a+b+c+d+e)/n;

    printf("The avg of this numbres is %d \n",avg);
return 0;
}