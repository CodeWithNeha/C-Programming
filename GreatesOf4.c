#include<stdio.h>
int main(void){
    int a = 10, b = 20, c = 5, d = 15;
    if(a>b){
        if(a>c){
            if(a>d){
                printf("%d",a);
            }
            else{
                printf("%d",d);
            }
        }
        else{
            if(c>d){
                printf("%d",c);
            }
            else{
                printf("%d",d);
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                printf("%d",b);
            }
            else{
                printf("%d",d);
            }
        }
        else{
            if(c>d){
                printf("%d",c);
            }
            else{
                printf("%d",d);
            }
        }
    }
}