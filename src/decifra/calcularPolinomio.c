#include "utils.h"
#include <math.h>

int calcularPolinomio(int x, int b) {
    double resultado = 186.752 
             + (-148.235 + b) * x 
             + 34.5049 * pow(x, 2) 
             + (-3.5091) * pow(x, 3) 
             + 0.183166 * pow(x, 4) 
             + (-0.00513554) * pow(x, 5) 
             + 0.0000735464 * pow(x, 6) 
             + (-4.22038 * pow(10, -7)) * pow(x, 7);

    return roundl(resultado);
}
