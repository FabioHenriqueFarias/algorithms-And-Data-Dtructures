class HashTable:

    # Inicializa a tabela com tamanho 100 e com todos os valores como "-1"
    def __init__(self):
        self.MAX = 100  # Tamanho máximo da tabela
        self.arr = ["-1" for _ in range(self.MAX)]  # Inicializa a tabela com "-1" para indicar que está vazia


    # Função que calcula o índice hash para uma chave dada
    def get_hash(self, key):
        
        hashvalue = 0 # Inicializa o valor hash em zero

        for char in key:   # Adiciona o valor ASCII do caractere atual ao hashvalue
            hashvalue += ord(char)
        return hashvalue % self.MAX
