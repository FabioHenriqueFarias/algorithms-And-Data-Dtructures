
from node import Node

class LinkedList:

    # Construtor
    def __init__(self):
        self.head = None

    # Método para adicionar um novo nó no final da lista
    def adicionarFim(self, data):
        newNode = Node(data) 

        if not self.head:
            self.head = newNode
            return

        current = self.head

        while current.next:
            current = current.next
        current.next = newNode

    # Método para adicionar um novo nó no início da lista
    def adicionarInicio(self, data):
        newNode = Node(data) 
        newNode.next = self.head
        self.head = newNode

    # Método para adicionar um novo nó em uma posição específica
    def inserir(self, data, posicao):
        if posicao == 0:
            self.adicionarInicio(data)
            return
        if posicao >= self.tamanho():
            self.adicionarFim(data)
            return

        newNode = Node(data) # Cria um novo nó com os dados fornecidos
        current = self.head
        for i in range(posicao - 1):
            current = current.next
        newNode.next = current.next
        current.next = newNode

    # Método para remover um nó da lista
    def remover(self, data):
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
    def tamanho(self):
        count = 0
        current = self.head
        while current:
            count += 1
            current = current.next
        return count    
    
    # Método para imprimir os elementos da lista
    def Exibir(self):
        current = self.head
        while current:
            print(current.data)
            current = current.next
        print()

