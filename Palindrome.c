#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rev = 0;
    int copy = a;
    // 1234 -> 4321   4 * 1000 +   3 * 100  +   2 * 10  +     1
    while(a!=0){
        int num = a%10;  // 3
        rev = rev*10 + num;  // 1. rev =4  => 40+3 = 43 =>  430 + 2 = 432 => 4320 + 1 = 4321
        a = a/10;    // 1234
       
    }
    if(copy==rev){
        printf("Number is Palindrome");
    }
    else{
        printf("Number is not Palindrome");
    }

}