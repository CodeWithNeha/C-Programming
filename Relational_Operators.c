// Relational Operators:- (comparison operators).  true(1) or false(0)
// > -: greater than         a > b
// < -: less than.           a < b 
// >= :- greater than and equal to.  a >= b
// <= :- less than and equal to.     a <= b
// == :- double equal to             a == b 
// != :- not equal to.               a != b

#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    printf("a > b = %d",(a>b)); // 17 > 18 = 0
    printf("\na < b = %d",(a<b)); // 45 < 89 = 1
    printf("\na >= b = %d",(a>=b));  //45 >= 34 = 1  45 >= 45 = 1
    printf("\na <= b = %d",(a<=b));  // 45 <= 56 = 1  34 <= 12 = 0
    printf("\na == b = %d",(a==b));  // 45 == 78 = 0 78 == 78 = 1
    printf("\na != b = %d",(a!=b));  // 45 != 45 = 0 56 != 90 = 1

}