
use crate::node::Node;

pub struct LinkedList {
    pub head: Option<Box<Node>>,
}

impl LinkedList {
    pub fn new() -> Self {
        LinkedList { head: None }
    }

    pub fn append(&mut self, data: i32) {
        let new_node = Box::new(Node::new(data));
        let mut current = &mut self.head;
        while let Some(ref mut node) = *current {
            current = &mut node.next;
        }
        *current = Some(new_node);
    }

    pub fn print(&self) {
        let mut current = &self.head;
        while let Some(node) = current {
            println!("{}", node.data);
            current = &node.next;
        }
    }
}