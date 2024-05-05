mod stack;

use stack::Stack;

fn main() {
    let mut stack = Stack::new();
    stack.empilha(1);
    stack.empilha(2);
    stack.empilha(3);

    println!("Top Element: {}", stack.topo_elemento());

    stack.pop();

    println!("Top Element: {}", stack.topo_elemento());

    println!("Stack Size: {}", stack.tamanho());
}