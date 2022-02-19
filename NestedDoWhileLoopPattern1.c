#include<stdio.h>
int main(void){
    // Nested Do While
    int i = 1;
    do{
        int j = 1;
        do{
            printf("*");
            j++;
        }while(j<=5);
        printf("\n");
        i++;
    }while(i<=5);
}