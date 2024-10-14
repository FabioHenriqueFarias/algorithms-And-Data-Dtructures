pub struct HashTable {
    items: Vec<Vec<(String, i32)>>,
    size: i32,
    count: i32,
}

impl HashTable {
    pub fn new(size: i32) -> Self {
        HashTable {
            items: vec![Vec::new(); size as usize],
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
    pub fn insert(&mut self, key: String, value: i32) {

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
}