#include<stdio.h>
int main(){

    int a;
    scanf("%d",&a);
    if(0>a){
        printf("This Number is Negative = %d",a);
    }
    else if(0<a){
        printf("This Number is Positive = %d",a);
    }
    else{
        printf("This Number is Zero");
    }
}