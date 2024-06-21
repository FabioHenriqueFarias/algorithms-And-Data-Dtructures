pub struct Queue {
    items: Vec<i32>,
}


impl Queue {
    pub fn new() -> Self {
        Queue { items: Vec::new() }
    }

    pub fn enfileira(&mut self, data: i32) {
        self.items.push(data);
    }

    pub fn desenfileira(&mut self) -> Option<i32> {
        if self.items.is_empty() {
            return None;
        }
        Some(self.items.remove(0))
    }

    pub fn frente(&self) -> Option<&i32> {
        self.items.first()
    }

    pub fn tamanho_fila(&self) -> i32 {
        self.items.len() as i32
    }

    pub fn esta_vazia(&self) -> bool {
        self.items.is_empty()
    }
}