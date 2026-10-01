<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg" alt="Logo da linguagem C" width="120"/>
</p>

<h1 align="center">🌐 Redes em C</h1>

<p align="center">
  Laboratório de estudos de <strong>redes de computadores utilizando a linguagem C</strong>.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Linguagem-C-blue.svg" alt="Linguagem C"/>
  <img src="https://img.shields.io/badge/Plataforma-Linux-informational.svg" alt="Plataforma Linux"/>
  <img src="https://img.shields.io/badge/Protocolo-TCP%2FIPv4-success.svg" alt="Protocolo TCP/IPv4"/>
  <img src="https://img.shields.io/badge/Status-Em%20desenvolvimento-yellow.svg" alt="Status"/>
</p>

O objetivo deste diretório é praticar comunicação de rede em Linux utilizando **POSIX Sockets**, começando pela criação de sockets e evoluindo para uma comunicação TCP entre cliente e servidor.

> ⚠️ **Ambiente educacional:** os testes deste laboratório devem ser realizados somente em máquinas próprias ou ambientes autorizados. Os exemplos de comunicação utilizam `127.0.0.1` para manter os testes localmente.

---

## 📁 Estrutura do laboratório

```text
redes-c/
│
├── sockets/
│   ├── socket_basico.c
│   └── README.md
│
├── tcp-client/
│   └── cliente.c
│
├── tcp-server/
│   └── servidor.c
│
└── executar.sh
```

---

## 🔌 1. Sockets

**Diretório:** `sockets/`
**Arquivo:** `socket_basico.c`

Este é o primeiro exercício do laboratório. O programa demonstra como criar um socket utilizando:

```c
socket(AF_INET, SOCK_STREAM, 0);
```

### Conceitos

| Elemento | Descrição |
|---|---|
| `AF_INET` | IPv4 |
| `SOCK_STREAM` | TCP |
| `socket()` | Criação do socket |
| `close()` | Fechamento do socket |

**Fluxo:**

```text
socket() → verificação de erro → socket criado → close()
```

---

## 💻 2. TCP Client

**Diretório:** `tcp-client/`
**Arquivo:** `cliente.c`

O cliente utiliza um socket TCP para tentar estabelecer uma conexão com um servidor.

```text
IP:    127.0.0.1
Porta: 8080
```

**Fluxo:**

```text
socket() → configuração do endereço → connect() → comunicação → close()
```

`127.0.0.1` representa a própria máquina, permitindo realizar os testes localmente.

---

## 🖥️ 3. TCP Server

**Diretório:** `tcp-server/`
**Arquivo:** `servidor.c`

O servidor cria um socket TCP, associa o socket à porta `8080` e aguarda conexões.

**Fluxo:**

```text
socket() → bind() → listen() → accept() → comunicação → close()
```

| Função | Objetivo |
|---|---|
| `socket()` | Cria o socket |
| `bind()` | Associa o socket a um endereço e porta |
| `listen()` | Coloca o servidor aguardando conexões |
| `accept()` | Aceita uma conexão |
| `close()` | Fecha o socket |

---

## ⚙️ 4. Script Bash

**Arquivo:** `executar.sh`

O script automatiza a compilação e execução do laboratório:

```bash
./executar.sh
```

**O script:**

1. Compila o servidor
2. Verifica se a compilação foi realizada
3. Compila o cliente
4. Inicia o servidor
5. Aguarda o servidor ficar disponível
6. Inicia o cliente
7. Finaliza o processo do servidor

```text
              executar.sh
                   │
            ┌──────┴──────┐
            ↓             ↓
         servidor       cliente
            │             │
            └──── TCP ────┘
              127.0.0.1
                :8080
```

---

## 🛠️ Compilação manual

**Servidor:**

```bash
gcc tcp-server/servidor.c -o tcp-server/servidor
```

**Cliente:**

```bash
gcc tcp-client/cliente.c -o tcp-client/cliente
```

---

## ▶️ Executando manualmente

Primeiro execute o servidor:

```bash
./tcp-server/servidor
```

Depois, em outro terminal:

```bash
./tcp-client/cliente
```

---

## 🚀 Executando com o script

```bash
chmod +x executar.sh
./executar.sh
```

---

## 📚 Conceitos aprendidos

<table>
<tr>
<td>

- Linguagem C
- Linux
- TCP/IP
- IPv4
- POSIX Sockets
- File descriptors

</td>
<td>

- Cliente TCP
- Servidor TCP
- Portas
- Endereços IP
- Bash
- GCC

</td>
<td>

- `socket()`
- `connect()`
- `bind()`
- `listen()`
- `accept()`
- `send()` / `recv()` / `close()`

</td>
</tr>
</table>

---

## 📈 Evolução do laboratório

```text
01 ── Criar socket
       ↓
02 ── Configurar endereço
       ↓
03 ── Criar TCP Client
       ↓
04 ── Criar TCP Server
       ↓
05 ── Estabelecer conexão
       ↓
06 ── Enviar e receber dados
       ↓
07 ── Automatizar com Bash
```

---

## 🎯 Próximos estudos

- Comunicação bidirecional com `send()` e `recv()`
- Servidor capaz de atender múltiplos clientes
- Tratamento de erros de conexão
- Timeouts
- Comunicação utilizando mensagens estruturadas
- Introdução a sockets UDP
- Comparação entre TCP e UDP
- Logs das conexões

---

## 🎓 Objetivo

Este laboratório faz parte dos meus estudos de:

**Programação em C → Redes de Computadores → Linux → Segurança da Informação**

O foco é compreender os fundamentos técnicos antes de avançar para projetos mais complexos de redes e segurança.

<p align="center">Feito como parte de um laboratório de estudos em C e redes.</p>
