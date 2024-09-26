#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo = fopen("arquivo.txt", "r"); // Abrir o arquivo

    // Verificar a leitura do arquivo
    if (arquivo == NULL) {
        printf("ERRO: Nao foi possível abrir o arquivo. Arquivo inexistente!\n");
        fclose(arquivo);
        exit(1);
    }

    // Ler e salva o número de conversões. Caso não seja possível ler, o programa para
    int numMensagens;
    if (fscanf(arquivo, "%d", &numMensagens) != 1) {
        printf("ERRO: Nao foi possivel ler o numero de mensagens!\n");
        fclose(arquivo);
        exit(1);
    }

    // printf("Numero de mensagens: %d\n", numMensagens);

    // Limpar o buffer para ler a string
    int c;
    while ((c = fgetc(arquivo)) != '\n' && c != EOF)
        ;

    // Loop principal com base no número de mensagens
    for (int i = 0; i < numMensagens; i++) {

        // Ler a linha que contém a semente para ser usada na função matemática. Caso não seja possível ler, o programa para
        int semente;
        if (fscanf(arquivo, "%d", &semente) != 1) {
            printf("ERRO: Nao foi possível ler a semente!\n");
            fclose(arquivo);
            exit(1);
        }

        // printf("Semente %d: %d\n", i + 1, semente);

        // Limpar o buffer para ler a string
        while ((c = fgetc(arquivo)) != '\n' && c != EOF)
            ;

        // Criar um buffer e ler a string. Caso não seja possível ler, o programa para
        char stringHex[101];
        if (fgets(stringHex, sizeof(stringHex), arquivo) == NULL) {
            printf("ERRO: Nao foi possivel ler a string hexadecimal!\n");
            fclose(arquivo);
            exit(1);
        }

        // printf("String: %s\n", stringHex);

        // Remove o caractere de nova linha e o substitui pelo caractere nulo
        stringHex[strcspn(stringHex, "\n")] = 0;

        // Criar um buffer para a mensagem
        char saidaAscii[51];

        // Converte a string
        hexToAscii(stringHex, semente, saidaAscii);

        // Imprime a mensagem convertida
        printf("%s\n", saidaAscii);
        // printf("Mensagem %d: %s\n\n", i + 1, saidaAscii);
    }

    fclose(arquivo);
}