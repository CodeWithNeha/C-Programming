// A
// A B
// A B C
// A B C D 
// A B C D E
#include<stdio.h>
int main(void){
    char a = 'A';
    for(int i = 1;i<=5;i++){
        char alp = a;
        for(int j = 1;j<=i;j++){
            printf("%c ",alp);
            alp++;
        }
        printf("\n");
    }
}