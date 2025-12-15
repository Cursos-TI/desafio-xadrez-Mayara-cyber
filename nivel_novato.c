#include <stdio.h>

int main() {
    
    // TORRE (usando for)
    
    const int casas_torre = 5;
    
    printf("--- MOVIMENTO DA TORRE (FOR) ---\n");
    
    for (int i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }
    
    printf("Torre concluiu o movimento de %d casas para a direita.\n", casas_torre);
    printf("\n");

    
    // BISPO (usando while)
    
    const int casas_bispo = 5;
    int contador_bispo = 0;
    
    printf("--- MOVIMENTO DO BISPO (WHILE) ---\n");
    
    while (contador_bispo < casas_bispo) {
        
        contador_bispo++; 
        
        printf("Casa %d: Cima, Direita\n", contador_bispo);
    }
    
    printf("Bispo concluiu o movimento de %d casas na diagonal.\n", casas_bispo);
    printf("\n");

    
    // RAINHA (usando do-while)
    
    const int casas_rainha = 8;
    int contador_rainha = 0;
    
    printf("--- MOVIMENTO DA RAINHA (DO-WHILE) ---\n");

    do {
        
        contador_rainha++; 
        
        printf("Casa %d: Esquerda\n", contador_rainha);
        
    } while (contador_rainha < casas_rainha);
    
    printf("Rainha concluiu o movimento de %d casas para a esquerda.\n", casas_rainha);
    printf("\n");
    
    return 0;
}