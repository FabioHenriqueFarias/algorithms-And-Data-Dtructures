
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


    pub fn remove(&mut self, value: i32) {
        let mut prev: Option<&mut Box<Node>> = None;
        let mut curr = self.head.as_mut();

        while let Some(ref mut node) = curr {
            if node.data == value {
                if prev.is_none() {
                    // Removing head node
                    self.head = node.next.take();
                } else {
                    // Removing non-head node
                    prev.unwrap().next = node.next.take();
                }

                // Deallocate the removed node's memory (optional for efficiency)
                unsafe {
                    // Option 1: Using Box::dealloc (potentially unsafe)
                    Box::dealloc(*node);

                    // Option 2: Using mem::forget (safer, but requires understanding)
                    // mem::forget(*node); // Consider using this for safety
                }

                return;
            }
            prev = Some(curr);
            curr = curr.as_mut()?.next.as_mut();
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