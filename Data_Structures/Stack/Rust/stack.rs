pub struct Stack {
    pub items: Vec<i32>,
    topo: Option<i32>,
    qtd: usize,
}

impl Stack{

    // Construtor da pilha
    pub fn new() -> Self {
        Stack {
            items: Vec::new(),
            topo: None,
            qtd: 0, 
        }
    }

    // Método para adicionar um novo elemento no topo da pilha
    pub fn empilha(&mut self, data: i32) {
        self.items.push(data);
        self.topo = Some(data);
        self.qtd += 1;
    }

    // Método para remover o elemento do topo da pilha
    pub fn desempilha(&mut self) -> Option<i32>{
        if self.qtd == 0 {
            return None; 
        }

        let elemento_removido = self.items.pop();
        self.topo = self.items.last().cloned();  
        self.qtd -= 1;

        elemento_removido 
    }

    // Método para retornar o elemento do topo da pilha
    pub fn topo_elemento(&self) -> Option<i32> {
        return self.topo;
    }

    // Método para retornar o tamanho da pilha
    pub fn tamanho(&self) -> i32 {
        return self.qtd as i32;
    }

    // Método para verificar se a pilha está vazia
    pub fn esta_vazia(&self) -> bool {
        return self.qtd == 0;
    }

}