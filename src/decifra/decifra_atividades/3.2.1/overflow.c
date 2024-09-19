#include <stdio.h>
#include <limits.h>

int main() {
    // char
    signed char sc = SCHAR_MAX;
    printf("Valor Maximo de signed char: %d\n", sc);
    sc = sc + 1;
    printf("Valor de signed char apos overflow: %d\n\n", sc);

    // unsigned char
    unsigned char uc = UCHAR_MAX;
    printf("Valor Maximo de unsigned char: %u\n", uc);
    uc = uc + 1;
    printf("Valor de unsigned char apos overflow: %u\n\n", uc);

    // short
    short s = SHRT_MAX;
    printf("Valor Maximo de short: %d\n", s);
    s = s + 1;
    printf("Valor de short apos overflow: %d\n\n", s);

    // unsigned short
    unsigned short us = USHRT_MAX;
    printf("Valor Maximo de unsigned short: %u\n", us);
    us = us + 1;
    printf("Valor de unsigned short apos overflow: %u\n\n", us);

    // int
    int i = INT_MAX;
    printf("Valor Maximo de int: %d\n", i);
    i = i + 1;
    printf("Valor de int apos overflow: %d\n\n", i);

    // unsigned int
    unsigned int ui = UINT_MAX;
    printf("Valor Maximo de unsigned int: %u\n", ui);
    ui = ui + 1;
    printf("Valor de unsigned int apos overflow: %u\n\n", ui);

    // long
    long l = LONG_MAX;
    printf("Valor Maximo de long: %ld\n", l);
    l = l + 1;
    printf("Valor de long apos overflow: %ld\n\n", l);

    // unsigned long
    unsigned long ul = ULONG_MAX;
    printf("Valor Maximo de unsigned long: %lu\n", ul);
    ul = ul + 1;
    printf("Valor de unsigned long apos overflow: %lu\n\n", ul);

    // long long
    long long ll = LLONG_MAX;
    printf("Valor Maximo de long long: %lld\n", ll);
    ll = ll + 1;
    printf("Valor de long long apos overflow: %lld\n\n", ll);

    // unsigned long long
    unsigned long long ull = ULLONG_MAX;
    printf("Valor Maximo de unsigned long long: %llu\n", ull);
    ull = ull + 1;
    printf("Valor de unsigned long long apos overflow: %llu\n\n", ull);

    return 0;
}
