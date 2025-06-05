#include <stdio.h>

int main(){

    int pontos1, pontos2; 
    unsigned long int populacao1, populacao2; 
    char estado1, estado2, codigo1[10], codigo2[10], cidade1[20], cidade2[20];
    float area1, area2, pib1, pib2, dens1, dens2, per1, per2, superpoder1, superpoder2;

    
    // Início das instruções para cadastro de 2 cartas no jogo Super Trunfo - Estados do Brasil

    printf("Vamos começar o jogo Super Trunfo cadastrando as 2 cartas do jogador.\n");

    printf("\nJogador, preencha os dados abaixo com as informações da CARTA 1:\n");

    // O Estado é informado na carta por uma letra entre A - H
    // Espaço antes do % para evitar erro de leitura por dados no buffer
    printf("O Estado: ");
    scanf(" %c", &estado1);

    // O Código da Carta é a junção da letra que representa o Estado e um número de 01 a 04
    // Limitando a quantidade de caracteceres (%9s) que pode ser fornecida pelo usuário para garantir bom funcionamento do programa
    printf("O Código da Carta: ");
    scanf("%9s", codigo1);

    // Informações fornecidas na carta
    printf("O nome da cidade: ");
    scanf("%19s", cidade1);

    printf("População habitacional: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos existentes: ");
    scanf("%d", &pontos1);

    // Finalização do cadastro da primeira carta
    printf("\nAssim FINALIZAMOS o cadastro da CARTA 1.\n");


    // Início do cadastro da segunda carta
    printf("\nVamos seguir para o cadastramento da CARTA 2:\n");

    // Mesmas informações da Carta 1
    printf("O Estado: ");
    scanf(" %c", &estado2);

    printf("O Código da Carta: ");
    scanf("%9s", codigo2);

    printf("O nome da cidade: ");
    scanf("%19s", cidade2);

    printf("População habitacional (em milhões): ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos existentes: ");
    scanf("%d", &pontos2);
    
    // Fim do cadastramento da segunda carta
    printf("\nCADASTROS DAS CARTAS FINALIZADOS COM SUCESSO!\n");

    // Cálculo da densidade populacional das cartas
    dens1 = (float) populacao1 / area1;
    dens2 = (float) populacao2 / area2;

    // Cálculo do PIB per Capita das cartas
    per1 = (float) pib1 / populacao1;
    per2 = (float) pib2 / populacao2;

    // Visualização dos dados das cartas cadastradas
    printf("\nJogador, veja abaixo os dados das suas cartas:\n");

    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População de %s: %lu milhões de habitantes\n" ,cidade1 , populacao1);
    printf("Área de %s: %.2f km²\n", cidade1, area1);
    printf("PIB de %s: R$ %.2f\n", cidade1, pib1);
    printf("Quantidade de pontos turísticos de %s: %d\n", cidade1, pontos1);
    printf("Densidade populacional de %s: %.2f hab/km²\n", cidade1, dens1);
    printf("PIB per Capita de %s: %.2f reais\n", cidade1, per1);


    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População de %s: %lu milhões de habitantes\n" ,cidade2 , populacao2);
    printf("Área de %s: %.2f km²\n", cidade2, area2);
    printf("PIB de %s: R$ %.2f\n", cidade2, pib2);
    printf("Quantidade de pontos turísticos de %s: %d\n", cidade2, pontos2);
    printf("Densidade populacional de %s: %.2f hab/km²\n", cidade2, dens2);
    printf("PIB per Capita de %s: %.2f reais\n", cidade2, per2);

    // Comparação entre o atributo PIB per capita usando condicional if-else
    printf("\nComparação de cartas - Atributo: PIB per capita:\n");
    printf("\nCarta 1: %.2f reais\n", per1);
    printf("Carta 2: %.2f reais\n", per2);
    if (per1 > per2){
        printf("\nResultado: Carta 1 venceu!\n");
    } else {
        printf("\nResultado: Carta 2 venceu!\n");
    }

    


    return 0;

}
