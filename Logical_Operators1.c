// Logical Operators:-Logical operators are used to form compound
// conditions by joining two or more simple conditions using relational
// operators

// ! :- Logical NOT   //unary 
// && :- Logical AND 
// || :- Logical OR

//    A      B        A&&B    A||B       !A      !B
//  False   False.   False    False      True.   True
//  False.  True     False    True       True.   False
//  True.   False    False    True       False   True
//  True    True     True     True       False.  False

// boolean :- true(1) false(0) 

#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool a = true;
    bool b = false;
    printf("A&&B = %d",(a&&b));  // 0
    printf("\nA||B = %d",(a||b));  // 1 
    printf("\n!A = %d",(!a));      // 0
    printf("\n!B = %d",(!b));      // 1
}