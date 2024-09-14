#include "utils.h"
#include <stdio.h>

int main() {
    const char *hex_string = "566F6388732073C66F2076656E6365646F867265732C20766F63C3887320636FBE6E73656775656D2E002DC6C921B7B87FCF";
    char ascii_output[51]; // Buffer para armazenar a string convertida

    hex_to_ascii(hex_string, ascii_output);

    printf("%s\n", ascii_output);

    return 0;
}
