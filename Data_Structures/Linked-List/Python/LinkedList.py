
from node import Node

class LinkedList:

    # Construtor
    def __init__(self):
        self.head = None

    # Método para adicionar um novo nó no final da lista
    def append(self, data):
        newNode = Node(data) # Cria um novo nó com os dados fornecidos

        # Se a lista estiver vazia, o novo nó será o primeiro (head)
        if not self.head:
            self.head = newNode
            return

        current = self.head
        # Percorre a lista até encontrar o último nó
        while current.next:
            current = current.next
        # Adiciona o novo nó como o próximo do último nó
        current.next = newNode

    # Método para adicionar um novo nó no início da lista
    def prepend(self, data):
        newNode = Node(data) # Cria um novo nó com os dados fornecidos

        # O próximo do novo nó será o atual head
        newNode.next = self.head
        # O novo nó será o novo head
        self.head = newNode

    # Método para adicionar um novo nó em uma posição específica
    def insert(self, data, posicao):
        if posicao == 0:
            self.prepend(data)
            return
        if posicao >= self.size():
            self.append(data)
            return

        newNode = Node(data) # Cria um novo nó com os dados fornecidos
        current = self.head
        for i in range(posicao - 1):
            current = current.next
        newNode.next = current.next
        current.next = newNode

    # Método para remover um nó da lista
    def remove(self, data):
        if self.head.data == data:
            self.head = self.head.next
            return

        current = self.head
        while current.next:
            if current.next.data == data:
                current.next = current.next.next
                return
            current = current.next

    # Método para retornar o tamanho da lista
    def size(self):
        count = 0
        current = self.head
        while current:
            count += 1
            current = current.next
        return count    
    
    # Método para imprimir os elementos da lista
    def print(self):
        current = self.head
        while current:
            print(current.data)
            current = current.next

