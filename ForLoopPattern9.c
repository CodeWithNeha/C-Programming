// *****    *****   i == 1, i==n , j==1, j==n
// *   *    *****
// *   *    *****
// *   *    *****
// *****    *****

#include<stdio.h>
int main(void){
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5;j++){
            if(i==1||i==5||j==1||j==5){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


