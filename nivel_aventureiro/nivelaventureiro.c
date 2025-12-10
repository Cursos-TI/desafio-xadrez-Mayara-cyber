#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída (necessária para usar printf)

// ====================================================================================
// Desafio Nível Novato: Movimentando as Peças do Xadrez
// Tema: Aplicação Prática das Estruturas de Repetição (for, while, do-while) em C
// Aluno: [Seu Nome Aqui]
// Matéria: [Nome da Matéria Aqui]
// Objetivo: Simular o movimento de três peças de xadrez, utilizando uma estrutura 
//           de repetição diferente para cada uma (um para cada peça).
// ====================================================================================

int main() {
    // A função 'main' é o ponto de partida de todo programa em C. O código será 
    // executado em sequência a partir deste ponto.
    
    // ----------------------------------------------------
    // 1. SIMULAÇÃO: MOVIMENTO DA TORRE (USANDO FOR)
    // Requisito: Mover 5 casas para a DIREITA (Linha Reta: horizontal ou vertical)
    // Estrutura Usada: 'for'
    // ----------------------------------------------------
    
    // Variável que armazena o número total de casas que a Torre deve percorrer.
    // Este valor é fixo (5), conforme o requisito do desafio.
    int casas_torre = 5; 
    
    printf("--- 1. Simulação da TORRE (Usando FOR) ---\n");
    
    // O laço 'for' (para) é escolhido por sabermos *exatamente* quantas vezes 
    // a repetição deve ocorrer (5 vezes). 
    //
    // - Inicialização (int i = 1;): Cria um contador 'i' e o inicia em 1.
    // - Condição (i <= casas_torre;): O laço continua enquanto 'i' for menor ou igual a 5.
    // - Incremento (i++): Aumenta o valor de 'i' em 1 a cada repetição.
    for (int i = 1; i <= casas_torre; i++) {
        // 'printf' imprime a direção do movimento (Direita) a cada passo/casa percorrida.
        printf("Casa %d: Direita\n", i); 
    }
    
    // Mensagem de conclusão da simulação da Torre.
    printf("Concluído: Torre moveu %d casas para a Direita.\n", casas_torre);
    printf("--------------------------------------------\n\n");
    
    // ----------------------------------------------------
    // 2. SIMULAÇÃO: MOVIMENTO DO BISPO (USANDO WHILE)
    // Requisito: Mover 5 casas na DIAGONAL para CIMA e à DIREITA
    // Estrutura Usada: 'while'
    // ----------------------------------------------------
    
    // Variável que armazena o número total de casas que o Bispo deve percorrer.
    int casas_bispo = 5; 
    // Variável contadora para o laço 'while'. Deve ser inicializada antes do laço.
    int contador_bispo = 0; // Começamos em 0 para contar 5 iterações (0, 1, 2, 3, 4).
    
    printf("--- 2. Simulação do BISPO (Usando WHILE) ---\n");
    
    // O laço 'while' (enquanto) repete o bloco de código *enquanto* a condição 
    // dentro dos parênteses for verdadeira. A condição é verificada *antes* de cada execução.
    while (contador_bispo < casas_bispo) { // Repete enquanto o contador for menor que 5.
        
        // A lógica do movimento na diagonal é simulada imprimindo a combinação das duas direções.
        // Usamos 'contador_bispo + 1' para que a contagem na tela comece em 1.
        printf("Casa %d: Cima e Direita\n", contador_bispo + 1);
        
        // **PASSO CRÍTICO**: Aumenta o contador (incremento). 
        // Este passo garante que a condição 'contador_bispo < casas_bispo' se tornará falsa 
        // eventualmente, impedindo um loop infinito.
        contador_bispo++; 
    }
    
    // Mensagem de conclusão da simulação do Bispo.
    printf("Concluído: Bispo moveu %d casas na diagonal Cima/Direita.\n", casas_bispo);
    printf("--------------------------------------------\n\n");
    
    // ----------------------------------------------------
    // 3. SIMULAÇÃO: MOVIMENTO DA RAINHA (USANDO DO-WHILE)
    // Requisito: Mover 8 casas para a ESQUERDA (Qualquer direção, simulando uma linha reta)
    // Estrutura Usada: 'do-while'
    // ----------------------------------------------------
    
    // Variável que armazena o número total de casas que a Rainha deve percorrer.
    int casas_rainha = 8; 
    // Variável contadora para o laço 'do-while'. Inicializamos em 1.
    int contador_rainha = 1; 
    
    printf("--- 3. Simulação da RAINHA (Usando DO-WHILE) ---\n");
    
    // O laço 'do-while' executa o bloco 'do' (faça) *primeiro* e só depois 
    // verifica a condição no 'while'. Isso garante que o corpo do loop será executado 
    // pelo menos uma vez, independente da condição inicial.
    do {
        // Simulação do movimento em linha reta para a Esquerda.
        printf("Casa %d: Esquerda\n", contador_rainha);
        
        // Incrementa o contador.
        contador_rainha++;
        
    } while (contador_rainha <= casas_rainha); // A condição é verificada *após* a execução do bloco 'do'.
    
    // Mensagem de conclusão da simulação da Rainha.
    printf("Concluído: Rainha moveu %d casas para a Esquerda.\n", casas_rainha);
    printf("--------------------------------------------\n\n");
    
    // Retorna 0 para o sistema operacional, indicando que o programa foi executado com sucesso e sem erros.
    return 0;
}
