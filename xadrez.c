#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void torreRecursiva(int posicao, int limite){
    if (posicao > limite) return;
    printf("Torre está na posição: %d, 1\n", posicao);
    torreRecursiva(posicao + 1, limite);
}

void bispoRecursivo(int posVertical, int posHorizontal, int limite){
    if (posVertical > limite || posHorizontal > limite) return;
    printf("\nBispo está na posição: %d, %d\n\n", posVertical, posHorizontal);
    for (int x = posHorizontal + 1; x <= limite; x++){
    printf("Bispo em: %d, %d\n", posVertical, x);
    }
    bispoRecursivo(posVertical + 1, posHorizontal + 1, limite);
}

void rainhaRecursiva(int posicaoR, int limite){
    if(posicaoR < limite) return;
    printf("Rainha está em: %d, 1\n", posicaoR);
    rainhaRecursiva(posicaoR - 1, limite);
}

void cavalo(){
    int cavaloVertical = 0, cavaloHorizontal = 0;

    printf("\n### Movimentação do Cavalo###\n\n");
    for(cavaloVertical = 1; cavaloVertical <= 2; cavaloVertical++){
        printf("Cavalo para cima\n");

        for (cavaloHorizontal = 1; cavaloVertical == 2 && cavaloHorizontal <= 1; cavaloHorizontal++){
            printf("Cavalo para a Direita\n");
            break;
        }

        if (cavaloVertical == 1) continue;
    }
}

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int tabuleiro = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("### Movimentação do Bispo ###\n\n");
    int x = 1, z = 1;
    while ( x <= tabuleiro && z <= tabuleiro)
    {
        printf("Posição do Bispo: %d, %d\n", x , z);
        x++, z++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\n\n### Movimentação da Torre ###\n\n");
    int torre = 1;

    do {
        printf("Posição da Torre: %d, 1\n", torre);
        torre++;
    } while (torre <= tabuleiro);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n\n### Movimentação da Rainha ###\n\n");

    for (int rainha = tabuleiro; rainha >= 1; rainha--){
        printf("Posição da Rainha: %d, 1\n", rainha);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n### Movimentação do Cavalo ###\n\n");

    int horizontais = 1, verticais = 2;

    for (int passoVertical = 1; passoVertical <= verticais; passoVertical++){
        printf("Baixo\n");

        int passoHorizontal = 1;
        while (passoVertical == verticais && passoHorizontal <= horizontais){
            printf("Esquerda\n");
            passoHorizontal++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\n\n### Movimentos Recursivos/Complexos ###\n\n");
    printf("### Torre Recursiva ###\n");
    torreRecursiva(1, tabuleiro);

    printf("\n\n### Bispo Recursivo ###\n\n");
    bispoRecursivo(1, 1, tabuleiro);

    printf("\n\n### Rainha Recursiva ###\n\n");
    rainhaRecursiva(tabuleiro, 1);

    cavalo();


    return 0;
}
