#include <stdio.h>

int main(){

    int pontos1, pontos2, escolhaAtributo; 
    unsigned long int populacao1, populacao2; 
    char estado1, estado2, codigo1[10], codigo2[10], cidade1[20], cidade2[20];
    float area1, area2, pib1, pib2, dens1, dens2;

    
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

    // Visualização dos dados das cartas cadastradas
    printf("\nJogador, veja abaixo os dados das suas cartas:\n");

    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu milhões de habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", dens1);

    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu milhões de habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", dens2);

    // Nível Aventureiro: Escolha do Atributo que será comparado usando Menu interativo com switch

    // Menu para escolha do atributo
    printf("\n### ESCOLHA O ATRIBUTO QUE SERÁ COMPARADO! ###\n");
    printf("Opção 1: População\n");
    printf("Opção 2: Área\n");
    printf("Opção 3: PIB\n");
    printf("Opção 4: Quantidade de pontos turísticos\n");
    printf("Opção 5: Densidade populacional\n");
    printf("Escolha a opção: ");
    scanf("%d", &escolhaAtributo);

    //Switch para definição do atributo escolhido
    switch (escolhaAtributo){
        case 1:
        printf("\nATRIBUTO ESCOLHIDO: População\n");
        break;
        case 2:
        printf("\nATRIBUTO ESCOLHIDO: Área\n");
        break;
        case 3:
        printf("\nATRIBUTO ESCOLHIDO: PIB\n");
        break;
        case 4:
        printf("\nATRIBUTO ESCOLHIDO: Quantidade de pontos turísticos\n");
        break;
        case 5:
        printf("\nATRIBUTO ESCOLHIDO: Densidade populacional\n");
        break;
        default:
        printf("\nOpção inválida!\n");
        }

        // Uso do if-else para definição do vencedor
        if (escolhaAtributo == 1){
            if (populacao1 > populacao2) {
                printf("Cidades: %s e %s\n", cidade1, cidade2);
                printf("POPULAÇÃO - %s: %lu milhões de habitantes e %s: %lu milhões de habitantes\n", cidade1, &populacao1, cidade2, &populacao2);
                printf("\nCARTA 1 VENCEU!\n");
            } else if (populacao1 < populacao2) {
                printf("Cidades: %s e %s\n", cidade1, cidade2);
                printf("POPULAÇÃO - %s: %lu milhões de habitantes e %s: %lu milhões de habitantes\n", cidade1, &populacao1, cidade2, &populacao2);
                printf("\nCARTA 2 VENCEU!\n");
            } else {
                printf("Cidades: %s e %s\n", cidade1, cidade2);
                printf("POPULAÇÃO - %s: %lu milhões de habitantes e %s: %lu milhões de habitantes\n", cidade1, &populacao1, cidade2, &populacao2);
                printf("\nO JOGO EMPATOU!\n");
            }
        } else if (escolhaAtributo == 2){
            if (area1 > area2) {
                printf("Cidades: %s e %s\n", cidade1, cidade2);
                printf("ÁREA - %s: %.2f km² e %s: %.2f km²\n", cidade1, &area1, cidade2, &area2);
                printf("\nCARTA 1 VENCEU!\n");
            } else if (area1 < area2) {
                printf("Cidades: %s e %s\n", cidade1, cidade2);
                printf("ÁREA - %s: %.2f km² e %s: %.2f km²\n", cidade1, &area1, cidade2, &area2);
                printf("\nCARTA 2 VENCEU!\n");
            } else {
                printf("Cidades: %s e %s\n", cidade1, cidade2);
                printf("ÁREA - %s: %.2f km² e %s: %.2f km²\n", cidade1, &area1, cidade2, &area2);
                printf("\nO JOGO EMPATOU!\n");
            }
    } else if (escolhaAtributo == 3){
        if (pib1 > pib2) {
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("PIB - %s: R$ %.2f e %s: R$ %.2f\n", cidade1, &pib1, cidade2, &pib2);
            printf("\nCARTA 1 VENCEU!\n");
        } else if (pib1 < pib2) {
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("PIB - %s: R$ %.2f e %s: R$ %.2f\n", cidade1, &pib1, cidade2, &pib2);
            printf("\nCARTA 2 VENCEU!\n");
        } else {
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("PIB - %s: R$ %.2f e %s: R$ %.2f\n", cidade1, &pib1, cidade2, &pib2);
            printf("\nO JOGO EMPATOU!\n");
        }
    } else if (escolhaAtributo == 4){
        if (pontos1 > pontos2) {
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("QUANTIDADE PONTOS TURÍSTICOS - %s: %d e %s: %d\n", cidade1, &pontos1, cidade2, &pontos2);
            printf("\nCARTA 1 VENCEU!\n");
        } else if (pontos1 > pontos2) {
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("QUANTIDADE PONTOS TURÍSTICOS - %s: %d e %s: %d\n", cidade1, &pontos1, cidade2, &pontos2);
            printf("\nCARTA 2 VENCEU!\n");
        } else {
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("QUANTIDADE PONTOS TURÍSTICOS - %s: %d e %s: %d\n", cidade1, &pontos1, cidade2, &pontos2);
            printf("\nO JOGO EMPATOU!\n");
        }
    } else if (escolhaAtributo == 5){
        if (dens1 < dens2) {
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("DENSIDADE POPULACIONAL - %s: %.2f hab/km² e %s: %.2f hab/km²\n", cidade1, &dens1, cidade2, &dens2);
            printf("\nCARTA 1 VENCEU!\n");
        } else if (dens1 > dens2) {
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("DENSIDADE POPULACIONAL - %s: %.2f hab/km² e %s: %.2f hab/km²\n", cidade1, &dens1, cidade2, &dens2);
            printf("\nCARTA 2 VENCEU!\n");
        } else {
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("DENSIDADE POPULACIONAL - %s: %.2f hab/km² e %s: %.2f hab/km²\n", cidade1, &dens1, cidade2, &dens2);
            printf("\nO JOGO EMPATOU!\n");
        }
    }


    return 0;

}