#include <stdio.h>

int main() {
   long  int i;
   long  int tmp[500];
   long int sum = 0;
    tmp[0] = 1;
    tmp[1] = 2;
    for(i = 2; i<91; i++) {// i < (Fibonacci number - 1)
        tmp[i] = tmp[i - 2] + tmp[i - 1];
            if(tmp[i] % 2 == 0 && tmp[i] < 4000000) {
                sum = sum + tmp[i];
        }
    }
    printf("Sum: %ld", sum + 2);
    return 0;
}