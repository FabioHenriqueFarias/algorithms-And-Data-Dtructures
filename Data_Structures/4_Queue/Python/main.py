from queue import Queue

# Criando Fila
fila = Queue()

# Verificando se a pilha está vazia
print(f"A fila está vazia? {'Sim' if fila.estaVazia() else 'Não'}")

# Adicionando elementos na fila
fila.enfileira(10)
print(f"Elemento {10} adicionado na fila.")
print(f"Elemento da frente da fila: {fila.frente()}")

# Verificando o tamanho da fila
print(f"Tamanho da fila: {fila.tamanhoFila()}")

# Adicionando elementos na fila
fila.enfileira(20)
print(f"Elemento {20} adicionado na fila.")
print(f"Elemento da frente da fila: {fila.frente()}")

# Removendo elemento da fila
print(f"Elemento {fila.desenfileira()} removido da fila.")
print(f"Elemento da frente da fila: {fila.frente()}")
