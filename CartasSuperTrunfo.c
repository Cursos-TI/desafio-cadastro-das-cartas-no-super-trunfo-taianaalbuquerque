#include <stdio.h>

int main(){
    int pontos1, pontos2, comparacaopontos, comparacaopopulacao, comparacaoarea, comparacaopib, comparacaoper, comparacaodens, comparacaopoder; 
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

    // Cálculo dos Super Poderes das cartas
    superpoder1 = (float) populacao1 + area1 + pib1 + pontos1 + per1 + (1 / dens1);
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + per2 + (1 / dens2);

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
    printf("Super Poder: %.2f\n", superpoder1);


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
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparação dos atributos entre as cartas
    comparacaopopulacao = populacao1 > populacao2;
    comparacaoarea = area1 > area2;
    comparacaopib = pib1 > pib2;
    comparacaopontos = pontos1 > pontos2;
    comparacaodens = dens1 < dens2;
    comparacaoper = per1 > per2;
    comparacaopoder = superpoder1 > superpoder2;
    // 1 para VERDADEIRO (carta 1 vence) e 0 para FALSO (carta 2 vence)

    // Exibindo as comparações de atributos para definir carta vencedora
    printf("\nCOMPARAÇÃO ENTRE OS ATRIBUTOS DA CARTA 1 ENTRE A CARTA 2:\n");
    printf("\n*** Se o resultado for 1 vence a Carta 1 e se o resultado for 0 vence a Carta 2 ***\n");
    printf("População habitacional: %d\n", comparacaopopulacao);
    printf("Área: %d\n", comparacaoarea);
    printf("PIB: %d\n", comparacaopib);
    printf("Pontos turísticos: %d\n", comparacaopontos);
    printf("Densidade populacional: %d\n", comparacaodens);
    printf("PIB per Capita: %d\n", comparacaoper);
    printf("Super Poder: %d\n", comparacaopoder);


    return 0;

}
