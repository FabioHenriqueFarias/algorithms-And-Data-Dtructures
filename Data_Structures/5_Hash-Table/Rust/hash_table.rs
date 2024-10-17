pub struct HashTable {
    items: Vec<Option<(String, String)>>,
    size: usize,
    count: usize,
}

impl HashTable {
    pub fn new(size: usize) -> Self {
        HashTable {
            items: vec![None; size],
            size,
            count: 0,
        }
    }

    // Função de Hash primária
    fn hash1(&self, key: &str) -> usize {
        let mut hash_value = 0;

        for char in key.chars() {  // Adiciona o valor ASCII do caractere atual ao hash_value
            hash_value += char as usize; // Converte o caractere para seu valor ASCII
        }

        hash_value % self.size as usize
    }


    // Função de Hash secundária
    fn hash2(&self, key: &str) -> usize {
      let mut hash_value = 0;

      for char in key.chars() {  
          hash_value = (hash_value * 31 + char as usize) % self.size as usize; // A multiplicação por 31(número primo) é uma técnica comum em funções de hash que ajuda a dispersar os valores e minimizar colisões.
      }

      1 + hash_value % (self.size as usize - 1) // Evita que o valor seja 0 para não gerar ciclos
    }

    // Adiciona um novo elemento na tabela hash
    pub fn insert(&mut self, key: String, value: String) {

        if self.count >= self.size / 2 {
            println!("Tabela cheia, não é possível inserir mais elementos.");
            return;
        }

        let mut index = self.hash1(&key);
        let step = self.hash2(&key);

        while self.items[index].is_some() {
            if let Some((existing_key, _)) = &self.items[index] {
                if *existing_key == key {
                     // Atualiza o valor se a chave já existe
                     self.items[index] = Some((key, value));
                     return;
                }
            }

            index = (index + step) % self.size; // Aumenta o índice com base na segunda função de hash
        }

        self.items[index] = Some((key, value));
        self.count += 1;
    }

    // Retorna o valor associado a uma chave
    pub fn search(&self, key: &str) -> Option<String> {
        let mut index = self.hash1(key);
        let step = self.hash2(key);

        while self.items[index].is_some() {
            if let Some((existing_key, value)) = &self.items[index] {
                if *existing_key == key {
                    return Some(value.clone()); // Retorna um clone do valor, para evitar que o valor original seja movido
                }
            }

            // Move para o próximo índice usando a segunda função de hash
            index = (index + step) % self.size;
        }

        format!("Chave '{}' não encontrada.", key).into() // Retorna mensagem se não encontrado
    }

    // Remove um elemento da tabela hash
    pub fn remove(&mut self, key: &str) {
        let mut index = self.hash1(key);
        let step = self.hash2(key);

        while self.items[index].is_some() {
            if let Some((existing_key, _)) = &self.items[index] {
                if *existing_key == key {
                    self.items[index] = None;
                    self.count -= 1;
                    return;
                }
            }

            // Move para o próximo índice usando a segunda função de hash
            index = (index + step) % self.size;
        }
    }

    // Limpa a tabela hash
    pub fn free_table(&mut self) {
        for i in 0..self.size {
            self.items[i] = None;
        }
        self.count = 0;
    }

    // Exibe a tabela hash
    pub fn print_table(&self) {
        for i in 0..self.size {
            if let Some((key, value)) = &self.items[i] {
                print!("Index {}: {} -> {}\n", i, key, value);
            } else {
                println!("Index {}: -1 (vazio)", i);
            }
        }
    }

}