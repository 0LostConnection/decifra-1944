#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo = fopen("arquivo.txt", "r"); // Abrir o arquivo

    // Verificar a leitura do arquivo
    if (arquivo == NULL) {
        printf("ERRO: Não foi possível abrir o arquivo. Arquivo inexistente!\n");
        fclose(arquivo);
        exit(1);
    }

    // Ler e salva o número de conversões. Caso não seja possível ler, o programa para
    int numMensagens;
    if (fscanf(arquivo, "%d", &numMensagens) != 1) {
        printf("ERRO: Não foi possível ler o número de mensagens!\n");
        fclose(arquivo);
        exit(1);
    }

    // printf("Número de mensagens: %d\n", numMensagens);

    // Limpar o buffer para ler a string
    int c;
    while ((c = fgetc(arquivo)) != '\n' && c != EOF)
        ;

    // Loop principal com base no número de mensagens
    for (int i = 0; i < numMensagens; i++) {

        // Ler a linha que contém a semente para ser usada na função matemática. Caso não seja possível ler, o programa para
        int semente;
        if (fscanf(arquivo, "%d", &semente) != 1) {
            printf("ERRO: Não foi possível ler a seed!\n");
            fclose(arquivo);
            exit(1);
        }

        // printf("Seed %d: %d\n", i + 1, semente);

        // Limpar o buffer para ler a string
        while ((c = fgetc(arquivo)) != '\n' && c != EOF)
            ;

        // Criar um buffer e ler a string. Caso não seja possível ler, o programa para
        char hex_string[101];
        if (fgets(hex_string, sizeof(hex_string), arquivo) == NULL) {
            printf("Erro: Não foi possível ler a string hexadecimal.\n");
            fclose(arquivo);
            exit(1);
        }

        // printf("String: %s\n", hex_string);

        // Remove o caractere de nova linha e o substitui pelo caractere nulo
        hex_string[strcspn(hex_string, "\n")] = 0;

        // Criar um buffer para a mensagem
        char ascii_output[51];

        // Converte a string
        hex_to_ascii(hex_string, semente, ascii_output);

        // Imprime a mensagem convertida
        printf("%s\n", ascii_output);
        // printf("Mensagem %d: %s\n\n", i + 1, ascii_output);
    }

    fclose(arquivo);
}