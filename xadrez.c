/*
 * Desafio: Nível Mestre - Movimentando as Peças do Xadrez
 * 
 * Evolução do código anterior (Novato + Aventureiro):
 * - Torre: for → recursividade
 * - Bispo: while → recursividade + loops aninhados
 * - Rainha: do-while → recursividade  
 * - Cavalo: for+while aninhados → loops complexos com continue/break
 */

#include <stdio.h>

// ============================================================
// FUNÇÕES RECURSIVAS (substituem os loops simples)
// ============================================================

void moverTorre(int casas) {
    // Caso base: parar quando não há mais casas
    if (casas <= 0) return;
    
    printf("Direita\n");
    
    // Chamada recursiva: move uma casa a menos
    moverTorre(casas - 1);
}

void moverBispoRecursivo(int casas) {
    // Caso base
    if (casas <= 0) return;
    
    printf("Cima Direita\n");
    
    // Chamada recursiva
    moverBispoRecursivo(casas - 1);
}

void moverRainha(int casas) {
    // Caso base
    if (casas <= 0) return;
    
    printf("Esquerda\n");
    
    // Chamada recursiva
    moverRainha(casas - 1);
}

// ============================================================
// MAIN
// ============================================================

int main() {
    // Definição das constantes (valores fixos no código)
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    
    /*
     * MOVIMENTO DA TORRE - Recursividade
     * ===================================
     * Substitui o loop for por função recursiva
     */
    printf("=== TORRE ===\n");
    moverTorre(casas_torre);
    printf("\n");
    
    /*
     * MOVIMENTO DO BISPO - Loops Aninhados
     * =====================================
     * Loop externo (vertical): controla movimento para Cima
     * Loop interno (horizontal): controla movimento para Direita
     */
    printf("=== BISPO (Loops Aninhados) ===\n");
    for (int vertical = 0; vertical < casas_bispo; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }
    printf("\n");
    
    /*
     * MOVIMENTO DO BISPO - Recursividade
     * ===================================
     * Mesmo movimento, implementado com recursão
     */
    printf("=== BISPO (Recursivo) ===\n");
    moverBispoRecursivo(casas_bispo);
    printf("\n");
    
    /*
     * MOVIMENTO DA RAINHA - Recursividade
     * ====================================
     * Substitui o do-while por função recursiva
     */
    printf("=== RAINHA ===\n");
    moverRainha(casas_rainha);
    printf("\n");
    
    /*
     * MOVIMENTO DO CAVALO - Loops Complexos
     * ======================================
     * Agora: 2 casas para CIMA + 1 casa para DIREITA
     * Usa um único loop com continue para controlar o fluxo
     */
    printf("=== CAVALO ===\n");
    
    int casas_cima = 2;
    int casas_direita = 1;
    int total_passos = casas_cima + casas_direita;
    
    // Loop com múltiplas variáveis e condições
    for (int passo = 0; passo < total_passos; passo++) {
        
        // Se ainda estiver nas casas de subida
        if (passo < casas_cima) {
            printf("Cima\n");
            continue;  // Pula para próxima iteração
        }
        
        // Caso contrário, move para direita
        printf("Direita\n");
    }
    
    return 0;
}
