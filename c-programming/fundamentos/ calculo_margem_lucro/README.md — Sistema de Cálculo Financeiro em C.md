# 💰 Sistema de Cálculo Financeiro em C

<p align="center">
  <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" width="120" alt="Linguagem C">
</p>

<p align="center">
  <strong>Programa simples para calcular faturamento, imposto, custo, lucro e margem.</strong>
</p>

---

## 📚 Sobre o projeto

Este projeto foi desenvolvido em **linguagem C** para praticar conceitos básicos de programação.

O programa recebe valores de:

- 💵 Faturamento
- 💸 Custo
- 📊 Imposto

A partir desses valores, o sistema calcula:

- Taxa de imposto
- Lucro
- Margem de lucro
- Se a margem mínima foi atingida

---

## 🧠 Como funciona

O programa começa definindo os valores:

```c
faturamento = 2000;
custo = 1000;
imposto = 10.0 / 100.0;
```

O imposto é representado como decimal.

Por exemplo:

```text
10% = 10 / 100 = 0.10
```

---

## 💰 Cálculo do imposto

A taxa de imposto é calculada multiplicando o faturamento pela porcentagem do imposto:

```c
float taxa_imposto = faturamento * imposto;
```

Com os valores do projeto:

```text
2000 × 0.10 = 200
```

Portanto:

```text
Taxa de imposto = R$ 200,00
```

---

## 📈 Cálculo do lucro

O lucro é calculado retirando o custo e o imposto do faturamento:

```c
float lucro = faturamento - custo - taxa_imposto;
```

Com os valores utilizados:

```text
2000 - 1000 - 200 = 800
```

Resultado:

```text
Lucro = R$ 800,00
```

---

## 📊 Cálculo da margem

A margem representa quanto do faturamento ficou como lucro.

```c
float margem = lucro / faturamento;
```

Neste exemplo:

```text
800 / 2000 = 0.40
```

Convertendo para porcentagem:

```c
margem * 100
```

Resultado:

```text
Margem = 40%
```

---

## ✅ Verificação da margem

O programa verifica se a margem atingiu pelo menos **40%**:

```c
bool margem_atingida = margem >= 0.40;
```

Depois utiliza uma estrutura condicional:

```c
if (margem_atingida) {
    printf("Sua margem foi atingida\n");
}
else {
    printf("Margem nao atingida\n");
}
```

### 🔎 Resultado

Como a margem calculada é exatamente `40%`, a condição:

```c
margem >= 0.40
```

é verdadeira.

Portanto, o programa informa:

```text
Sua margem foi atingida
```

---

## 🖥️ Exemplo de execução

```text
Seu lucro foi de 800.00
Sua taxa de imposto foi de 200.00
Sua margem foi de 40.00%
Sua margem foi atingida
```

---

## 🛠️ Conceitos utilizados

Este projeto pratica alguns fundamentos importantes da linguagem C:

| Conceito | Utilização |
|---|---|
| `float` | Armazenar valores financeiros |
| `bool` | Armazenar verdadeiro ou falso |
| `if` | Verificar uma condição |
| `else` | Executar outra opção |
| `printf()` | Exibir informações |
| Operações matemáticas | Calcular imposto, lucro e margem |
| Variáveis | Armazenar os dados do programa |

---

## 📐 Fórmulas utilizadas

### Imposto

```text
Imposto = Faturamento × Taxa de imposto
```

### Lucro

```text
Lucro = Faturamento - Custo - Imposto
```

### Margem

```text
Margem = Lucro ÷ Faturamento
```

### Margem em porcentagem

```text
Margem (%) = Margem × 100
```

---

## 📂 Estrutura

```text
.
├── main.c
└── README.md
```

---

## 🚀 Como executar

Compile o programa utilizando o GCC:

```bash
gcc main.c -o financeiro
```

Depois execute:

```bash
./financeiro
```

---

## 🎯 Objetivo

O objetivo deste projeto é praticar **lógica de programação em C**, principalmente:

- Declaração de variáveis
- Tipos `float` e `bool`
- Operações matemáticas
- Cálculo de porcentagens
- Estruturas condicionais
- Entrada e saída de dados

---

## 👨‍💻 Tecnologias

<p align="center">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" width="80" alt="C">
</p>

**Linguagem:** C  
**Compilador:** GCC  
**Sistema:** Linux / Windows / macOS
