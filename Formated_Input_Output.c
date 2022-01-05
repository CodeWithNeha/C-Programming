// Formatted Input/ Output Function
// 1. scanf()
// 2. printf()
//Scanf():-    scanf("Control string/Format Accessifier",&a); 
//printf():-   printf("Control string",a);
#include<stdio.h> // Standard Input/Output 
int main()
{
    int a ;
    scanf("%d",&a);
    printf("The value of a = %d",a);
    
   char b;
   scanf("%c",&b);
   printf("The value of b = %c",b);

      float f;
      scanf("%f",&f);
      printf("The value of f = %f",f);
    double d;
    scanf("%lf",&d);
    printf("The value of d = %lf",d);

    long double l;
    scanf("%Lf",&l);
    printf("The value of l = %Lf",l);

long int li;
scanf("%ld",&li);
printf("The value of %ld",li);

}