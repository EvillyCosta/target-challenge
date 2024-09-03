#include <stdio.h>

int fibonacci (int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main () {
    int n=7;
    int ac=0;

    //sequencia limitada até a vigesima posição
    for (int i=1; i <= 20; i++) {
        printf("Fibonacci em %d = %d\n", i, fibonacci(i));
        if (n == fibonacci(i)) {
            ac = fibonacci(i);
        }
    }
    if (ac) {
        printf("%d pertence a sequencia", ac);
    } else {
        printf("nao pertence a sequencia");
    }

}