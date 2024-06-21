mod queue;

use queue::Queue;

fn main() {

    // Criação de uma nova fila 
    let mut fila = Queue::new();
    println!("A fila está vazia? {}", if fila.esta_vazia() { "sim" } else { "não" });

    // Adicionando elementos na fila
    fila.enfileira(10);
    println!("Elemento {} adicionado na fila", 10);
    println!("Elemento na frente da fila: {:?}", fila.frente());
    
    // Verificando tamanho da fila
    println!("Tamanho da fila: {:?}", fila.tamanho_fila());
    
    // Adicionando mais elementos na fila
    fila.enfileira(20);
    println!("Elemento {} adicionado na fila", 20);
    println!("Elemento na frente da fila: {:?}", fila.frente());

    // Removendo elementos da fila
    println!("Elemento {:?} removido da fila", fila.desenfileira().unwrap());
    println!("Elemento na frente da fila: {:?}", fila.frente());
}