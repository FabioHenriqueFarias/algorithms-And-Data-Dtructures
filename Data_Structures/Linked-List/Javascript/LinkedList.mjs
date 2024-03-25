import Node from './Node.mjs';

export default class LinkedList {
    constructor() {
        this.head = null; // Inicialmente a lista está vazia
    }

    // Método para adicionar um novo nó no final da lista
    append(data) {
        const newNode = new Node(data); // Cria um novo nó com os dados fornecidos

        // Se a lista estiver vazia, o novo nó será o primeiro (head)
        if (!this.head) {
            this.head = newNode;
            return;
        }

        let current = this.head;
        // Percorre a lista até encontrar o último nó
        while (current.next) {
            current = current.next;
        }
        // Adiciona o novo nó como o próximo do último nó
        current.next = newNode;
    }

    // Método para imprimir os elementos da lista
    print() {
        let current = this.head;
        while (current) {
            console.log(current.data);
            current = current.next;
        }
    }
}