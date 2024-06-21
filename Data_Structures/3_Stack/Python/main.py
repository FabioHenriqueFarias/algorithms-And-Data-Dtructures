from stack import Stack

# Criando uma pilha 
pilha = Stack()

# Verificando se a pilha está vazia
print("A pilha está vazia? ", "Sim" if pilha.estaVazia() else "Não")

# Adicionando elementos na pilha
pilha.empilha(10)
print("Elemento do topo da pilha: ", pilha.topoElemento())

# Verificando tamanho da pilha
print("Tamanho da pilha: ", pilha.tamanho())

# Adicionando mais elementos na pilha
pilha.empilha(20)
print("Elemento do topo da pilha: ", pilha.topoElemento())

# Removendo o elemento do topo da pilha
print("Elemento removido do topo da pilha: ", pilha.desempilha())
print("Elemento do topo da pilha: ", pilha.topoElemento())
