//BIBLIOTECAS
#include <stdio.h>
#include <string.h>

//ESTRUTURA
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} territorio;

int main() {
    territorio territorios[5];//Cria um vetor de 5 territórios
    int i;
//Pegar os dados de cada território
    printf("Cadastro de territórios\n\n");

    for (i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);

        printf("Digite o nome do território: ");
        scanf(" %[^\n]", territorios[i].nome);

        printf("Digite a cor do exército: ");
        scanf(" %s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }
//Imprime os dados de cada território
    printf("Dados dos territórios cadastrados\n\nwar");
    for (i = 0; i < 5; i++) {
        printf("Território %d: \n", i + 1);
        printf("Nome do território: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
