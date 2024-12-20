class HashTable:

     # Inicializa a tabela com tamanho 100 e com todos os valores como -1
    def __init__(self):
        self.MAX = 100  # Tamanho máximo da tabela
        self.arr = [-1 for _ in range(self.MAX)]  # Inicializa a tabela com -1 para indicar que está vazia


    # Função que calcula o índice hash para uma chave dada
    def get_hash(self, key):
        hashvalue = 0  # Inicializa o valor hash em zero
        for char in key:  # Adiciona o valor ASCII do caractere atual ao hashvalue
            hashvalue += ord(char)
        return hashvalue % self.MAX
    
    # Encontra um índice livre usando sondagem linear.
    def _linear_probe(self, index):
        original_index = index
        while self.arr[index] != -1:  # Verifica se o índice está ocupado
            index = (index + 1) % self.MAX
            if index == original_index:  # Voltou ao índice original
                return None
        return index

    # Função que insere um valor na tabela
    def insert(self, key, value):
        index = self.get_hash(key)

        # Usa a sondagem linear para encontrar um índice livre
        free_index = self._linear_probe(index)
        if free_index is not None:
            self.arr[free_index] = (key, value)  # Armazena a tupla (chave, valor) na tabela
        else:
            raise Exception("Tabela hash cheia!")
        
# Função que busca um valor na tabela
    def search(self, key):
        index = self.get_hash(key)
        original_index = index
        
        while self.arr[index] != -1:
            if self.arr[index] != -2 and self.arr[index][0] == key:  # Verifica a chave armazenada
                return self.arr[index][1]  # Retorna o valor associado à chave
            index = (index + 1) % self.MAX
            if index == original_index:  # Voltou ao índice original
                break
        
        return "Não Encontrado"  # Chave não encontrada
    
    # Função que remove um valor da tabela
    def delete(self, key):
        index = self.get_hash(key)
        original_index = index
        
        while self.arr[index] != -1:
            if self.arr[index] != -2 and self.arr[index][0] == key:  # Verifica a chave armazenada
                self.arr[index] = -2  # Marca como removido
                return True
            index = (index + 1) % self.MAX
            if index == original_index:
                break
        
        return False  # Chave não encontrada
    
    # Função que imprime a tabela
    def __str__(self):
        result = []
        for index, item in enumerate(self.arr):
            if item != -1:
                if item != -2:  # Ignora os índices marcados como removidos
                    result.append(f"Index {index}: {item[0]} -> {item[1]}")
                else:
                    result.append(f"Index {index}: -2 (removido)")
        return "\n".join(result)
