// Relational Operators :- >, <, >=, <=, ==, !=
// a = 10 , b = 20

//  A(a>b)  B(a==b)  A&&B     A||B        !A      !B
//  False   False.   False    False      True.   True
//  False.  True     False    True       True.   False
//  True.   False    False    True       False   True
//  True    True     True     True       False.  False

#include<stdio.h>
int main()
{     
    int a = 30, b = 20;
    printf("(a>b)&&(a!=b) = %d",(a>b)&&(a!=b));  // 1
    printf("\n(a>b)||(a!=b) = %d",(a>b)||(a!=b));  // 1
    printf("\n!(a!=b) = %d",!(a!=b));   // 0
    printf("\n!(a>b) = %d",!(a>b));     // 0
}

//Extra Exercise
// 1.     2         3
// (a>b)&&(b!=a)&&((a<=b)||(a==b))
// a = 40 b = 40
// 1. (a>b) = 0
// 2. (b!=a) = 0
// 3. ((a<=b)||(a==b)). =. 1 || 1 = 1

// 0&&0&&1. = 1