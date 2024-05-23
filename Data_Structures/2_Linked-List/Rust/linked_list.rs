use crate::node::Node;

use std::io::{self, Write};

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
    pub fn remove(&mut self, value: i32) {
        let mut curr = &mut self.head;
        while let Some(mut boxed_node) = curr.take() {
            if boxed_node.data == value {
                *curr = boxed_node.next.take();
            } else {
                let next = boxed_node.next.take();
                *curr = Some(boxed_node);
                curr = &mut curr.as_mut().unwrap().next;
                *curr = next;
            }
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
        print!("Lista Encadeada: ");
        io::stdout().flush().unwrap();
        while let Some(node) = current {
            print!("{}, ", node.data);
            io::stdout().flush().unwrap();
            current = &node.next;
        }
        println!();
    }
}