#include <stdio.h>

int main() {
long int sum;
long int current = 1;
long int last = 1;
long int tmp;
// 1 2 3 5 8 13 21 34 55 89
    for(int i = 2; i < 100; i++) {// i < (Fibonacci number - 1)
        printf("\n%ld+%ld=%ld", last, current, last + current);
        tmp = current;
        current = current + last;
        last = tmp;
            if(current % 2 == 0 &&current < 4000000){
                sum = sum + current;
        }
    }
    printf("Sum: %ld", sum + 2);
    return 0;
}