#include <stdio.h>

int questao_um(int i) {
    int soma=0, k=0;
    while (k < i) {
       k = k+1;
       soma = soma+k;
    }
    return soma;
}

int main () {
    printf("o valor da variavel soma e: %d", questao_um(13));
}
