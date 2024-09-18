#include <stdio.h>
#include <limits.h>


int main() {
    

    printf("Valor Minimo de signed char: %d\n", SCHAR_MIN);  
    printf("Valor Maximo de signed char: %d\n", SCHAR_MAX);

    printf("Valor Minimo de short int: %d\n", SHRT_MIN);  
    printf("Valor Maximo de short int: %d\n", SHRT_MAX);

    printf("Valor Minimo de int: %d\n", INT_MIN);  
    printf("Valor Maximo de int: %d\n", INT_MAX);

    printf("Valor Minimo de unsigned int: %u\n", 0);  
    printf("Valor Maximo de unsigned int: %u\n", UINT_MAX);

    printf("Valor Minimo de long int: %ld\n", LONG_MIN);  
    printf("Valor Maximo de long int: %ld\n", LONG_MAX);

    printf("Valor Minimo de unsigned long int: %lu\n", 0UL);  
    printf("Valor Maximo de unsigned long int: %lu\n", ULONG_MAX);

    printf("Valor Minimo de long long int: %lld\n", LLONG_MIN);  
    printf("Valor Maximo de long long int: %lld\n", LLONG_MAX);

    printf("Valor Minimo de unsigned long long int: %llu\n", 0ULL);  
    printf("Valor Maximo de unsigned long long int: %llu\n", ULLONG_MAX);

    return 0;
}
