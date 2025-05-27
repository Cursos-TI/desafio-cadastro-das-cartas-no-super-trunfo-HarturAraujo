#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de valores carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Declaração de valores carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada de dados para a carta 1
    printf("Preencha os dados da Carta 1:\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código: ");
    scanf(" %3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    getchar(); // limpar o buffer
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // remove '\n'

    printf("Digite a população: ");
    scanf(" %d", &populacao1);

    printf("Digite a área: ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite Número de pontos turísticos: ");
    scanf(" %d", &pontos1);

    printf("\n-----------------------------\n");

    // Entrada de dados para a carta 2
    printf("Preencha os dados da Carta 2:\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código: ");
    scanf(" %3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    getchar(); // limpar o buffer
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; // remove '\n'

    printf("Digite a população: ");
    scanf(" %d", &populacao2);

    printf("Digite a área: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite Número de pontos turísticos: ");
    scanf(" %d", &pontos2);

    // Apresentação dos dados Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Apresentação dos dados Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
