## ataque_satoshi_poisson
Calcular a probabilidade de sucesso de um atacante em reverter transações em uma blockchain, conforme paper de Satoshi Nakamoto.

##  Attacker Success Probability in Blockchain (Gambler’s Ruin Model)

Este repositório implementa, em linguagem C++, a função que estima a **probabilidade de sucesso de um atacante** tentando reverter uma transação já incluída na blockchain, utilizando o modelo estatístico descrito no white paper de Satoshi Nakamoto (Bitcoin: A Peer-to-Peer Electronic Cash System, 2008).

---

##  Contexto Teórico

O cálculo baseia-se no modelo de **Caminhada Aleatória Binomial** e no problema estatístico conhecido como **Gambler’s Ruin**. 

Nele, o atacante tenta construir uma cadeia de blocos alternativa e inválida mais rapidamente que a cadeia honesta, visando substituir uma transação legítima por outra fraudulenta (por exemplo, um gasto duplo).

- **p**: probabilidade de a rede honesta encontrar o próximo bloco  
- **q**: probabilidade de o atacante encontrar o próximo bloco  
- **z**: número de blocos de confirmação após a transação original  
- **λ (lambda)**: valor esperado da distribuição de Poisson para o progresso do atacante  
- A fórmula calcula a chance de o atacante alcançar ou ultrapassar a cadeia honesta em algum ponto após `z` blocos de vantagem da rede honesta.
  
## Ao analisarmos alguns resultados, podemos observar que a probabilidade diminui exponencialmente com o aumento de z.

![Texto alternativo da imagem](results.png)

You can reach me at rmilhomem[at]gmail[dot]com or connect on [LinkedIn](https://www.linkedin.com/in/rodolfo-space-force/) for collaborations.
