#include<stdio.h>
int main(void){
    for(int i = 1;i<=5;i++){             // 1. *
        for(int j = 1;j<=i;j++){         // 2. **
            printf("*");                 // 3. ***
        }                                // 4. ****
        printf("\n");                    // 5. *****
    }
}