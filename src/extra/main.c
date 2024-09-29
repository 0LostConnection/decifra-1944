#include <stdio.h>

// Função para validar uma nota dentro de um intervalo específico
int validar_nota(float nota, float min, float max) {
    return (nota >= min && nota <= max);
}

int main() {
    float N1, N2, PPD, EU, N3 = 0, nota_final;
    int fez_eu, fez_n3;

    // Leitura das notas principais
    printf("Digite a nota N1 (0 a 4.5): ");
    scanf("%f", &N1);
    printf("Digite a nota N2 (0 a 4.5): ");
    scanf("%f", &N2);
    printf("Digite a nota do PPD (0 a 1): ");
    scanf("%f", &PPD);

    // Validação das notas N1, N2 e PPD
    if (!validar_nota(N1, 0, 4.5) || !validar_nota(N2, 0, 4.5) || !validar_nota(PPD, 0, 1)) {
        printf("Erro: Código de erro 3\n");
        return 3;
    }

    // Leitura da flag se o aluno fez o Exame Unificado
    printf("O aluno fez o Exame Unificado? (0 = nao, 1 = sim): ");
    scanf("%d", &fez_eu);

    // Se o aluno fez o Exame Unificado, validar e ler a nota
    if (fez_eu) {
        printf("Digite a nota do Exame Unificado (0 a 1): ");
        scanf("%f", &EU);
        if (!validar_nota(EU, 0, 1)) {
            printf("Erro: Código de erro 3\n");
            return 3;
        }
    } else {
        EU = 0; // Se não fez o exame, nota é 0
    }

    // Leitura da flag se o aluno fez a N3
    printf("O aluno fez a N3? (0 = nao, 1 = sim): ");
    scanf("%d", &fez_n3);

    // Se o aluno fez a N3, validar e ler a nota
    if (fez_n3) {
        printf("Digite a nota N3 (0 a 4.5): ");
        scanf("%f", &N3);
        if (!validar_nota(N3, 0, 4.5)) {
            printf("Erro: Código de erro 3\n");
            return 3;
        }

        // Substituir a menor nota entre N1, N2 e N3
        if (N3 > N1 && N1 <= N2) {
            N1 = N3;
        } else if (N3 > N2) {
            N2 = N3;
        }
    }

    // Cálculo da nota final
    nota_final = N1 + N2 + PPD + EU;

    // Garantir que a nota final esteja no intervalo 0 - 10
    if (nota_final > 10) {
        nota_final = 10;
    }

    // Exibir a nota final e se o aluno foi aprovado ou reprovado
    printf("Nota final: %.2f\n", nota_final);

    if (nota_final >= 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}
