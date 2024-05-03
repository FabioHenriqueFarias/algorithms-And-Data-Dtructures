class Stack:

    # Construtor
    def __init__(self):
        self.items = []
        self.topo = -1
        self.qtd = 0
    
    # Método para adicionar um novo elemento no topo da pilha
    def empilha(self, item):
        self.items.append(item)
        self.topo = item
        self.qtd += 1

    # Método para remover o elemento do topo da pilha
    def desempilha(self):
        if self.estaVazia():
            return None
        elemento_removido = self.items.pop()
        self.qtd -= 1

        if self.estaVazia():
                self.topo = -1  
        else:
            self.topo = self.items[-1]  

        return elemento_removido
    
    # Método para verificar se a pilha está vazia
    def estaVazia(self):
        return self.qtd == 0
    
    # Método para retornar o elemento do topo da pilha
    def topoElemento(self):
        return self.topo
    
    # Método para retornar a quantidade de elementos na pilha
    def tamanho(self):
        return self.qtd