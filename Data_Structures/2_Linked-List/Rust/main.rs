mod node;
mod linked_list;

use linked_list::LinkedList;

fn main() {
    let mut list = LinkedList::new();
    list.append(1);
    list.append(2);
    list.append(3);

    list.print();

    list.prepend(9);
    list.prepend(5);

    list.print();
    
    list.remove(9);

    println!("Lista Encadeada Tamanho: {}", list.size());

    list.insert(7, 2);

    list.print();
}
