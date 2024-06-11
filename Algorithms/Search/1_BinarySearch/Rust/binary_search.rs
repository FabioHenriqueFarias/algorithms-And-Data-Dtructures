fn binary_search(arr: Vec<i32>, target: i32) -> i32 {
    let mut left = 0; 
    let mut right = arr.len() as i32 - 1;
    while left <= right {
        let mid = left + (right - left) / 2;
        if arr[mid as usize] == target {
            return mid;
        } else if arr[mid as usize] < target {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    -1
}

fn main() {
    let arr = vec![1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    let target = 5;
    let result = binary_search(arr, target);
    println!("Index of target: {}", result);
}
 
