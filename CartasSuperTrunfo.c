#include <stdio.h>

int main()
{
    // VARIAVEIS DA CARTA 1
    // NÍVEL INICIANTE
    char estado;
    int codCarta;
    char nomeCidade[20];
    unsigned long int populacao; // VARIAVEL ATUALIZADA PARA O NIVEL MESTE
    float area;
    float pib;
    int pontosTuristicos;
    // NÍVEL AVENTUREIRO
    float densidadePopulacional;
    float pibCapita;
    // NÍVEL MESTRE
    float superPoder;

    // VARIAVEIS DA CARTA 2
    // NÍVEL INICIANTE
    char estado2;
    int codCarta2;
    char nomeCidade2[20];
    unsigned long int populacao2; // VARIAVEL ATUALIZADA PARA O NIVEL MESTE
    float area2;
    float pib2;
    int pontosTuristicos2;
    // NÍVEL AVENTUREIRO
    float densidadePopulacional2;
    float pibCapita2;
    // NÍVEL MESTRE
    float superPoder2;

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
    scanf("%ld", &populacao);

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
    scanf("%ld", &populacao2);

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
    // NÍVEL INICIANTE
    printf("\nCARTA 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %c0%d \n", estado, codCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("População: %ld \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Números de Pontos Turísticos: %d \n", pontosTuristicos);
    // NÍVEL AVENTUREIRO
    densidadePopulacional = populacao / area;
    printf("Densidade Populacional: %.2f \n", densidadePopulacional);
    pibCapita = pib / populacao;
    printf("PIB per Capita: %.2f \n", pibCapita);
    // NIVEL MESTRE
    superPoder = (float)populacao + area + pib + (float)pontosTuristicos + pibCapita + (1 / densidadePopulacional);
    printf("Super Poder %.2f \n\n", superPoder);

    // APRESENTAÇÃO CARTA 2
    // NÍVEL INICIANTE
    printf("CARTA 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c0%d \n", estado2, codCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %ld \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d \n", pontosTuristicos2);
    // NÍVEL AVENTUREIRO
    densidadePopulacional2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
    pibCapita2 = pib2 / populacao2;
    printf("PIB per Capita: %.2f \n", pibCapita2);
    // NIVEL MESTRE
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibCapita2 + (1 / densidadePopulacional2);
    printf("Super Poder: %.2f \n\n", superPoder2);

    // APRESENTAÇÃO COMPARAÇÃO ENTRE AS CARTAS
    // NIVEL MESTRE
    printf("Agora iremos fazer a comparação das CARTAS! \n");
    printf("Onde o Resultado for 1, Vitória da CARTA 1 \n");
    printf("Onde o Resultado for 0, Vitória da CARTA 2 \n\n");
    
    printf("População: %d \n", populacao >= populacao2);
    printf("Área: %d \n", area >= area2);
    printf("PIB: %d \n", pib >= pib2);
    printf("Números de Pontos Turísticos: %d \n", pontosTuristicos >= pontosTuristicos2);
    printf("Densidade Populacional: %d \n", densidadePopulacional <= densidadePopulacional2);
    printf("PIB per Capita: %d \n", pibCapita >= pibCapita2);
    printf("Super Poder: %d \n\n", superPoder >= superPoder2);

    return 0;
}
