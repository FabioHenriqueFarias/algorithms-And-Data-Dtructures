fn linear_search(arr: Vec<i32>, target: i32) -> i32 {
    for i in 0..arr.len() {
        if arr[i] == target {
            return i as i32;
        }
    }
    -1
}

fn main() {
    let arr = vec![1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    let target = 5;
    let result = linear_search(arr, target);
    println!("Índice do Elemento {}: {}", target, result);
}
