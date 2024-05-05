use std::io::{self, Write};


pub struct Stack {
    pub items: Vec<i32>,
    topo: i32,
    qtd: i32,
}

impl Stack{

    // Construtor da pilha
    pub fn new() -> Self {
        Stack {
            items: Vec::new(),
            topo: -1,
            qtd: 0, 
        }
    }

    // Método para adicionar um novo elemento no topo da pilha
    pub fn empilha(&mut self, data: i32) {
        self.items.push(data);
        self.topo = data;
        self.qtd += 1;
    }

    // Método para remover o elemento do topo da pilha
    pub fn desempilha(&mut self) -> i32{
        if !self.qtd > 0 {
            return -1;
        } 

        let elemento_removido = self.items.pop();
        self.topo = self.items[self.qtd - 1];
        self.qtd -= 1;

        return elemento_removido;
    }

    // Método para retornar o elemento do topo da pilha
    pub fn topo_elemento(&self) -> i32 {
        return self.topo;
    }

    // Método para retornar o tamanho da pilha
    pub fn tamanho(&self) -> i32 {
        return self.qtd;
    }

    // Método para verificar se a pilha está vazia
    pub fn esta_vazia(&self) -> bool {
        return self.qtd == 0;
    }

}