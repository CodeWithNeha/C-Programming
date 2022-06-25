#include<stdio.h>
// void First(){
//     printf("Hello World");
// }
// void add(int a,int b){
//     printf("%d",(a+b));
// }

int add(int a,int b){
    return a+b;
}
int main(){
    // First();
    int a,b;
    scanf("%d%d",&a,&b);
    // add(a,b);
    int c = add(a,b);
    printf("%d",c);
}
// 1. Addition
// 2. Multiplication
// 3. subtraction
// 4. Division
// 5. Void Hello Sachman
