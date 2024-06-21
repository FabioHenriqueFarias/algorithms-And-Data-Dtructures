class Queue():

    # Construtor da classe
    def __init__(self):
        self.items = []

    # Função para verificar se a fila está vazia
    def estaVazia(self):
        return self.items == []
    
    # Função para adicionar um novo elemento na fila
    def enfileira(self, item):
        self.items.insert(0, item)

    # Função para remover um elemento da fila
    def desenfileira(self):
        return self.items.pop()
    
    # Função para retornar o tamanho da fila
    def tamanhoFila(self):
        return len(self.items)
    
    # Função para retornar o primeiro elemento da fila
    def frente(self):
        return self.items[len(self.items)-1]