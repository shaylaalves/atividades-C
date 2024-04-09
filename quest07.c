#include <stdio.h>

int main() {
    int N, i;
    float S;

    printf("Digite o valor de N: ");
    scanf("%d", &N);
    printf("Digite o valor de S: ");
    scanf("%f", &S);

    for (i = 1; i <= N; i++) {
        switch (i) {
            case 3:
                S += 5;
                break;
            case 4:
                S += 3;
                break;
            case 5:
                S += 50;
                break;
            default:
                S += i;
                break;
        }
    }

    printf("O valor de S: %.2f\n", S);

    return 0;
}
