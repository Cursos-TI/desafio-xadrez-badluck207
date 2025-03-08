#include <stdio.h>

int main()
{
    int numT = 0, numB = 0, numR = 0;

    // Movimentação da torre
    for (int i = 0; i < 5; i++)
    {
        printf("Torre Movimentando a: ");
        printf("Frente\n");
    }

    printf("\n----------------------\n");

    // Movimentação da Bispo
    while (numB < 5)
    {
        printf("Bispo Movimentando para: ");
        printf("Cima - Direita\n");
        numB++;
    }

    printf("\n----------------------");

    // Movimentação da Rainha
    do
    {
        printf("\nRainha Movimentando para: ");
        printf("Esquerda - Direita");
        numR++;
    } while (numR < 8);

    //Sistema de saida do programa
    printf("\n\nPressione 'Enter' para sair do jogo...\n");
    getchar();

    return 0;
}