#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char input[10];
    int min, max;

    printf("Digite a faixa de valores (min-max): ");
    scanf("%s", input);

    // Usando a função strtok() para dividir a entrada em dois números
    char *token = strtok(input, "-");
    min = atoi(token);
    token = strtok(NULL, "-");
    max = atoi(token);

    // Configurando a semente do gerador de números aleatórios
    srand(time(NULL));

    // Gerando um número aleatório dentro do intervalo especificado
    int sorteio = rand() % (max - min + 1) + min;

    printf("O número sorteado é: %d\n", sorteio);

    return 0;
}
