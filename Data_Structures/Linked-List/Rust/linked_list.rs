
use crate::node::Node;

pub struct LinkedList {
    pub head: Option<Box<Node>>,
}

impl LinkedList {
    pub fn new() -> Self {
        LinkedList { head: None }
    }

    // Método para adicionar um novo nó no final da lista
    pub fn append(&mut self, data: i32) {
        let new_node = Box::new(Node::new(data));
        let mut current = &mut self.head;
        while let Some(ref mut node) = *current {
            current = &mut node.next;
        }
        *current = Some(new_node);
    }

    // Método para adicionar um novo nó no início da lista
    pub fn prepend(&mut self, data: i32) {
        let mut new_node = Box::new(Node::new(data));
        new_node.next = self.head.take();
        self.head = Some(new_node);
    }

    // Método para adicionar um novo nó em uma posição específica
    pub fn insert(&mut self, data: i32, position: i32) {
        let mut new_node = Box::new(Node::new(data));
        let mut current = &mut self.head;
        let mut index = 0;
        while let Some(ref mut node) = *current {
            if index == position {
                new_node.next = node.next.take();
                node.next = Some(new_node);
                break;
            }
            current = &mut node.next;
            index += 1;
        }
    }

    // Método para remover um nó da lista
    // pub fn remove(&mut self, data: i32) {
    //     let mut current = &mut self.head;
    //     while let Some(ref mut node) = *current {
    //         if node.data == data {
    //             *current = node.next.take();
    //             break;
    //         }
    //         current = &mut node.next;
    //     }
    // }

    pub fn remove(&mut self, data: i32) {
        let mut current = &mut self.head;
        let mut found = false;
    
        // Percorre a lista enquanto houver nós e o nó a ser removido não for encontrado
        while let Some(ref mut node) = current {
            if node.data == data {
                // Se os dados correspondem, atualiza a cabeça da lista para o próximo nó
                *current = node.next.take();
                found = true; // Indica que o nó foi encontrado e removido
                break; // Sai do loop após remover o nó
            } else {
                // Se os dados não correspondem, atualiza a referência para apontar para o próximo nó
                current = &mut node.next;
            }
        }
    
        if !found {
            println!("Erro: O elemento a ser removido não foi encontrado na lista.");
        }
    }
    
    

    // Método para retornar o tamanho da lista
    pub fn size(&self) -> i32 {
        let mut current = &self.head;
        let mut size = 0;
        while let Some(ref node) = *current {
            size += 1;
            current = &node.next;
        }
        size
    }

    // Método para imprimir a lista
    pub fn print(&self) {
        let mut current = &self.head;
        while let Some(node) = current {
            println!("{}", node.data);
            current = &node.next;
        }
    }
}