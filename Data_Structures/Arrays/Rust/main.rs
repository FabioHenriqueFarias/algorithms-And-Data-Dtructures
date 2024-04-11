use crate::array::Array;

mod array;

fn main(){
    let mut array = Array::new();
    array.adicionar_elemento_array_fim(5);
    array.adicionar_elemento_array_fim(8);
    array.adicionar_elemento_array_fim(9);
    array.adicionar_elemento_array_fim(87);
    array.adicionar_elemento_array_inicio(2);
    array.adicionar_elemento_array(774,2);

    array.print_array();

    println!("--------------------------------------------");

    array.remover_elemento_inicio();
    array.remover_elemento_fim();
    array.remover_elemento(2);

    println!("{:?}", array.buscar_elemento(2));
    println!("{:?}", array.tamanho_array());

    array.print_array();

    array.excluir_array();

    array.print_array();

}