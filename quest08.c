#include <stdio.h>
#include <math.h>

int main() {
    int N = 51;
    float S = 0;
    float a;

    for (int i = 1; i <= N; i++) {
        S += i + i;
    }
    
    a = sqrt(32 / S);

    printf("O valor aproximado de a é: %f\n", a);

    return 0;
}
