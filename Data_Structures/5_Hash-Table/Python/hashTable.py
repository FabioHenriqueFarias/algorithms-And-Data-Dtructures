class HashTable:

    # Inicializa a tabela com tamanho 100 e com todos os valores como "-1"
    def __init__(self):
        self.MAX = 100  # Tamanho máximo da tabela
        self.arr = ["-1" for _ in range(self.MAX)]  # Inicializa a tabela com "-1" para indicar que está vazia
        self.count = 0


    # Função que calcula o índice hash para uma chave dada
    def get_hash(self, key):
        
        hashvalue = 0 # Inicializa o valor hash em zero

        for char in key:   # Adiciona o valor ASCII do caractere atual ao hashvalue
            hashvalue += ord(char)
        return hashvalue % self.MAX
    
    # Encontra um índice livre usando sondagem linear.
    def _linear_probe(self, index):    
        original_index = index
        while self.arr[index] != "-1":
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
            self.arr[free_index] = value  # Armazena o valor na tabela
        else:
            raise Exception("Tabela hash cheia!")
        
    # Função que busca um valor na tabela
    def search(self, key):
        index = self.get_hash(key)
        original_index = index
        
        while self.arr[index] != "-1":
            if self.arr[index] == key:
                return self.arr[index]
            index = (index + 1) % self.MAX
            if index == original_index:  # Voltou ao índice original
                break
        
        return None  # Chave não encontrada
    
    # Função que remove um valor da tabela
    def delete(self, key):
        """Remove um par chave-valor da tabela."""
        index = self.get_hash(key)
        original_index = index
        
        while self.arr[index] != "-1":
            if self.arr[index] == key:
                self.arr[index] = "-1"  # Marca como removido
                return True
            index = (index + 1) % self.MAX
            if index == original_index:
                break
        
        return False  # Chave não encontrada
    
    # Função que imprime a tabela
    def __str__(self):
        return str([item for item in self.arr if item != "-1"])