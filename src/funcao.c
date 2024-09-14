#include <stdio.h>
#include <math.h>

int main() {
    double result;

    result = 186.752 
             + (-148.235 + 0) * 18 
             + 34.5049 * pow(18, 2) 
             + (-3.5091) * pow(18, 3) 
             + 0.183166 * pow(18, 4) 
             + (-0.00513554) * pow(18, 5) 
             + 0.0000735464 * pow(18, 6) 
             + (-4.22038 * pow(10, -7)) * pow(18, 7);

    result = roundl(result);
    
    printf("O resultado da fórmula é: %.34f\n", result);

    return 0;
}
