// Unary Operator :- The Operator that act upon a single operand to produce a new value are known as unary oparators. The unary operators
// have higher precedence than the other opoerators

// 1. unary minus (-) :- a = -10; b = -(-10);     
// 2. Increment :-  (++)
//      2(a). Prefix Increment :-   ++a  
//      2(b). Postfix Increment :-  a++
// 3. Decrement :- (--)
//      3(a). Prefix Decrement :-   --a
//      3(b). Postfix Decrement :-  a--
// 4. sizeof(a)

#include<stdio.h>
int main(){
    //unary Operator
    // int a = -10;
    // int b = -(-10);
    // printf("a = %d",a);
    // printf("\nb = %d",b);

    //Increment (++)
    // Prefix 
    // int a = 10;
    // int b = ++a;
    // printf("a = %d",a);
    // printf("\nb = %d",b);

    //Postfix
    // int a = 10;
    // int b = a++;  
    // printf("a = %d",a);
    // printf("\nb = %d",b);

    //Decrement
    // PreFix
    //  int a = 10;
    // int b = --a;
    // printf("a = %d",a);  // 9
    // printf("\nb = %d",b);  //9

    //PostFix
    // int a = 10;
    // int b = a--;
    // printf("a = %d",a);  //9
    // printf("\nb = %d",b);  //10

    //Sizeof operator
    int a;
    double b;
    unsigned int c;
    char d;
    float e;
    printf("size of a = %lu",sizeof(a));
    printf("\nsize of b = %lu",sizeof(b));
    printf("\nsize of c = %lu",sizeof(c));
    printf("\nsize of d = %lu",sizeof(d));
    printf("\nsize of e = %lu",sizeof(e));


}