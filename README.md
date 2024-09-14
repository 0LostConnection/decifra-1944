# Decifra 1944

Este repositório contém o trabalho em grupo N1 da disciplina de Algoritmos e Programação Estruturada. O objetivo do trabalho é desenvolver um artigo acadêmico e um algoritmo para decodificar mensagens interceptadas durante a Segunda Guerra Mundial, utilizando a tabela ASCII e uma função matemática específica.

## Desafio

O ano é 1944 e o Brasil está na Segunda Guerra Mundial. Você está em uma equipe dos Aliados encarregada de decodificar mensagens do inimigo. O único dispositivo que sua equipe possui é uma antena que consegue captar ondas de rádio. Sua equipe recebe vários sinais na antena mas não consegue entender nada do que se passa.

Para sua sorte, a equipe de inteligência conseguiu relacionar o código recebido conforme tabela *ASCII*. Contudo, percebeu-se que, além da cifra, alguns caracteres não eram válidos e precisavam ser ignorados. Uma pessoa da equipe de inteligência conseguiu relacionar a posição desses valores com a seguinte função:

$$f(x,b)=a_{0}+(a_{1}+b)x+a_{2}x^{2}+a_{3}x^{3}+a_{4}x^{4}+a_{5}x^{5}+a_{6}x^{6}+a_{7}x^{7}$$

#### [Descrição Completa da Atividade](/DESCRIÇÃO.md)

## Rodando o Projeto

### Windows

#### Requisitos

* **GCC** instalado e configurado no `PATH`
* **GIT**

#### Executando

1. Clone o repositório:

    ```bash
    git clone https://github.com/0LostConnection/decifra-1944.git
    ```

2. Execute a Ferramenta de Automatização de Build

    ```bash
    cd decifra-1944

    # Compila o programa
    decifra.bat -b

    # Executa o programa
    decifra.bat -r

    # Limpa os arquivos de build
    decifra.bat -c
    ```

### Linux

#### Requisitos

* **GCC**
* [**Cpconv**](https://github.com/michael105/codepage_converter) - Ferramenta para converter a codificação **UTF-8** do terminal para a **CP850**
* **Make**
* **GIT**

#### Executando

1. Clone o repositório:

    ```bash
    git clone https://github.com/0LostConnection/decifra-1944.git
    ```

2. Compile o projeto

    ```bash
    cd decifra-1944

    # Compila o programa
    make

    # Executa o programa - Não recomendável
    make run

    # Limpa os arquivos de build
    make clean
    ```

3. Execute o programa e converta a saída para **CP850**:

    ```bash
    ./decifra | cpconv utf8 cp850
    ```

## Integrantes do Grupo

* Gabriel Kauê Rodrigues Tavares - <gabriel.kaue@a.ucb.br>
* Geovane Saraiva Da Silva - <geovane.saraiva@a.ucb.br>
* Hugo Ferreira Vasconcelos - <hugo.ferreira@a.ucb.br>
