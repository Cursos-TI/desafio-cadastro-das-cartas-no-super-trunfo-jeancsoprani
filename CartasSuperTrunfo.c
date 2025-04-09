#include <stdio.h>

int main()
{
    // VARIAVEIS DA CARTA 1
    char estado;
    int codCarta;
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // VARIAVEIS DA CARTA 2
    char estado2;
    int codCarta2;
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // BREVE EXPLICAÇÃO DO SISTEMA
    printf("\nBem Vindo ao SUPER TRUNFO! \n\nIremos pedir informações sobre 2 estados, e dividiremos as informações fornecidas em CARTAS. \n\n");

    // INICIO CARTA 1 **************************************************************************************

    // INFORMATIVO DE INICIO DE COLETA DE DADOS
    printf("Vamos iniciar coletando as informações do primeiro ESTADO para gerar a primeira CARTA. \n\n");

    // INFORME O ESTADO DA CARTA N.1
    printf("CARTA 1 \n- Informe o Estado, entre uma LETRA de: A a H. \n");
    scanf("%c", &estado);

    // INFORME O CÓDIGO DA CARTA N.1
    printf("\n- Informe o Código, entre um NÚMERO de: 1 a 4. \n");
    scanf("%d", &codCarta);

    // INFORME O NOME DA CIDADE N.1
    printf("\n- Informe o NOME da CIDADE. \n");
    scanf("%s", nomeCidade);

    // INFORME A POPULAÇÃO DA CIDADE N.1
    printf("\n- Informe a POPULAÇÃO da CIDADE. \n");
    scanf("%d", &populacao);

    // INFORME A AREA DA CIDADE N.1
    printf("\n- Informe a ÁREA da CIDADE. \n");
    scanf("%f", &area);

    // INFORME O PIB DA CIDADE N.1
    printf("\n- Informe o PIB da CIDADE. \n");
    scanf("%f", &pib);

    // INFORME OS PONTOS TURÍSTICOS DA CIDADE N.1
    printf("\n- Informe os PONTOS TURÍSTICOS da CIDADE. \n");
    scanf("%d", &pontosTuristicos);

    // INICIO CARTA 2 **************************************************************************************

    // INFORMATIVO DE INICIO DE COLETA DE DADOS
    printf("\nVamos iniciar a coleta das informações do segundo ESTADO para gerar a segunda CARTA. \n\n");

    // INFORME O ESTADO DA CARTA N.2
    printf("CARTA 2 \n- Informe o Estado, entre uma LETRA de: A a H. \n");
    scanf(" %c", &estado2);

    // INFORME O CÓDIGO DA CARTA N.2
    printf("\n- Informe o Código, entre um NÚMERO de: 1 a 4. \n");
    scanf("%d", &codCarta2);

    // INFORME O NOME DA CIDADE N.2
    printf("\n- Informe o NOME da CIDADE. \n");
    scanf("%s", nomeCidade2);

    // INFORME A POPULAÇÃO DA CIDADE N.2
    printf("\n- Informe a POPULAÇÃO da CIDADE. \n");
    scanf("%d", &populacao2);

    // INFORME A AREA DA CIDADE N.2
    printf("\n- Informe a ÁREA da CIDADE. \n");
    scanf("%f", &area2);

    // INFORME O PIB DA CIDADE N.2
    printf("\n- Informe o PIB da CIDADE. \n");
    scanf("%f", &pib2);

    // INFORME OS PONTOS TURÍSTICOS DA CIDADE N.2
    printf("\n- Informe os PONTOS TURÍSTICOS da CIDADE. \n");
    scanf("%d", &pontosTuristicos2);

    // APRESENTAÇÃO DAS INFORMAÇÕES AO USUARIO *************************

    // APRESENTAÇÃO CARTA 1
    printf("\nCARTA 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %c0%d \n", estado, codCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Números de Pontos Turísticos: %d \n\n", pontosTuristicos);

    // APRESENTAÇÃO CARTA 2
    printf("CARTA 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c0%d \n", estado2, codCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d \n\n", pontosTuristicos2);

    return 0;
}
