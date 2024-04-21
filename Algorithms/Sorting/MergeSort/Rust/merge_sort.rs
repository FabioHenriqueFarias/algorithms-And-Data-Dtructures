fn main() {
 
}

fn mergeSort(arr: Vec<i32>) -> Vec<i32> {
    if arr.len() <= 1 {
        return arr;
    }

    let midle = arr.len() / 2;
    let mut left = Vec::new();
    let mut right = Vec::new();

    for i in 0..mid {
        left.push(arr[i]);
    }

    for i in mid..arr.len() {
        right.push(arr[i]);
    }

    left = mergeSort(left);
    right = mergeSort(right);
    return merge(left, right);
}