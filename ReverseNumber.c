#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    // 1234 -> 4321
    while(a!=0){
        int num = a%10;
        a = a/10;    // 1234
        printf("%d",num);
    }

}