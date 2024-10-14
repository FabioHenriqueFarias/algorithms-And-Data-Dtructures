mod hash_table;

use hash_table::HashTable;

fn main() {

    // Criação de uma nova tabela hash
    let mut tabela_hash = HashTable::new(10);
    println!("Tabela hash criada com sucesso");

    // // Adicionando elementos na tabela hash
    // tabela_hash.adiciona("chave1".to_string(), 10);
    // println!("Elemento adicionado na tabela hash");

    // // Verificando tamanho da tabela hash
    // println!("Tamanho da tabela hash: {:?}", tabela_hash.tamanho_tabela());

    // // Adicionando mais elementos na tabela hash
    // tabela_hash.adiciona("chave2".to_string(), 20);
    // println!("Elemento adicionado na tabela hash");

    // // Removendo elementos da tabela hash
    // println!("Elemento removido da tabela hash: {:?}", tabela_hash.remove("chave1".to_string()));
}