#include <stdio.h>

int main() {
    int i;
    int sum = 0;
    int tmp[10];

    tmp[0] = 1;
    tmp[1] = 2;
    for(i = 2; i<9; i++){
        tmp[i] = tmp[i-2] + tmp[i-1];
        printf("%d\t", tmp[i]);
        if(tmp[i] % 2 == 0){
            sum = sum + tmp[i];
        }
    }
    printf("\n%d",sum + 2);

    return 0;
}

