#include <stdio.h>
#include <string.h>

int main () {
    int tam = 0;
    char string[] = "challenge";
    char invertida[sizeof(string)];

    while (string[tam] != '\0') {
        tam++;
    }

    int inicio = 0;
    int fim = tam-1;

    while (fim >= 0) {
        invertida[inicio] = string[fim];
        inicio++;
        fim--;
    }
    invertida[inicio] = '\0';
    
    printf("sua string invertida: %s\n", invertida);

    return 0;

}