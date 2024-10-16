mod hash_table;

use hash_table::HashTable;

fn main() {

    // Criação de uma nova tabela hash
    let mut tabela_hash = HashTable::new(10);

    //Inserindo valores que causam colisão
    print!("Inserindo valores...\n");
    tabela_hash.insert("maria", "valor_maria");
    tabela_hash.insert("arim", "valor_ariam");
    tabela_hash.insert("Fernanda", "valor_fernanda");
    tabela_hash.insert("João", "valor_joao");

    // Mostrando o estado da tabela após inserções
    print!("\nEstado da tabela após inserções:\n");
    tabela_hash.print_table();

    // Buscando um valor
    print!("\nBuscando valor para a chave 'maria':\n", tabela_hash.search("maria"));

   
}