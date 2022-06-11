#include<stdio.h>
int main(){
    // input:- 12345            12345 % 10 ->  
    // output:- 54321           12345 / 10 -> 
    int num;
    printf("Enter Number:- ");
    scanf("%d",&num);   // 1
    while(num!=0){
        int rem = num%10;    // 1%10 -> 1
        printf("%d",rem);        // 54321
        num = num/10;       // 1/10 -> 0
    }
}

