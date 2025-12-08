#include <stdio.h>

/*
 * ARQUIVO: xadrez.c
 * DESAFIO: Simulação do Movimento de Peças de Xadrez
 * * Este programa simula o movimento de três peças de xadrez (Torre, Bispo e Rainha)
 * utilizando uma estrutura de repetição diferente para cada simulação.
 */

int main() {
    // --- Simulação 1: Movimento da TORRE (Usando 'for') ---
    
    // A Torre deve mover-se 5 casas para a direita.
    const int casas_torre = 5;
    
    printf("==========================================\n");
    printf("1. SIMULACAO DO MOVIMENTO DA TORRE (FOR)\n");
    printf("Movimento: 5 casas para a DIREITA\n");
    printf("==========================================\n");

    // Loop 'for' para repetir o movimento o número de casas desejado
    for (int i = 1; i <= casas_torre; i++) {
        // Imprime a direção a cada casa percorrida
        printf("Casa %d: Direita\n", i);
    }
    
    // -----------------------------------------------------------------

    // --- Simulação 2: Movimento da RAINHA (Usando 'while') ---
    
    // A Rainha deve mover-se 8 casas para a esquerda.
    const int casas_rainha = 8;
    int contador_rainha = 1; // Contador para a repetição 'while'
    
    printf("\n==========================================\n");
    printf("2. SIMULACAO DO MOVIMENTO DA RAINHA (WHILE)\n");
    printf("Movimento: 8 casas para a ESQUERDA\n");
    printf("==========================================\n");

    // Loop 'while' continua enquanto o contador for menor ou igual ao total de casas
    while (contador_rainha <= casas_rainha) {
        // Imprime a direção a cada casa percorrida
        printf("Casa %d: Esquerda\n", contador_rainha);
        
        // Incrementa o contador para a próxima iteração
        contador_rainha++;
    }
    
    // -----------------------------------------------------------------

    // --- Simulação 3: Movimento do BISPO (Usando 'do-while') ---
    
    // O Bispo deve mover-se 5 casas na diagonal para cima e à direita.
    const int casas_bispo = 5;
    int contador_bispo = 1; // Contador para a repetição 'do-while'
    
    printf("\n==========================================\n");
    printf("3. SIMULACAO DO MOVIMENTO DO BISPO (DO-WHILE)\n");
    printf("Movimento: 5 casas na diagonal (Cima, Direita)\n");
    printf("==========================================\n");

    // O loop 'do-while' garante que o bloco de código seja executado pelo menos uma vez
    do {
        // Imprime a combinação de duas direções para representar a diagonal
        printf("Casa %d: Cima, Direita\n", contador_bispo);
        
        // Incrementa o contador para a próxima iteração
        contador_bispo++;
        
    } while (contador_bispo <= casas_bispo); 
    // A condição é verificada no final do loop
    
    printf("\n--- Fim da Simulação ---\n");
    
    return 0;
}