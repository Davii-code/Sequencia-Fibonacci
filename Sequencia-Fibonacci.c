#include <stdio.h>

int fibonacci(int N) {
    int X = 0;
    int Y = 1;
    for (int I = 0; I < N; I++) {
        int Temp = Y;
        Y = X + Y;
        X = Temp;
    }
    return X;
}

void verifica_pertinencia(int Num) {
 

    int I = 0;
    while (fibonacci(I) < Num) {
        I++;
    }
    if (Fibonacci(I) == Num) {
        printf("O número %d pertence à sequência de Fibonacci.\n", Num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", Num);
    }
}

int main() {
    int Num = 13; 
    verifica_pertinencia(Num);
    return 0;
}
