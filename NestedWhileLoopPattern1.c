#include<stdio.h>
int main(void){
    // Nested While Loop
    int i =1;
    while(i<=5){
        int j = 1;
        while(j<=5){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}