#include<stdio.h>
int main(){
    int a = 20,b=25,c=19;
    if(a>b){
        if(a>c){
            printf(" greatest = %d",a);
        }
        else {
            printf("greatest = %d",c);
        }
    }
    else{
        if(b>c){
            printf("greatest = %d",b);
        }
        else{
            printf("greatest = %d",c);
        }
    }
}