#include <stdio.h>
#include <stdlib.h>
#define SAL 1412
int main() {
    char sexo, fsexo;
    int pecas, i, n, pront, M = 0, F = 0, tpm = 0, tpf = 0, fpront;
    float sal = SAL, salario, total_folha = 0, total_pecas = 0, maior = 0, media_pecas_homens, media_pecas_mulheres;
    printf("Informe a quantidade de funcionarios\n");
    scanf("%i", &n);
    for (i = 0; i < n; i++) {
        printf("Informe a quantidade de pecas\n");
        scanf("%i", &pecas);
        printf("Informe o prontuario\n");
        scanf("%i", &pront);
        printf("Informe o sexo (M/F)\n");
        scanf(" %c", &sexo);
        if (pecas < 30) {
            salario = SAL;
        } else if (pecas >= 30 && pecas < 35) {
            salario = sal + (sal * 0.03) * (pecas - 30);
        } else {
            salario = sal + (sal * 0.05) * (pecas - 35);
        }
        printf("\n Prontuario: %i Salario %.2f", pront, salario);
        system("pause");
        total_folha += salario;
        total_pecas += pecas;
        if (sexo == 'M') {
            tpm += pecas;
            M++;
        } else {
            tpf += pecas;
            F++;
        }
        if (salario > maior) {
            maior = salario;
            fpront = pront;
            fsexo = sexo;
        }
    }
    media_pecas_homens = (float)tpm / M;
    media_pecas_mulheres = (float)tpf / F;
    printf("\n Total de folha de pagamento %.2f", total_folha);
    printf("\n Total de pecas produzidas %.2f", total_pecas);
    printf("\n Media de pecas pelos homens %.2f", media_pecas_homens);
    printf("\n Media de pecas pelas mulheres %.2f", media_pecas_mulheres);
    printf("\n O maior salario %.2f, prontuario %i, sexo %c", maior, fpront, fsexo);
    return 0;
}
