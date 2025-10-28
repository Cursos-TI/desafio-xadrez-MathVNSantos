#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //Declaração de variáveis

    int menu;
    char peca;


    //Apresentação do Menu do Jogo
    printf("MateCheck Studios Present\n\n");
    printf("    XADREZ: The Game     \n\n");
    printf("\n\n");

    printf("1 - Novo Jogo\n");
    printf("2 - Tutorial");
    printf("3 - Sair do jogo");
    scanf("%d", menu)

    //Escolha entre opções do Menu
    //1 - Novo Jogo
    //2 - Tutorial
    //3 - Sair do Jogo
    switch (menu)
    {
    case 1:
        //Escolha da peça
        printf("Iniciando Novo Jogo\n\n\n");
        printf(" Escolha qual peça mover: \n");
        printf("T - Torre\n");
        printf("B - Bispo\n");
        printf("D - Dama / Rainha");
        scanf("%c", &peca);

        switch (peca)
        {
            //Move-se em linha reta horizontalmente ou verticalmente.
            //Caso escolha Torre - programa deverá simular o movimento da Torre cinco casas para a direita.
            case 'T':
                for (int i = 0; i < 5; i++)
                {
                    printf("Direita\n"); // Indica a direção do movimento
                }
            break;
            
            case 'B':
                //Move-se na diagonal.
                //Caso escolha Bispo - Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita.
                //Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
                while ('')
                {
                    /* code */
                }
                
            break;

            case 'D':
            break;
        
        default:
            printf ("Peça incorreta\n\n")
            break;
        }




        break;
    
    default:
        break;
    }


    return 0;
}
