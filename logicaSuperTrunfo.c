#include <stdio.h>
#include <string.h> // Para manipulação de strings


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado[20];
    char codigo[20], nomecidade[20];
    float area, pib;
    int pop, turismo;
    
    char estado2[20];
    char codigo2[20], nomecidade2[20];
    float area2, pib2;
    int pop2, turismo2;
    
    // Saudacao ao jogador
    int menu;
    do {
    printf(">>Bem-vindo ao jogo Super Trunfo 2.0!<<\n\n");
    printf("1. Iniciar um novo jogo!\n");
    printf("2. Ler as regras.\n");
    printf("3. Sair do jogo.\n\n");
    scanf("%d", &menu);
    printf("\n");
    
    // switch do menu, com loop para retorno caso opcao seja invalida
    
    switch (menu) {
        case 1:
        printf("Iniciando o jogo...\n\n");
        break;
        case 2:
        printf("Regras do Super Trunfo 2.0:\n");
        printf("- Cadastre 2 cartas de cidades diferentes\n");
        printf("- A densidade populacional será calculado automáticamente\n");
        printf("- O PIB per Capita também será calculado automáticamente\n");
        printf("- O super poder será a soma de todos os atributos de cada carta\n");
        printf("- O jogador deverá escolher 2 atributos para comparar as cartas\n");
        printf("- Na comparação dos atributos, a carta com o maior valor vence.\n");
        printf("- Somente ao comparar densidade populacional, o menor valor vencerá!\n");
        printf(">ATENÇÃO!< Não é possível comparar o mesmo atributo 2 vezes!\n\n");

        printf("Boa sorte!\n\n"); // poderia aqui ter uma opcao de retorno ao menu antes de iniciar diretamente

        break;
        case 3:
        printf("Saindo do jogo...\n");
        return (1);
        break;
        default:
        printf("Opção inválida! Tente novamente.\n\n");
        break;
    }
} while (menu > 3); // apesar do professor evitar explicar o loop, ele serve bem ao código

    // Cadastro das Cartas:
    printf("===Cadastro das cartas!===\n\n");

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

    // calculando a densidade, o pib per capita e o superpoder
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

    // calculando a densidade, o pib per capita e o superpoder
    float densidadepop2 = (float) pop2 / area2;
    float pibPC2 = (pib2 * 100000000) / pop2;
    float superpoder2 = (float) pop2 + area2 + pib2 + (float) turismo2 + densidadepop2;

    /* comparacao de cartas
     apos discutir com meus colegas tambem da estacio sobre esta materia,
     pela dificuldade de construcao logica para opcao invalida entre 2 switches, decidi usar o do-while */

    
    printf("\n");
    int exibir; // um menu extra para exibir os atributos cadastrados
    do {
    printf("Deseja exibir as cartas cadastradas?\n");
    printf("'1' para Sim, ou '2' para Não\n");
    scanf("%d", &exibir);
    printf("\n");

    switch (exibir) {
        case 1:
        printf("Carta 1:\n");
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", nomecidade);
        printf("População: %d de habitantes\n", pop);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de pontos turísticos: %d\n", turismo);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepop);
        printf("PIB per Capita: %.2f reais\n", pibPC);
        printf("Super Poder: %f\n", superpoder);
        printf("\n");
    
        printf("Carta 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nomecidade2);
        printf("População: %d de habitantes\n", pop2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", turismo2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
        printf("PIB per Capita: %.2f reais\n", pibPC2);
        printf("Super Poder: %f\n\n", superpoder2);
        printf("Próxima fase!\n\n");

        break;
        case 2:
        printf("Próxima fase!\n\n");
        break;
        default:
        printf("Opção inválida! Tente novamente!\n\n");
        break;
    }
} while ((exibir != 1) && (exibir != 2));

    int atributo1, atributo2; // variaveis para estrutura de decisao e comparacao de atributos a seguir
    int repetir;
    
    printf("Comparação de cartas\n\n");
    do {
    printf("Escolha dois atributos para comparar:\n\n");
    printf("1. População\n");
    printf("2. Área em km²\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n\n");
    printf("Qual o primeiro atributo que deseja comparar? \n");
    scanf("%d", &atributo1);
    printf("Qual o segundo atributo que deseja comparar? \n");
    scanf("%d", &atributo2);
    printf("\n");

    if (atributo1 == atributo2) {
        printf("Erro! Não é possível comparar o mesmo atributo 2 vezes!\n");
        continue;
    }
    
    // comparacao das cartas
    switch (atributo1) {
    case 1:
    printf("População:\n");
    printf("Carta 1: %s: %d\n", nomecidade, pop);
    printf("Carta 2: %s: %d\n", nomecidade2, pop2);

    (pop > pop2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (pop < pop2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break; // usando operadores ternarios, simplifiquei a comparacao para melhor compreensao de leitura do codigo

    case 2:
    printf("Área:\n");
    printf("Carta 1: %s: %.2f km²\n", nomecidade, area);
    printf("Carta 2: %s: %.2f km²\n", nomecidade2, area2);

    (area > area2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (area < area2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;

    case 3:
    printf("PIB:\n");  
    printf("Carta 1: %s: %.2f bilhões de reais\n", nomecidade, pib); 
    printf("Carta 2: %s: %.2f bilhões de reais\n", nomecidade2, pib2);

    (pib > pib2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (pib < pib2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;    
    
    case 4:
    printf("Pontos Turísticos:\n");
    printf("Carta 1: %s: %d\n", nomecidade, turismo);
    printf("Carta 2: %s: %d\n", nomecidade2, turismo2);

    (turismo > turismo2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (turismo < turismo2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;
    
    case 5:
    printf("Densidade Populacional:\n");
    printf("Carta 1: %s: %.2f hab/km²\n", nomecidade, densidadepop);
    printf("Carta 2: %s: %.2f hab/km²\n", nomecidade2, densidadepop2);

    (densidadepop < densidadepop2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (densidadepop > densidadepop2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;
    
    case 6:
    printf("PIB per Capita:\n");
    printf("Carta 1: %s: %.2f reais\n", nomecidade, pibPC);
    printf("Carta 2: %s: %.2f reais\n", nomecidade2, pibPC2);

    (pibPC > pibPC2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (pibPC < pibPC2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;
    
    case 7:
    printf("Super Poder:\n");
    printf("Carta 1: %s: %f\n", nomecidade, superpoder);
    printf("Carta 2: %s: %f\n", nomecidade2, superpoder2);

    (superpoder > superpoder2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (superpoder < superpoder2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;

    default:
    printf("Escolha inválida! Tente novamente.\n\n");
    break;
}
    switch (atributo2) {
    case 1:
    printf("População:\n");
    printf("Carta 1: %s: %d\n", nomecidade, pop);
    printf("Carta 2: %s: %d\n", nomecidade2, pop2);

    (pop > pop2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (pop < pop2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break; // usando operadores ternarios, simplifiquei a comparacao para melhor compreensao de leitura do codigo

    case 2:
    printf("Área:\n");
    printf("Carta 1: %s: %.2f km²\n", nomecidade, area);
    printf("Carta 2: %s: %.2f km²\n", nomecidade2, area2);

    (area > area2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (area < area2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;

    case 3:
    printf("PIB:\n");  
    printf("Carta 1: %s: %.2f bilhões de reais\n", nomecidade, pib); 
    printf("Carta 2: %s: %.2f bilhões de reais\n", nomecidade2, pib2);

    (pib > pib2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (pib < pib2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;    
    
    case 4:
    printf("Pontos Turísticos:\n");
    printf("Carta 1: %s: %d\n", nomecidade, turismo);
    printf("Carta 2: %s: %d\n", nomecidade2, turismo2);

    (turismo > turismo2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (turismo < turismo2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;
    
    case 5:
    printf("Densidade Populacional:\n");
    printf("Carta 1: %s: %.2f hab/km²\n", nomecidade, densidadepop);
    printf("Carta 2: %s: %.2f hab/km²\n", nomecidade2, densidadepop2);

    (densidadepop < densidadepop2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (densidadepop > densidadepop2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;
    
    case 6:
    printf("PIB per Capita:\n");
    printf("Carta 1: %s: %.2f reais\n", nomecidade, pibPC);
    printf("Carta 2: %s: %.2f reais\n", nomecidade2, pibPC2);

    (pibPC > pibPC2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (pibPC < pibPC2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;
    
    case 7:
    printf("Super Poder:\n");
    printf("Carta 1: %s: %f\n", nomecidade, superpoder);
    printf("Carta 2: %s: %f\n", nomecidade2, superpoder2);

    (superpoder > superpoder2) ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nomecidade) : 
    (superpoder < superpoder2) ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nomecidade2) : 
    printf("Resultado: Empate!\n\n");
    break;

    default:
    printf("Escolha inválida! Tente novamente.\n\n");
    break;
}

    // opcao para uma nova comparacao
    
    printf("Fazer uma nova comparação? 1. Sim  2. Não\n");
    scanf("%d", &repetir);
    printf("\n");

} while ((atributo1 == atributo2) || (atributo1 > 7) || (atributo2 > 7) || (repetir == 1));
    if ((repetir == 2) || (repetir >= 3) || (repetir < 1));
    printf("\n");
    printf("Jogo encerrado!\n");
    return (1);
    // final do loop e encerramento do jogo

    return 0;
}