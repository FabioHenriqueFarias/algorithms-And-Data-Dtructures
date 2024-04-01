class Array:
    def __init__(self, tamanho):
        self.tamanho = tamanho
        self.array = self.criacaoArray()

    def criacaoArray(self):
        return [None] * self.tamanho

    def inserirElemento(self, elemento, posicao):
        if self.array[self.tamanho - 1] is not None:
            self.array = self.aumentarArray()

        for i in range(self.tamanho):
            if self.array[i] is None:
                self.array[i] = elemento
                return self.array

        # Se chegou aqui, significa que o array estava cheio e já foi aumentado
        self.array[posicao] = elemento
        return self.array


    
    def removerElemento(self, posicao):
        if posicao < 0 or posicao >= self.tamanho:
            return "Posição inválida"
        for i in range(posicao, self.tamanho - 1):
            self.array[i] = self.array[i + 1]
        self.array.pop() 
        return self.array
    
    def buscarElemento(self, elemento):
        for i in range(self.tamanho):
            if self.array[i] == elemento:
                return i
        return "Elemento não encontrado"
    
    def excluirArray(self):
        return self.array.clear()
    
    def exibirArray(self):
        for i in range(self.tamanho):
            if self.array[i] is not None:
                print("Indice " + str(i) + " : " + str(self.array[i]))


    def removerPrimeiroElemento(self):
        for i in range(0, self.tamanho - 1):
            self.array[i] = self.array[i + 1]
        self.array.pop()
        return self.array
    
    def aumentarArray(self):
        novo_tamanho = self.tamanho * 2
        novoArray = [None] * novo_tamanho

        for i in range(self.tamanho):
            novoArray[i] = self.array[i]

        self.array = novoArray
        self.tamanho = novo_tamanho
        return self.array 


    
