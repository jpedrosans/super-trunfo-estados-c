# Super Trunfo - Estados (Linguagem C)

# Sobre o Projeto
Implementação de um jogo de Super Trunfo de estados em linguagem C, com foco em práticas iniciais de programação estruturada. 
O projeto será evoluído em etapas futuras para incluir funcionalidades adicionais, como comparação de cartas e lógica de jogo.

# Funcionalidades Atuais
* Cadastro manual de duas cartas (representando estados e cidades).
* Entrada de informações como:

  * Código da carta.
  * Nome da cidade.
  * População.
  * Área em km².
  * PIB em bilhões de reais.
  * Número de pontos turísticos.

* Cálculos automáticos de:
  * **Densidade populacional** (habitantes por km²).
  * **PIB per capita** (reais por habitante).
  
* Exibição formatada dos dados cadastrados.

# Como Executar

1. **Pré-requisitos**:

   * Um compilador C, como GCC.
   * Ambiente de desenvolvimento C configurado (pode ser o terminal ou uma IDE como Code::Blocks, Dev-C++, etc.).

2. **Compilar o Código**:

   gcc main.c - o super_trunfo

3. **Executar o Programa**:
   ./super_trunfo

# Estrutura do Código

* **main.c**: Arquivo principal contendo toda a lógica do programa.
* **Cálculos Incluídos**:

  * Densidade populacional: `população / área`.
  * PIB per capita: `PIB / população`.

## Contribuições

Contribuições são bem-vindas! Para contribuir:
