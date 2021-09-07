#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter the value of a : \n");
    scanf("%d",&a);
    printf("Enter the value of a : \n");
    scanf("%d",&b);
    printf("Enter the value of c : \n");
    scanf("%d",&c);

    if (a > b && a > c)
    {
        printf(" A is Greatest number ");
    }else if (b>a && b>c)
    {
        printf(" B is Greatest number ");
    }else if (c>a && c>b)
    {
        printf("C is Greatest number");
    }else {
        printf("A = B = C");
    }
return 0;
}