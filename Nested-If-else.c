#include<stdio.h>
int main(){
    int a = 100,b = 200, c= 150;
    if(a>b){
        if(a>c){
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }
    }
    else{
        if(b>c){
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
    }
}