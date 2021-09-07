#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : \n");
    scanf("%d",&number);

    if(number>=0){
        printf("This is a Positive number");
    }else {
        printf("This is a Negative number");
    }
return 0;
}