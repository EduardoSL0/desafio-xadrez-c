#include <stdio.h>

// ============================================================
// FUNÇÕES RECURSIVAS
// ============================================================

// TORRE - Recursivo (Direita)
void moverTorre(int casas) {
    if (casas <= 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// BISPO - Recursivo (Cima + Direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;

    printf("Cima\n");
    printf("Direita\n");

    moverBispoRecursivo(casas - 1);
}

// RAINHA - Recursivo (Esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ============================================================
// MAIN
// ============================================================

int main() {
    // Quantidade de casas (definidas no código)
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // ================= TORRE =================
    printf("=== TORRE ===\n");
    moverTorre(casas_torre);
    printf("\n");

    // ================= BISPO (Loops Aninhados) =================
    printf("=== BISPO (Loops Aninhados) ===\n");

    for (int vertical = 0; vertical < casas_bispo; vertical++) {
        printf("Cima\n");

        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }
    printf("\n");

    // ================= BISPO (Recursivo) =================
    printf("=== BISPO (Recursivo) ===\n");
    moverBispoRecursivo(casas_bispo);
    printf("\n");

    // ================= RAINHA =================
    printf("=== RAINHA ===\n");
    moverRainha(casas_rainha);
    printf("\n");

    // ================= CAVALO =================
    printf("=== CAVALO ===\n");

    int casas_cima = 2;
    int casas_direita = 1;

    for (int i = 0; i < casas_cima; i++) {
        printf("Cima\n");

        // Continua até terminar as 2 casas para cima
        if (i < casas_cima - 1) {
            continue;
        }

        // Loop interno (movimento para direita)
        for (int j = 0; j < casas_direita; j++) {
            printf("Direita\n");
            break; // controle do loop
        }
    }

    return 0;
}
