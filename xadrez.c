/*
 * Desafio: Nível Novato + Aventureiro + MESTRE - Movimentando as Peças do Xadrez
 * 
 * NÍVEL NOVATO/AVENTUREIRO (original):
 * - Torre: 5 casas para a direita (usando for)
 * - Bispo: 5 casas na diagonal para cima/direita (usando while)
 * - Rainha: 8 casas para a esquerda (usando do-while)
 * - Cavalo: 2 casas para baixo + 1 casa para esquerda (usando for + while alinhados)
 * 
 * NÍVEL MESTRE (novo):
 * - Torre: recursividade
 * - Bispo: recursividade + loops aninhados
 * - Rainha: recursividade
 * - Cavalo: loops complexos com continue/break (2 cima + 1 direita)
 */

#include <stdio.h>

// ==================== FUNÇÕES RECURSIVAS (NÍVEL MESTRE) ====================

void moverTorreRecursivo(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverRainhaRecursiva(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursiva(casas - 1);
}

// ==================== MAIN ====================

int main() {
    // Definindo o número de casas
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    
    // ============================================================
    // NÍVEL NOVATO/AVENTUREIRO - Código original mantido
    // ============================================================
    
    printf("========================================\n");
    printf("NÍVEL NOVATO/AVENTUREIRO\n");
    printf("========================================\n\n");
    
    // TORRE - for
    printf("=== TORRE (for) ===\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // BISPO - while
    printf("=== BISPO (while) ===\n");
    int contador_bispo = 1;
    while (contador_bispo <= casas_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }
    printf("\n");
    
    // RAINHA - do-while
    printf("=== RAINHA (do-while) ===\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);
    printf("\n");
    
    // CAVALO - for + while aninhados (2 baixo + 1 esquerda)
    printf("=== CAVALO (for + while) ===\n");
    int casas_baixo = 2;
    int casas_esquerda = 1;
    for (int movimento = 1; movimento <= 1; movimento++) {
        int etapa = 1;
        while (etapa <= (casas_baixo + casas_esquerda)) {
            if (etapa <= casas_baixo) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
            etapa++;
        }
    }
    printf("\n");
    
    // ============================================================
    // NÍVEL MESTRE - Novo código
    // ============================================================
    
    printf("========================================\n");
    printf("NÍVEL MESTRE\n");
    printf("========================================\n\n");
    
    // TORRE - recursividade
    printf("=== TORRE (recursivo) ===\n");
    moverTorreRecursivo(casas_torre);
    printf("\n");
    
    // BISPO - loops aninhados (for externo vertical, interno horizontal)
    printf("=== BISPO (loops aninhados) ===\n");
    for (int v = 0; v < casas_bispo; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }
    printf("\n");
    
    // BISPO - recursivo também
    printf("=== BISPO (recursivo) ===\n");
    moverBispoRecursivo(casas_bispo);
    printf("\n");
    
    // RAINHA - recursividade
    printf("=== RAINHA (recursivo) ===\n");
    moverRainhaRecursiva(casas_rainha);
    printf("\n");
    
    // CAVALO - loops complexos (2 cima + 1 direita com continue)
    printf("=== CAVALO (loops complexos) ===\n");
    int cima = 2, direita = 1;
    for (int i = 0; i < cima + direita; i++) {
        if (i < cima) {
            printf("Cima\n");
            continue;
        }
        printf("Direita\n");
    }
    
    return 0;
}
