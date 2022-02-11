#include<stdio.h>
int main(){
    int a = 12;
    if(a%2==0){
        for(int i = 1;i<=a;i++){
            printf("\n%d",i);
        }
    }
    else{
        printf("Please enter even number");
    }
}