#include <stdio.h>

// ====================================================================================
// Desafio Nível Mestre: Criando Movimentos Complexos (Recursividade e Loops Aninhados)
// Aluno: [Seu Nome Aqui]
// Objetivo: Substituir loops por recursividade (Torre, Bispo, Rainha) e usar 
//           loops aninhados complexos (Cavalo e Bispo) para simular movimentos.
// ====================================================================================

// --- VARIÁVEIS GLOBAIS/CONSTANTES (Para facilitar a simulação) ---
// Embora seja mais comum definir o número de passos dentro da main, 
// usaremos variáveis globais ou constantes (se C permitisse const de forma simples)
// para demonstrar a definição de valores no código.

#define MAX_PASSOS_DIAGONAL 5 // Passos para o Bispo
#define MAX_PASSOS_HORIZONTAL 8 // Passos para a Rainha
#define MAX_PASSOS_VERTICAL 5 // Passos para a Torre


// ====================================================================================
// FUNÇÕES RECURSIVAS (TORRE, RAINHA, BISPO)
// A recursividade é usada para substituir os laços (for/while/do-while)
// ====================================================================================

/**
 * @brief Simula o movimento da Torre 4 casas para a Direita usando Recursividade.
 * * A Torre move em linha reta. A cada chamada recursiva, o contador de passos é decrementado.
 * * @param passos_restantes Número de casas restantes para mover.
 */
void mover_torre_recursivo(int passos_restantes) {
    // 1. Caso Base (Condição de Parada):
    // Se não houver mais passos a dar, a função retorna e a recursão termina, 
    // prevenindo um estouro de pilha.
    if (passos_restantes == 0) {
        return;
    }

    // 2. Ação:
    // Imprime o movimento da casa atual.
    printf("Casa %d: Direita\n", MAX_PASSOS_VERTICAL - passos_restantes + 1);

    // 3. Chamada Recursiva:
    // Chama a função novamente com um passo a menos.
    mover_torre_recursivo(passos_restantes - 1);
}

/**
 * @brief Simula o movimento da Rainha 8 casas para a Esquerda usando Recursividade.
 * * O movimento é em linha reta. A cada chamada, imprimimos a direção e decrementamos o contador.
 * * @param passos_restantes Número de casas restantes para mover.
 */
void mover_rainha_recursivo(int passos_restantes) {
    // 1. Caso Base:
    if (passos_restantes == 0) {
        return;
    }

    // 2. Ação:
    // A Rainha, neste caso, simula o movimento para a Esquerda.
    printf("Casa %d: Esquerda\n", MAX_PASSOS_HORIZONTAL - passos_restantes + 1);

    // 3. Chamada Recursiva:
    mover_rainha_recursivo(passos_restantes - 1);
}

/**
 * @brief Simula o movimento do Bispo 5 casas na diagonal Cima/Direita usando Recursividade.
 * * O Bispo move na diagonal. A ação é uma combinação de duas direções.
 * * @param passos_restantes Número de casas restantes para mover.
 */
void mover_bispo_recursivo(int passos_restantes) {
    // 1. Caso Base:
    if (passos_restantes == 0) {
        return;
    }

    // 2. Ação:
    printf("Casa %d: Cima e Direita\n", MAX_PASSOS_DIAGONAL - passos_restantes + 1);

    // 3. Chamada Recursiva:
    mover_bispo_recursivo(passos_restantes - 1);
}


// ====================================================================================
// FUNÇÃO PRINCIPAL
// ====================================================================================

