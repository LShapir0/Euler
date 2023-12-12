#include <stdio.h>

long sumFib(int i);

int main() {
    printf("Sum: %ld", sumFib(4000000));
    return 0;
}

long sumFib(int limit) {
    long sum = 0;
    int last = 1, cur = 1;
    while(cur < limit) {
        int tmp = cur;
        cur = last + cur;
        last = tmp;
        if (cur % 2 == 0) {
            sum = sum + cur;
        }
    }
    return sum;
}