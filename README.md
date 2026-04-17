# ♟️ Desafio: Movimentando as Peças do Xadrez

&gt; **Nível:** Mestre  
&gt; **Linguagem:** C  
&gt; **Tema:** Recursividade + Loops Complexos

---

## 📋 Descrição do Projeto

Este projeto simula o movimento de **quatro** peças de xadrez utilizando técnicas avançadas de programação em C:

- **Recursividade** para Torre, Bispo e Rainha
- **Loops aninhados** para o Bispo (vertical + horizontal)
- **Loops complexos** com `continue`/`break` para o Cavalo

---

## 🎯 Funcionalidades

### Nível Mestre

| Peça | Movimento Simulado | Técnica | Implementação |
|------|-------------------|---------|---------------|
| **Torre** | 5 casas para a **Direita** | Recursividade | Função `moverTorre()` |
| **Bispo** | 5 casas na **Diagonal** (Cima + Direita) | Loops Aninhados | `for` externo (vertical) + `for` interno (horizontal) |
| **Bispo** | 5 casas na **Diagonal** (alternativa) | Recursividade | Função `moverBispoRecursivo()` |
| **Rainha** | 8 casas para a **Esquerda** | Recursividade | Função `moverRainha()` |
| **Cavalo** | Movimento em **"L"** | Loops Complexos | `for` com `continue` (2 cima + 1 direita) |

---

## 🔄 Recursividade

As peças Torre, Bispo e Rainha agora utilizam **funções recursivas** em vez de loops simples:

```c
void moverTorre(int casas) {
    // Caso base: interrompe a recursão
    if (casas &lt;= 0) return;
    
    printf("Direita\n");
    
    // Chamada recursiva com valor decrementado
    moverTorre(casas - 1);
}
