#include <stdio.h>

// FUNÇÕES RECURSIVAS

void mover_torre_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    
    printf("Casa %d: Direita\n", 6 - casas_restantes);
    
    mover_torre_recursivo(casas_restantes - 1);
}

void mover_rainha_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    
    printf("Casa %d: Esquerda\n", 9 - casas_restantes);
    
    mover_rainha_recursivo(casas_restantes - 1);
}

void mover_bispo_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    
    printf("Casa %d: Cima, Direita\n", 6 - casas_restantes);
    
    mover_bispo_recursivo(casas_restantes - 1);
}


int main() {
    
    // TORRE (RECURSIVIDADE)
    
    printf("--- MOVIMENTO DA TORRE (RECURSIVIDADE) ---\n");
    const int casas_torre = 5;
    mover_torre_recursivo(casas_torre);
    printf("Torre concluiu o movimento de %d casas para a direita.\n", casas_torre);
    printf("\n");

    
    // BISPO (RECURSIVIDADE)
    
    printf("--- MOVIMENTO DO BISPO (RECURSIVIDADE) ---\n");
    const int casas_bispo = 5;
    mover_bispo_recursivo(casas_bispo);
    printf("Bispo concluiu o movimento de %d casas na diagonal.\n", casas_bispo);
    printf("\n");

    // BISPO (LOOPS ANINHADOS)
    printf("--- MOVIMENTO DO BISPO (LOOPS ANINHADOS) ---\n");
    const int max_movimento = 5;
    int casa_atual = 0; 
    
    for (int y = 1; y <= max_movimento; y++) {
        for (int x = 1; x <= 1; x++) { 
            casa_atual++;
            printf("Casa %d: Cima, Direita\n", casa_atual);
        }
    }
    printf("Bispo concluiu o movimento com loops aninhados.\n");
    printf("\n");

    
    // RAINHA (RECURSIVIDADE)
    
    printf("--- MOVIMENTO DA RAINHA (RECURSIVIDADE) ---\n");
    const int casas_rainha = 8;
    mover_rainha_recursivo(casas_rainha);
    printf("Rainha concluiu o movimento de %d casas para a esquerda.\n", casas_rainha);
    printf("\n");

    
    // CAVALO (LOOPS ANINHADOS COMPLEXOS)
    
    const int mov_vertical = 2; 
    const int mov_horizontal = 1; 
    int total_passos = 0;
    
    printf("--- MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) ---\n");
    
    for (int i = 0; i < mov_vertical; i++) {
        total_passos++;
        printf("Passo %d: Cima\n", total_passos);
        
        if (i < mov_vertical - 1) {
            continue; 
        }
    }
    
    for (int j = 0; j < 2; j++) {
        if (j >= mov_horizontal) {
            break; 
        }
        total_passos++;
        printf("Passo %d: Direita\n", total_passos);
    }
    
    printf("Cavalo concluiu o movimento em 'L'.\n");
    printf("\n");
    
    return 0;
}