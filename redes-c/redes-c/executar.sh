#!/bin/bash

echo "================================"
echo "   LABORATÓRIO TCP EM C"
echo "================================"

echo "[+] Compilando servidor..."
gcc tcp-server/servidor.c -o tcp-server/servidor

if [ $? -ne 0 ]; then
    echo "[!] Erro ao compilar o servidor."
    exit 1
fi

echo "[+] Compilando cliente..."
gcc tcp-client/cliente.c -o tcp-client/cliente

if [ $? -ne 0 ]; then
    echo "[!] Erro ao compilar o cliente."
    exit 1
fi

echo "[+] Compilação concluída!"
echo

echo "[+] Iniciando servidor..."
./tcp-server/servidor &

SERVIDOR_PID=$!

# Dá tempo para o servidor começar a escutar
sleep 1

echo "[+] Iniciando cliente..."
./tcp-client/cliente

# Encerra o servidor depois que o cliente terminar
kill $SERVIDOR_PID 2>/dev/null

echo
echo "================================"
echo "   LABORATÓRIO FINALIZADO"
echo "================================"
