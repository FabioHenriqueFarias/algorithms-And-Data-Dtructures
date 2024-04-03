use std::fmt::Debug; 

pub struct Array<T>{
    elements: Vec<T>,
}

impl<T> Array<T> where T: Debug {

    //Criação de uma instância
    pub fn new() -> Self{
        Array { elements: Vec::new() }
    }

    pub fn remover_elemento(&mut self, posicao: usize) -> Option<T>{
        if posicao < self.elements.len() {
            Some(self.elements.remove(posicao))
        }else{
            None
        }
    }

    pub fn remover_elemento_inicio(&mut self) -> Option<T> {
        if self.elements.is_empty() {
            None
        } else {
            Some(self.elements.remove(0))
        }
    }

    pub fn remover_elemento_fim(&mut self) -> Option<T> {
        self.elements.pop()
    }
    
    pub fn adicionar_elemento_array_fim(&mut self, item: T) {
        self.elements.push(item)
    }

    pub fn adicionar_elemento_array_inicio(&mut self, item: T){
        self.elements.insert(0, item);
    }

    pub fn adicionar_elemento_array(&mut self, item: T, posicao: usize) -> Option<&T> {
        if posicao <= self.elements.len() {
            self.elements.insert(posicao, item);
            Some(&self.elements[posicao]) 
        } else {
            None 
        }
    }

    pub fn print_array(&self){
        println!("Conteúdo da Array:");
        for element in &self.elements {
            println!("{:?}", element);
        }
    }
    
}