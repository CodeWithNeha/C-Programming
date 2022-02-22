#include <stdio.h>

int main(void) {
int i = 1;
while(i<=5){
    int j = 1;
    while(j<=i){
        printf("#");
        j++;
    }
    printf("\n");
    i++;
}
}