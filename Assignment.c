// Assignment Operator :- (=) The Assignment operator or (=) equal to sign is used to assign value of a variable.
// a = 10;
// Syntax :-  Variable = constant/expression
// 1. simple Assignment operator:- = 
// eg:- a = 10; a = 10*2;
// 2. Multiple Assignment Operator :- 
// eg:- a = b = c = 10;
// 3. Compound Assignment Operator :-
// Arthmetic operator + Assignment operator
// a = a + 10  a += 10   *=  %=
// a = a - 10  a -= 10   /=

#include<stdio.h>
int main()
{
    // Simple Assignment operator
    // int a = 10;
    // printf("a = %d",a);
    // Multiple Assignment operator
    // int a, b,c,d;
    // a = b =c = d =40;
    // printf("a = %d",a);
    // printf("\nb = %d",b);
    // printf("\nc = %d",c);
    // printf("\nd = %d",d);
    //Compound Assignment operator (Shortcut arithmetic operators)
    int a ;
    scanf("%d",&a);
    a += 10; // a = a + 10; // a = 14
    printf("\na = %d",a);
     a -= 10; // a = a - 10; // a = 4
    printf("\na = %d",a);
     a *= 10; // a = a * 10; // a = 40
    printf("\na = %d",a);
     a /= 10; // a = a / 10; // a = 4
    printf("\na = %d",a);
     a %= 10; // a = a % 10; // a = 4
    printf("\na = %d",a);

}


