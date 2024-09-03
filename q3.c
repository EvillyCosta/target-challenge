#include <stdio.h>

int main() {
    
    //faturamentos de distribuidora 
    float faturamento[30] = {
        3175.53, 3635.90, 2501.25, 1722.65, 196.38, 0.0, 0.0, 3661.06, 4890.37, 4278.75,
        2251.84, 1738.65, 0.0, 0.0, 3619.59, 652.73, 2151.07, 4240.93, 2534.46, 412.49,
        0.0, 0.0, 3200.69, 4290.21, 4296.18, 4641.35, 0.0, 0.0, 3363.59, 3896.63
    };
    int dias_com_faturamento = 0;
    float soma_faturamento = 0.0;
    float menor_faturamento = 5000;
    float maior_faturamento = 0;

    for (int i = 0; i < 30; i++) {
        if (faturamento[i] > 0) {
            if (faturamento[i] < menor_faturamento) {
                menor_faturamento = faturamento[i];
            }
            if (faturamento[i] > maior_faturamento) {
                maior_faturamento = faturamento[i];
            }
            soma_faturamento += faturamento[i];
            dias_com_faturamento++;
        }
    }

    float media_mensal = soma_faturamento / dias_com_faturamento;

    int dias_acima_da_media = 0;
    for (int i = 0; i < 30; i++) {
        if (faturamento[i] > media_mensal) {
            dias_acima_da_media++;
        }
    }

    printf("menor faturamento: %.2f\n", menor_faturamento);
    printf("maior faturamento: %.2f\n", maior_faturamento);
    printf("dias com faturamento acima da media: %d\n", dias_acima_da_media);

    return 0;
}
