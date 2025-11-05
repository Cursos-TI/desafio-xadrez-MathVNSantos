#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Função para mover a segunda torre do jogo
//As funções serão utilizadas exclusivamente para aquelas peças que possem pares (Torre, Cavalo, Bispo)
void movertorre (int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        movertorre(casas - 1);
    }
    
}
void moverbispo1 (int casas){
    if (casas > 0)
    {
        printf("Cima, Direita\n");
        moverbispo1(casas - 1);
    }
}

void moverbispo2 (int casas){
    for (int vertical =  1; vertical <= casas; vertical++){
        for (int horizontal = 1; horizontal <= 1; horizontal++){
            printf("Cima, Esquerda\n");
        }
    }
}

void moverrainha (int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        moverrainha(--casas);
    }
}

void movercavalo (int casas){
    
}

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

    int opcao, i;
    char peca;


    //Apresentação do Menu do Jogo
    printf("MateCheck Studios Present\n\n");
    printf("    XADREZ: The Game     \n\n");
    printf("\n\n");


    printf("         MENU         \n");
    printf("   1 - Novo Jogo\n");
    printf("   2 - Tutorial\n");
    printf("   3 - Sair do jogo\n\n");
    printf("   Escolha : ");
    scanf("%d", &opcao);

    //Escolha entre opções do Menu
    //1 - Novo Jogo
    //2 - Tutorial
    //3 - Sair do Jogo
    switch (opcao)
    {
        case 1:
            //Escolha da peça
            printf("\n\n\n");
            printf("Iniciando Novo Jogo\n\n\n");
            printf(" Escolha qual peça mover: \n");
            printf("T / t - Torre da Esquerda ou Direita\n");
            printf("B / b - Bispo da Esquerda ou Direita\n");
            printf("D - Dama (Rainha)\n");
            printf("C / c - Cavalo da Esquerda ou Direita\n");
            printf(" Escolha: ");
            scanf(" %s", &peca);

            switch (peca)
            {
                //Move-se em linha reta horizontalmente ou verticalmente.
                //Caso escolha Torre - programa deverá simular o movimento da Torre cinco casas para a direita.
                case 'T':
                    for (i = 0; i < 5; i++)
                    {
                        printf("Direita\n"); // Indica a direção do movimento
                    }
                    break;

                case 't':
                    movertorre(5);
                    break;                    
                
                case 'B':
                    //Move-se na diagonal.
                    //Caso escolha Bispo - Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita.
                    //Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
                    int ncasas = 5;
                    moverbispo1(ncasas);              
                    break;

                case 'b':
                    moverbispo2(5);
                    break;

                //Movimentação da Rainha
                case 'D':
                    i = 0;
                    // Move-se em todas as direções.
                    // Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
                    do
                    {
                        printf("Esquerda\n");
                        i++;
                    } while (i <= 8);                
                    break;
                case 'd':
                    moverrainha(8);
                    break;
                
                case 'C':
                case 'c':
                    int c_movimento = 1;

                    while (c_movimento == 1)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("Baixo\n");
                        }
                        printf("Esquerda\n");                        
                        c_movimento--;
                    }
                    break;
                                
                default:
                    printf ("Peça incorreta\n\n");
                    printf(" Fim de Jogo!\n");
                    break;
            }
            break;
        case 2:
            printf("\n\n\n");
            printf("\n\n========== TUTORIAL ==========\n\n");
            printf("1 - Escolha a peça que você queira movimentar.\n");
            printf("   Abreviações das peças:\n");
            printf("      R: Rei\n");
            printf("      D: Dama (Rainha)\n");
            printf("      T: Torre\n");
            printf("      B: Bispo\n");
            printf("      C: Cavalo\n");
            printf("      P: Peão\n\n");
            printf("2 - Cada peça se move de forma diferente.\n");
            printf("3 - Neste jogo, você poderá testar seus movimentos.\n");
            printf("==============================\n");       
            break;
        
        case 3:
            printf("Saindo do jogo.");
            break;            
        default:

            printf("Escolha errada. ");
            break;
    }


    return 0;
}
