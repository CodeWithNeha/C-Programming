// 0 1 1 2 3 5 8 13 21 34 55
#include<stdio.h>
int main(void){

    int a = 0, b = 1;
    for(int i = 1;i<=10;i++){
        printf("%d   ",a);
        int c = a+b;
        a = b;
        b = c;
    }
}
// 0 1 1