#include <stdio.h>

int main() {
   long  int i;
   long  int tmp[500];

    tmp[0] = 1;
    tmp[1] = 2;
    for(i = 2; i<91; i++){// i < (Fibonacci number - 1)
        tmp[i] = tmp[i-2] + tmp[i-1];
        printf("%ld\t\t%ld\n", tmp[i], i + 2);
    }
    return 0;
}

