#include <stdio.h>

int main(){

    //VARIAVEIS
    int num_estado, num_estado_2,  pontos_turisticos, pontos_turisticos_2;
    float area, area_2, pib, pib_2,densidade_populacional,densidade_populacional_2, pib_per_capita,pib_per_capita_2, super_poder, super_poder_2;
    char inic_estado, inic_estado_2;
    char cidade[50], cidade_2[50];
    unsigned long int populacao, populacao_2, comp_populacao;



    //INICIO DA COLETA DE INFORMAÇOES PARA O PRIMEIRO CARD
    printf("Seja bem vindo!!! \n");
    printf("Vamos começar o super trunfo?? \n \n");
    printf("Escolha  uma letra para começar, a letra escolhida deve estar entre A e H: ");
    scanf(" %c", &inic_estado);
    printf("Escolha um numero, o numero deve estar entre 0 e 99 ele sera usado para criar o codigo de sua carta juntamente a letra que representa o estado: ");
    scanf("%d", &num_estado);
    getchar(); // limpa o \n restante no buffer
    printf("Escolha uma cidade e digite seu nome: ");
    fgets(cidade, 50, stdin);
    printf("Qual a população desta cidade? ");
    scanf("%lu", &populacao);
    printf("Qual a área em Km² desta cidade? ");
    scanf("%f", &area);
    printf("Qual o valor do PIB da cidade? ");
    scanf("%f", &pib);
    printf("Quantos pontos turisticos existem nesta cidade? ");
    scanf("%d", &pontos_turisticos);

    // FIM DA COLETA DE INFORMAÇOES DO PRIMEIRO CARDI

    printf("\n\n");
    printf("OK! Muito bem você concluil o primeiro cardi, vamos dar inicio a coleta de recursos do segundo cardi agora \n \n");

    //INICIO DO SEGUNDO CARDI
    
    getchar(); // limpa o \n restante no buffer
    printf("Escolha  uma letra para começar, a letra escolhida deve estar entre A e H: ");
    scanf(" %c", &inic_estado_2);
    printf("Escolha um numero, o numero deve estar entre 0 e 99 ele sera usado para criar o codigo de sua carta juntamente a letra que representa o estado: ");
    scanf("%d", &num_estado_2);
    getchar(); // limpa o \n restante no buffer
    printf("Escolha uma cidade e digite seu nome: ");
    fgets(cidade_2, 50, stdin);
    printf("Qual a população desta cidade? ");
    scanf("%lu", &populacao_2);
    printf("Qual a área em Km² desta cidade? ");
    scanf("%f", &area_2);
    printf("Qual o valor do PIB da cidade? ");
    scanf("%f", &pib_2);
    printf("Quantos pontos turisticos existem nesta cidade? ");
    scanf("%d", &pontos_turisticos_2);

    // FIM DA COLETA DE INFORMAÇOES DO SEGUNDO CARDI
    printf(" \n \n");
    printf("Muito bem, você concluil com exito a montagem dos dois cardis, veja a seguir o resultado desta tarefa: \n \n");
    // iniciando calculço de densidade populacional e pib per capita

    densidade_populacional = (float) populacao / area;
    densidade_populacional_2 = (float) populacao_2 / area_2;
    pib_per_capita = (float) pib * 1000000000 / populacao;
    pib_per_capita_2 = (float) pib_2 * 1000000000 / populacao_2;

    

    // Super Poder: soma dos atributos numéricos + inverso da densidade populacional
    super_poder = (float) populacao + area + pib + pontos_turisticos + pib_per_capita + (1.0f / densidade_populacional);
    super_poder_2 = (float) populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_per_capita_2 + (1.0f / densidade_populacional_2);

    //INICIO DA EXIBIÇAO DOS RESULTADOS

    //card_1
    printf("Carta 1 \n");
    printf("Estado: %c \n", inic_estado);
    printf("Codigo: %c%02d \n", inic_estado, num_estado);
    printf("Nome da Cidade: %s", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais \n \n", pib_per_capita);
   
    printf("Carta 2 \n");
    printf("Estado: %c \n", inic_estado_2);
    printf("Codigo: %c%02d \n", inic_estado_2, num_estado_2);
    printf("Nome da Cidade: %s", cidade_2);
    printf("População: %lu \n", populacao_2);
    printf("Área: %.2f Km² \n", area_2);
    printf("PIB: %.2f bilhões de reais \n", pib_2);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais \n \n", pib_per_capita_2);

    // exibindo comparaçao entre cardis
    
    printf("Comparação de Cartas: se o resultado entre () se for 1 card 1 venceu se for 0 card 2 venceu \n\n");
    printf("População: Carta (%d) venceu \n", populacao > populacao_2);
    printf("Área: Carta (%d) venceu \n", area > area_2);
    printf("PIB: Carta (%d) venceu \n", pib > pib_2);
    printf("Pontos Turísticos: Carta (%d) venceu \n", pontos_turisticos > pontos_turisticos_2);
    printf("Densidade Populacional: Carta (%d) venceu \n", densidade_populacional < densidade_populacional_2);
    printf("PIB per Capita: Carta (%d) venceu \n", pib_per_capita > pib_per_capita_2);
    printf("Super Poder: Carta (%d) venceu \n", super_poder > super_poder_2);


    return 0;


};