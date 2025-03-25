#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado[20];
    char codigo[20], nomecidade[20];
    float area, pib;
    int pop, turismo;
    char estado[20];
    char codigo[20], nomecidade[20];
    float area, pib;
    int pop, turismo;

    char estado2[20];
    char codigo2[20], nomecidade2[20];
    float area2, pib2;
    int pop2, turismo2;
    char estado2[20];
    char codigo2[20], nomecidade2[20];
    float area2, pib2;
    int pop2, turismo2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Digite as informações da primeira carta:\n");
    printf("\n");
    printf("Digite o Estado: \n");
    scanf("%s", estado);
    
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade);
    
    printf("Digite a população: \n");
    scanf("%d", &pop);
    
    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo);
    printf("\n");

    float densidadepop = (float) pop / area;
    float pibPC = (pib * 1000000000) / pop;
    float superpoder = (float) pop + area + pib + (float) turismo + densidadepop;

    printf("Digite as informações da segunda carta\n");
    printf("\n");
    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade2);

    printf("Digite a população: \n");
    scanf("%d", &pop2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    float densidadepop2 = (float) pop2 / area2;
    float pibPC2 = (pib2 * 100000000) / pop2;
    float superpoder2 = (float) pop2 + area2 + pib2 + (float) turismo2 + densidadepop2;
    printf("Digite as informações da primeira carta:\n");
    printf("\n");
    printf("Digite o Estado: \n");
    scanf("%s", estado);
    
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade);
    
    printf("Digite a população: \n");
    scanf("%d", &pop);
    
    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo);
    printf("\n");

    float densidadepop = (float) pop / area;
    float pibPC = (pib * 1000000000) / pop;
    float superpoder = (float) pop + area + pib + (float) turismo + densidadepop;

    printf("Digite as informações da segunda carta\n");
    printf("\n");
    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade2);

    printf("Digite a população: \n");
    scanf("%d", &pop2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    float densidadepop2 = (float) pop2 / area2;
    float pibPC2 = (pib2 * 100000000) / pop2;
    float superpoder2 = (float) pop2 + area2 + pib2 + (float) turismo2 + densidadepop2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (pop > pop2) {
        printf("%s tem maior população\n", nomecidade);
        printf("%s venceu!\n", nomecidade);
    } else {
        printf("%s tem maior população\n", nomecidade2);
        printf("%s venceu!\n", nomecidade2);
    }


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
