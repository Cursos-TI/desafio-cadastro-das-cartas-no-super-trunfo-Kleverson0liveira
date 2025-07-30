#include <stdio.h>

int main(){

    //VARIAVEIS
    int num_estado, num_estado_2, populacao, populacao_2, pontos_turisticos, pontos_turisticos_2;
    float area, area_2, pib, pib_2;
    char inic_estado, inic_estado_2;
    char cidade[50], cidade_2[50];

    //INICIO DA COLETA DE INFORMAÇOES PARA O PRIMEIRO CARD
    printf("Seja bem vindo!!! \n");
    printf("Vamos começar o super trunfo?? \n \n");
    printf("Escolha  uma letra para começar, a letra escolhida deve estar entre A e H: ");
    scanf("%c", &inic_estado);
    printf("Escolha um numero, o numero deve estar entre 0 e 99 ele sera usado para criar o codigo de sua carta juntamente a letra que representa o estado: ");
    scanf("%d", &num_estado);
    getchar(); // limpa o \n restante no buffer
    printf("Escolha uma cidade e digite seu nome: ");
    fgets(cidade, 50, stdin);
    printf("Qual a população desta cidade? ");
    scanf("%i", &populacao);
    printf("Qual a área em Km² desta cidade? ");
    scanf("%f", &area);
    printf("Qual o valor do PIB da cidade? ");
    scanf("%f", &pib);
    printf("Quantos pontos turisticos existem nesta cidade? ");
    scanf("%i", &pontos_turisticos);

    // FIM DA COLETA DE INFORMAÇOES DO PRIMEIRO CARDI

    printf("\n\n");
    printf("OK! Muito bem você concluil o primeiro cardi, vamos dar inicio a coleta de recursos do segundo cardi agora \n \n");

    //INICIO DO SEGUNDO CARDI
    
    getchar(); // limpa o \n restante no buffer
    printf("Escolha  uma letra para começar, a letra escolhida deve estar entre A e H: ");
    scanf("%c", &inic_estado_2);
    printf("Escolha um numero, o numero deve estar entre 0 e 99 ele sera usado para criar o codigo de sua carta juntamente a letra que representa o estado: ");
    scanf("%d", &num_estado_2);
    getchar(); // limpa o \n restante no buffer
    printf("Escolha uma cidade e digite seu nome: ");
    fgets(cidade_2, 50, stdin);
    printf("Qual a população desta cidade? ");
    scanf("%i", &populacao_2);
    printf("Qual a área em Km² desta cidade? ");
    scanf("%f", &area_2);
    printf("Qual o valor do PIB da cidade? ");
    scanf("%f", &pib_2);
    printf("Quantos pontos turisticos existem nesta cidade? ");
    scanf("%i", &pontos_turisticos_2);

    // FIM DA COLETA DE INFORMAÇOES DO SEGUNDO CARDI
    printf("\n\n");
    printf("Muito bem, você concluil com exito a montagem dos dois cardis, veja a seguir o resultado desta tarefa: \n\n");
    //INICIO DA EXIBIÇAO DOS RESULTADOS

    //card_1
    printf("Carta 1 \n");
    printf("Estado: %c \n", inic_estado);
    printf("Codigo: %c%02d \n", inic_estado, num_estado);
    printf("Nome da Cidade: %s", cidade);
    printf("População: %i \n", populacao);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Numero de Pontos Turisticos: %i \n \n", pontos_turisticos);

    printf("Carta 2 \n");
    printf("Estado: %c \n", inic_estado_2);
    printf("Codigo: %c%02d \n", inic_estado_2, num_estado_2);
    printf("Nome da Cidade: %s", cidade_2);
    printf("População: %i \n", populacao_2);
    printf("Área: %.2f \n", area_2);
    printf("PIB: %.2f \n", pib_2);
    printf("Numero de Pontos Turisticos: %i \n", pontos_turisticos_2);


    return 0;

};
