#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para converter uma string hexadecimal em uma string ASCII
void hex_to_ascii(const char *hex_str, char *output) {
    unsigned int stringLength = strlen(hex_str);
    int outputIndex = 0;

    if (stringLength % 2 != 0) {
        printf("Erro: String hexadecimal inválida.\n1 Caractere ASCII precisa de dois Hexadecimais!\n");
        return;
    }

    // Faz um loop a cada 2 caracteres
    for (int i = 0; i < stringLength; i += 2) {
        char str[3] = {hex_str[i], hex_str[i + 1], '\0'}; // Cria uma string para armazenar 2 caracteres da string de input, considerando o index

        /*
        Referências:
        https://www.tutorialspoint.com/c_standard_library/c_function_strtol.htm
        https://www.geeksforgeeks.org/convert-hexadecimal-value-string-ascii-value-string/
        */
        char ch = strtol(str, NULL, 16); // Converte a string criada anteriormente para int e já o converte para char
        
        output[outputIndex++] = ch; // Adiciona o char ao index 0 do buffer e acrescenta +1 no index
    }

    output[outputIndex] = '\0'; // Adiciona o caractere nulo ao final da string
}

int main() {
    const char *hex_string = "566F6388732073C66F2076656E6365646F867265732C20766F63C3887320636FBE6E73656775656D2E002DC6C921B7B87FCF";
    char ascii_output[100]; // Buffer para armazenar a string convertida

    hex_to_ascii(hex_string, ascii_output);

    printf("%s", ascii_output);

    return 0;
}
