# Função que Invalida Alguns Caracteres

Este documento descreve a implementação da função `func_val`, que realiza o cálculo de uma equação matemática proposta para invalidar caracteres com base em um valor de entrada. A função é parte de um trabalho acadêmico que envolve a criação de uma biblioteca em C.

## Objetivo

O objetivo principal da função é avaliar uma equação de polinômio para determinados valores de `x` e `b`, e com base no resultado, determinar se um caractere deve ser invalidado (ignorá-lo na mensagem decodificada) ou não.

### Arquivo de Cabeçalho (`remove.h`)

O arquivo de cabeçalho define a assinatura da função que deve ser implementada. Ele segue as práticas de programação de evitar a inclusão duplicada com as diretrizes `#ifndef` e `#define`.

#### Conteúdo do `remove.h`:

```c
#ifndef REMOVE_H
#define REMOVE_H

int func_val(int x, int b);

#endif /* REMOVE_H */
  
