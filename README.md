# Decifra 1944

Este repositório contém o trabalho em grupo N1 da disciplina de Algoritmos e Programação Estruturada. O objetivo do trabalho é desenvolver um artigo acadêmico e um algoritmo para decodificar mensagens interceptadas durante a Segunda Guerra Mundial, utilizando a tabela ASCII e uma função matemática específica.

## 3. Desafio

O ano é 1944 e o Brasil está na Segunda Guerra Mundial. Você está em uma equipe dos Aliados encarregada de decodificar mensagens do inimigo. O único dispositivo que sua equipe possui é uma antena que consegue captar ondas de rádio. Sua equipe recebe vários sinais na antena mas não consegue entender nada do que se passa.

Para sua sorte, a equipe de inteligência conseguiu relacionar o código recebido conforme tabela *ASCII*. Contudo, percebeu-se que, além da cifra, alguns caracteres não eram válidos e precisavam ser ignorados. Uma pessoa da equipe de inteligência conseguiu relacionar a posição desses valores com a seguinte função:

$$f(x,b)=a_{0}+(a_{1}+b)x+a_{2}x^{2}+a_{3}x^{3}+a_{4}x^{4}+a_{5}x^{5}+a_{6}x^{6}+a_{7}x^{7}$$

<details>
<summary>Em que:</summary>

- $a_{0}=186,752$
- $a_{1}=-148,235$
- $a_{2}=34,5049$
- $a_{3}=-3,5091$
- $a_{4}=0,183166$
- $a_{5}=-0,00513554$
- $a_{6}=0,0000735464$
- $a_{7}=-4,22038*10^{-7}$
- $b$ é uma variável que será dada pelo agente da inteligência a cada interceptação.
- $x$ é a posição atual do caractere, começando por 1.

</details>

## [Descrição Completa da Atividade](/DESCRIÇÃO.md)

## Integrantes do Grupo

- Gabriel Kauê Rodrigues Tavares - <gabriel.kaue@a.ucb.br>
- Geovane Saraiva Da Silva - <geovane.saraiva@a.ucb.br>
- Hugo Ferreira Vasconcelos - <hugo.ferreira@a.ucb.br>
