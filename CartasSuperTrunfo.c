#include <stdio.h> 

    int main(){

    //declarando as variaveis que serão utilizadas
    char estado1, estado2;
    char codcarta1[4], codcarta2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float areacidade1, areacidade2;
    float pibcidade1, pibcidade2;
    int turistico1, turistico2;

    //primeiro contato com o usuário
    printf("Olá, seja bem-vindo(a) ao jogo Super Trunfo de Países! Vamos cadastrar sua primeira carta? \n");

    //inicializando o cadastro da carta 1
    printf("Informe uma letra de A a H para cadastrar seu estado: \n");
    scanf(" %c", &estado1);
    printf("Informe a letra do estado escolhido seguida de um número de 01 a 04.\n EXEMPLO: M05: \n");
    scanf("%s", &codcarta1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("Informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &areacidade1);
    printf("Informe o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pibcidade1);
    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turistico1);

    //inicializando o cadastro da carta 2
    printf("Primeira carta cadastrada! Vamos cadastrar sua segunda carta?\n");

    printf("Informe uma letra de A a H para cadastrar seu estado: \n");
    scanf(" %c", &estado2);
    printf("Informe a letra do estado escolhido seguida de um número de 01 a 04.\n EXEMPLO: M05: \n");
    scanf("%s", &codcarta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &areacidade2);
    printf("Informe o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pibcidade2);
    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turistico2);

    //exibição das cartas cadastradas
    printf("CARTA 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %f km²\n PIB: %f bilhões de reais\n Número de Pontos Turísticos: %d\n \n", estado1, codcarta1, cidade1, populacao1, areacidade1, pibcidade1, turistico1);
    printf("CARTA 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %f km²\n PIB: %f bilhões de reais\n Número de Pontos Turísticos: %d\n", estado2, codcarta2, cidade2, populacao2, areacidade2, pibcidade2, turistico2);

    return 0;
    }