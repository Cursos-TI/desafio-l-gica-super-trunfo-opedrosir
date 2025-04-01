#include <stdio.h>
#include <string.h> // Para manipulação de strings


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

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    int opcao;

    printf("\n");
    printf("Comparação de cartas\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Pontos Turísticos\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per Capita\n");
    printf("6. Super Poder\n");
    printf("Qual atributo deseja comparar? \n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
    printf("População:\n");
    printf("Carta 1: %s: %d\n", nomecidade, pop);
    printf("Carta 2: %s: %d\n", nomecidade2, pop2);
    if (pop > pop2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
    } else if (pop < pop2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;
    
    case 2:
    printf("PIB:\n"); // comparação de PIB, 
    printf("Carta 1: %s: %.2f bilhões de reais\n", nomecidade, pib); 
    printf("Carta 2: %s: %.2f bilhões de reais\n", nomecidade2, pib2);
    if (pib > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
    } else if (pib < pib2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;
    
    case 3:
    printf("Pontos Turísticos:\n");
    printf("Carta 1: %s: %d\n", nomecidade, turismo);
    printf("Carta 2: %s: %d\n", nomecidade2, turismo2);
    if (turismo > turismo2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
    } else if (turismo < turismo2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;
    
    case 4:
    printf("Densidade Populacional:\n");
    printf("Carta 1: %s: %.2f hab/km²\n", nomecidade, densidadepop);
    printf("Carta 2: %s: %.2f hab/km²\n", nomecidade2, densidadepop2);
    if (densidadepop < densidadepop2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
    } else if (densidadepop > densidadepop2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;
    
    case 5:
    printf("PIB per Capita:\n");
    printf("Carta 1: %s: %.2f reais\n", nomecidade, pibPC);
    printf("Carta 2: %s: %.2f reais\n", nomecidade2, pibPC2);
    if (pibPC > pibPC2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
    } else if (pibPC < pibPC2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;
    
    case 6:
    printf("Super Poder:\n");
    printf("Carta 1: %s: %f\n", nomecidade, superpoder);
    printf("Carta 2: %s: %f\n", nomecidade2, superpoder2);
    if (superpoder > superpoder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
    } else if (superpoder < superpoder2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;
    default:
    printf("Escolha inválida! Tente novamente.\n");
    break;
}
    /*Finalizado aqui as estruturas de decisoes
    para comparacao dos atributos*/

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}