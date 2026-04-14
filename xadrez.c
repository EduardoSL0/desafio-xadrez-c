/*
 * Desafio: Nível Novato + Aventureiro - Movimentando as Peças do Xadrez
 * Este programa simula o movimento de quatro peças de xadrez:
 * - Torre: 5 casas para a direita (usando for)
 * - Bispo: 5 casas na diagonal para cima/direita (usando while)
 * - Rainha: 8 casas para a esquerda (usando do-while)
 * - Cavalo: 2 casas para baixo + 1 casa para esquerda (usando for + while alinhados)
 */

#include <stdio.h>

int main() {
    /*
     * MOVIMENTO DA TORRE - 5 casas para a DIREITA
     * Estrutura utilizada: FOR
     * ============================================
     * A Torre move-se em linha reta horizontalmente ou verticalmente.
     * Neste caso, simulamos o movimento horizontal para a direita.
     */
    
    // Definindo o número de casas que a Torre irá se mover
    int casas_torre = 5;
    
    printf("=== MOVIMENTO DA TORRE ===\n");
    
    // Loop for: ideal quando sabemos previamente quantas repetições serão necessárias
    // A variável 'i' controla a contagem das casas percorridas
    for (int i = 1; i <= casas_torre; i++) {
        // Imprime a direção do movimento a cada casa percorrida
        printf("Direita\n");
    }
    
    printf("\n"); // Linha em branco para separar os movimentos
    
    /*
     * ============================================
     * MOVIMENTO DO BISPO - 5 casas na DIAGONAL (Cima + Direita)
     * Estrutura utilizada: WHILE
     * ============================================
     * O Bispo move-se na diagonal. Para representar isso,
     * imprimimos a combinação de duas direções a cada casa.
     */
    
    // Definindo o número de casas que o Bispo irá se mover
    int casas_bispo = 5;
    
    // Variável de controle para o loop while
    int contador_bispo = 1;
    
    printf("=== MOVIMENTO DO BISPO ===\n");
    
    // Loop while: executa enquanto a condição for verdadeira
    // Útil quando a condição de parada depende de uma verificação
    while (contador_bispo <= casas_bispo) {
        // Imprime as duas direções combinadas (movimento diagonal)
        printf("Cima Direita\n");
        
        // Incrementa o contador para avançar para a próxima casa
        contador_bispo++;
    }
    
    printf("\n"); // Linha em branco para separar os movimentos
    
    /*
     * ============================================
     * MOVIMENTO DA RAINHA - 8 casas para a ESQUERDA
     * Estrutura utilizada: DO-WHILE
     * ============================================
     * A Rainha move-se em todas as direções.
     * Neste caso, simulamos o movimento horizontal para a esquerda.
     */
    
    // Definindo o número de casas que a Rainha irá se mover
    int casas_rainha = 8;
    
    // Variável de controle para o loop do-while
    int contador_rainha = 1;
    
    printf("=== MOVIMENTO DA RAINHA ===\n");
    
    // Loop do-while: garante que o bloco seja executado pelo menos uma vez
    // A verificação da condição ocorre ao final de cada iteração
    do {
        // Imprime a direção do movimento
        printf("Esquerda\n");
        
        // Incrementa o contador
        contador_rainha++;
        
    } while (contador_rainha <= casas_rainha);
    
    printf("\n"); // Linha em branco para separar dos movimentos anteriores
    
    /*
     * ============================================
     * MOVIMENTO DO CAVALO - Movimento em "L"
     * Estrutura utilizada: LOOPS ANINHADOS (for + while)
     * ============================================
     * O Cavalo move-se em "L": duas casas em uma direção e uma casa 
     * perpendicularmente. Neste caso: 2 casas BAIXO + 1 casa ESQUERDA.
     * Usamos loops aninhados: for (externo) + while (interno)
     */
    
    // Definição das constantes do movimento do Cavalo
    int casas_baixo = 2;       // Primeira parte do "L": 2 casas para baixo
    int casas_esquerda = 1;    // Segunda parte do "L": 1 casa para esquerda
    int movimentos_cavalo = 1; // Quantidade de movimentos em "L" a simular
    
    printf("=== MOVIMENTO DO CAVALO ===\n");
    
    // LOOP EXTERNO (for): Controla quantos movimentos completos em "L" serão feitos
    for (int movimento = 1; movimento <= movimentos_cavalo; movimento++) {
        
        // Variável de controle para o loop interno (while)
        int etapa = 1;
        
        // LOOP INTERNO (while): Controla cada etapa do movimento em "L"
        // Total de etapas = casas_baixo + casas_esquerda = 2 + 1 = 3
        while (etapa <= (casas_baixo + casas_esquerda)) {
            
            // Verifica qual etapa do movimento estamos executando
            if (etapa <= casas_baixo) {
                // Etapas 1 e 2: Movimento para BAIXO
                printf("Baixo\n");
            } else {
                // Etapa 3: Movimento para ESQUERDA
                printf("Esquerda\n");
            }
            
            // Incrementa a etapa para avançar no loop interno
            etapa++;
        }
    }
    
    return 0; // Indica que o programa terminou com sucesso
}
