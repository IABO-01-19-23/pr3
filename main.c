#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define N 50
int main() {
    srand(time(NULL));
    int mas[N], maxAbsNegative = 0, power = 0;

    for(int i = 0; i<N; i++){
        mas[i] = rand() % 100 * pow(-1,power);
        power++;
    }

    for(int i = 0; i<N; i++){
        if(mas[i] < maxAbsNegative) maxAbsNegative = mas[i];
    }


    for(int i = 0; i<N; i++){
        if(mas[i] > 0) mas[i] = abs(maxAbsNegative);
    }

    for(int i = 0; i<N; i++){
        printf("%d\t", mas[i]);
    }
    return 0;

}