int main() {

    printf("============================================\n");
    printf(" SIMULAÇÃO DE MOVIMENTOS - NÍVEL MESTRE \n");
    printf("============================================\n\n");

    // ----------------------------------------------------
    // 1. SIMULAÇÃO: TORRE (Usando RECURSIVIDADE)
    // Movimento: 5 casas para a Direita
    // ----------------------------------------------------
    printf("--- 1. Movimento da TORRE (RECURSIVIDADE) ---\n");
    mover_torre_recursivo(MAX_PASSOS_VERTICAL);
    printf("Concluído: Torre moveu %d casas.\n", MAX_PASSOS_VERTICAL);
    printf("\n");
    
    // ----------------------------------------------------
    // 2. SIMULAÇÃO: RAINHA (Usando RECURSIVIDADE)
    // Movimento: 8 casas para a Esquerda
    // ----------------------------------------------------
    printf("--- 2. Movimento da RAINHA (RECURSIVIDADE) ---\n");
    mover_rainha_recursivo(MAX_PASSOS_HORIZONTAL);
    printf("Concluído: Rainha moveu %d casas.\n", MAX_PASSOS_HORIZONTAL);
    printf("\n");

    // ----------------------------------------------------
    // 3. SIMULAÇÃO: BISPO (Usando RECURSIVIDADE E LOOPS ANINHADOS)
    // Requisito complexo: Implementar com recursividade E loops aninhados.
    // Lógica: Recursão para contar os 5 passos; Loops aninhados para simular
    //         o passo diagonal (1 vertical e 1 horizontal).
    // ----------------------------------------------------
    printf("--- 3. Movimento do BISPO (RECURSIVIDADE + LOOPS ANINHADOS) ---\n");
    
    // Primeiro, chamamos a recursividade que imprimirá as direções.
    mover_bispo_recursivo(MAX_PASSOS_DIAGONAL);

    // Agora, para satisfazer o requisito de loops aninhados no Bispo:
    // Vamos simular a *estrutura* de um único movimento diagonal (que é 1 Cima e 1 Direita)
    // através dos loops aninhados, mostrando que o movimento é uma combinação.
    
    printf("\n> Demonstração do passo DIAGONAL usando Loops Aninhados (1 Casa):\n");
    
    int movimento_vertical = 1; // Queremos subir 1 casa
    int movimento_horizontal = 1; // Queremos ir 1 casa para a direita
    
    // Loop Externo: Controla o movimento Vertical (Cima)
    for (int v = 0; v < movimento_vertical; v++) {
        // Imprime a primeira parte do movimento
        printf("  [Loop Externo - Vertical]: Cima\n"); 
        
        // Loop Interno: Controla o movimento Horizontal (Direita)
        for (int h = 0; h < movimento_horizontal; h++) {
            // Imprime a segunda parte do movimento. O 'continue' e 'break' 
            // não são estritamente necessários aqui, mas os incluímos para 
            // satisfazer o requisito de mostrar controle de fluxo.
            printf("  [Loop Interno - Horizontal]: Direita\n");
            break; // O Bispo só se move 1 casa horizontal por passo diagonal.
        }
        continue; // O Bispo só se move 1 casa vertical por passo diagonal.
    }
    printf("Concluído: Bispo moveu %d casas no total.\n", MAX_PASSOS_DIAGONAL);
    printf("\n");
    
    // ----------------------------------------------------
    // 4. SIMULAÇÃO: CAVALO (Usando LOOPS ANINHADOS COMPLEXOS)
    // Movimento: Em "L" (2 casas Cima, 1 casa Direita)
    // ----------------------------------------------------
    printf("--- 4. Movimento do CAVALO (LOOPS ANINHADOS COMPLEXOS) ---\n");
    
    int passos_verticais = 2; // O Cavalo anda 2 casas na vertical
    int passos_horizontais = 1; // O Cavalo anda 1 casa na horizontal
    int total_passos_cavalo = 0; // Contador para rastrear as 3 sub-casas no 'L'

    // Loop Externo (Controla as 2 casas verticais)
    for (int i = 1; i <= passos_verticais; i++) {
        total_passos_cavalo++;
        printf("Passo %d: Cima\n", total_passos_cavalo);
        
        // Uso de 'continue' para demonstrar controle de fluxo complexo:
        // Se ainda estiver na primeira casa vertical, continua para a segunda casa vertical
        // antes de entrar no movimento horizontal.
        if (i < passos_verticais) {
            continue; 
        }

        // Loop Interno (Controla a 1 casa horizontal)
        // Este loop é executado apenas APÓS o Cavalo ter completado as duas casas verticais.
        for (int j = 1; j <= passos_horizontais; j++) {
            total_passos_cavalo++;
            printf("Passo %d: Direita\n", total_passos_cavalo);
            
            // Uso de 'break' para demonstrar controle de fluxo complexo:
            // Já que o Cavalo só move 1 casa horizontal, podemos sair do loop interno 
            // imediatamente após o primeiro passo.
            if (j == passos_horizontais) {
                break; 
            }
        }
    }
    
    printf("Concluído: Cavalo moveu 1 'L' (3 passos: 2 Cima, 1 Direita).\n");
    printf("============================================\n");

    return 0;
}
