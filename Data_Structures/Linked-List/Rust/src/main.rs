mod node;
mod linked_list;

use linked_list::LinkedList;

fn main() {
    let mut list = LinkedList::new();
    list.append(1);
    list.append(2);
    list.append(3);

    println!("Lista Encadeada:");
    list.print();
}
