# ♟️ Desafio: Movimentando as Peças do Xadrez

&gt; **Níveis:** Novato + Aventureiro  
&gt; **Linguagem:** C  
&gt; **Tema:** Estruturas de Repetição (for, while, do-while) + Loops Aninhados

---

## 📋 Descrição do Projeto

Este projeto simula o movimento de **quatro** peças de xadrez utilizando diferentes estruturas de repetição em linguagem C:

- **Nível Novato:** Torre, Bispo e Rainha com loops simples
- **Nível Aventureiro:** Cavalo com **loops aninhados** (for + while) para movimento em "L"

---

## 🎯 Funcionalidades

### Nível Novato
| Peça | Movimento Simulado | Estrutura | Casas |
|------|-------------------|-----------|-------|
| **Torre** | 5 casas para a **Direita** | `for` | 5 |
| **Bispo** | 5 casas na **Diagonal** (Cima + Direita) | `while` | 5 |
| **Rainha** | 8 casas para a **Esquerda** | `do-while` | 8 |

### Nível Aventureiro 🆕
| Peça | Movimento Simulado | Estrutura | Detalhes |
|------|-------------------|-----------|----------|
| **Cavalo** | Movimento em **"L"** | `for` + `while` (alinhados) | 2 casas Baixo + 1 casa Esquerda |

---

## 🐎 Sobre o Movimento do Cavalo

O Cavalo é a única peça do xadrez que se move em **"L"**:
- **Duas casas** em uma direção (horizontal ou vertical)
- **Uma casa** perpendicularmente

### Implementação com Loops Aninhados

```c
// LOOP EXTERNO (for): Controla os movimentos completos
for (int movimento = 1; movimento &lt;= movimentos_cavalo; movimento++) {
    
    int etapa = 1;
    
    // LOOP INTERNO (while): Controla cada etapa do "L"
    while (etapa &lt;= (casas_baixo + casas_esquerda)) {
        
        if (etapa &lt;= casas_baixo) {
            printf("Baixo\n");      // Etapas 1 e 2
        } else {
            printf("Esquerda\n");   // Etapa 3
        }
        
        etapa++;
    }
}
