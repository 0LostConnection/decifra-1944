#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para converter uma string hexadecimal em uma string ASCII
void hexToAscii(const char *stringHex, const int semente, char *bufferSaida) {
    unsigned int tamanhoString = strlen(stringHex); // comentar no artigo, por que essa função descarta tudo depois do \0 (00)
    int bufferSaidaIndex = 0;

    if (tamanhoString % 2 != 0) {
        printf("ERRO: String hexadecimal invalida.\n1 Caractere ASCII precisa de dois Hexadecimais!\n");
        return;
    }

    // Faz um loop a cada 2 caracteres
    for (int i = 0; i < tamanhoString; i += 2) {

        char str[3] = {stringHex[i], stringHex[i + 1], '\0'}; // Cria uma string para armazenar 2 caracteres da string de input, considerando o index

        if (strcmp(str, "00") == 0)
            break;

        if (calcularPolinomio(i / 2 + 1, semente) == 0)
            continue;

        /*
        Referências:
        https://www.tutorialspoint.com/c_standard_library/c_function_strtol.htm
        https://www.geeksforgeeks.org/convert-hexadecimal-value-string-ascii-value-string/
        */
        char ch = strtol(str, NULL, 16); // Converte a string criada anteriormente para int e já o converte para char

        bufferSaida[bufferSaidaIndex++] = ch; // Adiciona o char ao index 0 do buffer e acrescenta +1 no index
    }

    bufferSaida[bufferSaidaIndex] = '\0'; // Adiciona o caractere nulo ao final da string
}
