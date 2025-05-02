#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    printf("Super Trunfo!\n");
    char Estado1[16], Estado2[16];
    char codigo1[4], codigo2[4];
    char Cidade1[50], Cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float Densidade_Populacional1, Densidade_Populacional2;
    float Pib_per_Capita1, Pib_per_Capita2;
    int escolhaJogador1;
    

    //Carta 1
    printf("Carta 1 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o Pib da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    //Cálculo da Densidade Populacional e Pib per Capita da Carta 1
    Densidade_Populacional1 = (float) populacao1 / area1;
    Pib_per_Capita1 = (float) pib1 / populacao1;
   

    //Impressão da Carta 1

    printf("Carta 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", populacao1);
    printf("Àrea: %.2f\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade_Popilacional: %f\n", Densidade_Populacional1);
    printf("Pib per Capita: %f\n", Pib_per_Capita1);

    //Carta 2

    printf("Carta 2\n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o Pib da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    //Cálculo da Densidade Populacional e Pib per Capita da Carta 2
    Densidade_Populacional2 = (float) populacao2 / area2;
    Pib_per_Capita2 = (float) pib2 / populacao2;
   

    //Impressão da Carta 2

    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", populacao2);
    printf("Àrea: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %f\n", Densidade_Populacional2);
    printf("Pib per Capita: %f\n", Pib_per_Capita2);

    //Comparação das cartas
    srand(time(0)); // Inicializa o gerador de números aleatórios
    printf("Escolha qual atributo você deseja comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib per Capita\n");
    scanf("%d", &escolhaJogador1);

     //Impressão da escolha do jogador
     switch (escolhaJogador1) {
        case 1:
            printf("Você escolheu: População\n");
            break;
        case 2:
            printf("Você escolheu: Área\n");
            break;
        case 3:
            printf("Você escolheu: Pib\n");
            break;
        case 4:
            printf("Você escolheu: Pontos Turisticos\n");
            break;
        case 5:
            printf("Você escolheu: Densidade Populacional\n");
            break;
        case 6:
            printf("Você escolheu: Pib per Capita\n");
            break;
    }

    switch (escolhaJogador1) {
        case 1:
            printf("Cidade 1: População -  ");
            break;
        case 2:
            printf("Cidade 1: Área - ");
            break;
        case 3:
            printf("Cidade 1: Pib - ");
            break;
        case 4:
            printf("Cidade 1: Pontos Turisticos - ");
            break;
        case 5:
            printf("Cidade 1: Densidade Populacional - ");
            break;
        case 6:
            printf("Cidade 1: Pib per Capita - ");
            break;
        default:
            printf("Escolha inválida! Tente novamente.\n");
    }

    switch (escolhaJogador1) {
        case 1:
            printf("Cidade 2: População\n");
            break;
        case 2:
            printf("Cidade 2: Área\n");
            break;
        case 3:
            printf("Cidade 2: Pib\n");
            break;
        case 4:
            printf("Cidade 2: Pontos Turisticos\n");
            break;
        case 5:
            printf("Cidade 2: Densidade Populacional\n");
            break;
        case 6:
            printf("Cidade 2: Pib per Capita\n");
            break;
    }
    
    //Impressão dos atributos escolhidos
    
    switch (escolhaJogador1) {
        case 1:
            printf("Cidade 1: População - %d\n", populacao1);
            printf("Cidade 2: População - %d\n", populacao2);
            break;
        case 2:
            printf("Cidade 1: Área - %.2f\n", area1);
            printf("Cidade 2: Área - %.2f\n", area2);
            break;
        case 3:
            printf("Cidade 1: Pib - %.2f\n", pib1);
            printf("Cidade 2: Pib - %.2f\n", pib2);
            break;
        case 4:
            printf("Cidade 1: Pontos Turisticos - %d\n", pontos_turisticos1);
            printf("Cidade 2: Pontos Turisticos - %d\n", pontos_turisticos2);
            break;
        case 5:
            printf("Cidade 1: Densidade Populacional - %f\n", Densidade_Populacional1);
            printf("Cidade 2: Densidade Populacional - %f\n", Densidade_Populacional2);
            break;
        case 6:
            printf("Cidade 1: Pib per Capita - %f\n", Pib_per_Capita1);
            printf("Cidade 2: Pib per Capita - %f\n", Pib_per_Capita2);
            break;
    }
    //Comparação dos atributos escolhidos
           if ((escolhaJogador1 == 1 && populacao1 > populacao2) || 
               (escolhaJogador1 == 2 && area1 > area2) || 
               (escolhaJogador1 == 3 && pib1 > pib2) ||
               (escolhaJogador1 == 4 && pontos_turisticos1 > pontos_turisticos2) ||
               (escolhaJogador1 == 5 && Densidade_Populacional1 < Densidade_Populacional2) ||
               (escolhaJogador1 == 6 && Pib_per_Capita1 > Pib_per_Capita2)) {
      
        printf("Parabéns você ganhou!\n");
        printf("%s", &Estado1);
        printf("%s", &Estado2);
        printf("%s\n", &Cidade1);
        printf("%s\n", &Cidade2);
        printf("%s\n", &codigo1);
        printf("%s\n", &codigo2);
    } else if ((escolhaJogador1 == 1 && populacao1 < populacao2) || 
               (escolhaJogador1 == 2 && area1 < area2) || 
               (escolhaJogador1 == 3 && pib1 < pib2) ||
               (escolhaJogador1 == 4 && pontos_turisticos1 < pontos_turisticos2) ||
               (escolhaJogador1 == 5 && Densidade_Populacional1 > Densidade_Populacional2) ||
               (escolhaJogador1 == 6 && Pib_per_Capita1 < Pib_per_Capita2)) {
        printf("Você perdeu!\n");
        printf("%s", &Estado1);
        printf("%s", &Estado2);
        printf("%s\n", &Cidade1);
        printf("%s\n", &Cidade2);
        printf("%s\n", &codigo1);
        printf("%s\n", &codigo2);
    } else if ((escolhaJogador1 == 1 && populacao1 == populacao2) || 
               (escolhaJogador1 == 2 && area1 == area2) || 
               (escolhaJogador1 == 3 && pib1 == pib2) ||
               (escolhaJogador1 == 4 && pontos_turisticos1 == pontos_turisticos2) ||
               (escolhaJogador1 == 5 && Densidade_Populacional1 == Densidade_Populacional2) ||
               (escolhaJogador1 == 6 && Pib_per_Capita1 == Pib_per_Capita2)) {
        printf("Empate!\n");
        printf("%s", &Estado1);
        printf("%s", &Estado2);
        printf("%s\n", &Cidade1);
        printf("%s\n", &Cidade2);
        printf("%s\n", &codigo1);
        printf("%s\n", &codigo2);
    
    }
    return 0;
}
