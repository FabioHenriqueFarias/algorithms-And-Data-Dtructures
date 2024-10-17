mod hash_table;

use hash_table::HashTable;

fn main() {

    // Criação de uma nova tabela hash
    let mut tabela_hash = HashTable::new(10);

    //Inserindo valores que causam colisão
    print!("Inserindo valores...\n");
    tabela_hash.insert("maria".to_string(), "valor_maria".to_string());
    tabela_hash.insert("arim".to_string(), "valor_ariam".to_string());
    tabela_hash.insert("Fernanda".to_string(), "valor_fernanda".to_string());
    tabela_hash.insert("João".to_string(), "valor_joao".to_string());
    
    // Mostrando o estado da tabela após inserções
    print!("\nEstado da tabela após inserções:\n");
    tabela_hash.print_table();

    // Buscando um valor
    print!("\nBuscando valor para a chave 'maria': {:?}\n", tabela_hash.search("maria"));

    //Removendo "maria"
    print!("\nRemovendo 'maria'...\n");
    tabela_hash.remove("maria");

    // Mostrando o estado da tabela após remoção
    print!("\nEstado da tabela após remoção de 'maria':\n");
    tabela_hash.print_table();

    // Tentando buscar o valor removido
    print!("\nBuscando valor para a chave 'maria': {:?}\n", tabela_hash.search("maria"));
}