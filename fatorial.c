#include <stdio.h>

int main() {
    int contador, numero, fatorial = 1;
    char resposta;

    do {
        printf("Digite um número: ");
        scanf("%i", &numero);
        contador = numero;

        printf("O fatorial de %i é ", numero);

        while (contador > 1) {
            printf("%i X ", contador);
            fatorial *= contador;
            contador--;
        }

        printf("1 = %i\n", fatorial);

        printf("Deseja continuar? [S/N]: ");
        scanf(" %c", &resposta);
        printf("---------------------------------------------\n");

    } while (resposta == 'S' || resposta == 's');

    return 0;
}