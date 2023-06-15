#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printTitle() {
    printf("-------------------------------------------------\n");
    printf("|        Sistema de Sorteio (Simples)           |\n");
    printf("-------------------------------------------------\n\n");
}

int main() {
    char input[10]; // Suporta uma string de 10 caracteres (consegue ir de 1 até 99999999)
    int min, max;
    char resposta;

    printTitle();

    do {
        printf("Digite a faixa de números (menor-maior): ");
        scanf("%s", input);

        // Usando a função strtok() para dividir a entrada em dois valores numéricos
        char *token = strtok(input, "-");
        min = atoi(token);
        token = strtok(NULL, "-");
        max = atoi(token);

        // Configurando o "seeder" do gerador de números aleatórios
        srand(time(NULL));

        // Gerando um número aleatório dentro do intervalo especificado
        int sorteio = rand() % (max - min + 1) + min;

        printf("O número sorteado é: %d\n", sorteio);

        printf("Deseja sortear outro número? (S/N): ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    return 0;
}
