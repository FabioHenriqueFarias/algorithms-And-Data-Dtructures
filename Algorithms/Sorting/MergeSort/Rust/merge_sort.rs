fn main() {
    let arr = vec![12, 11, 13, 5, 6, 7];
    let sorted_arr = merge_sort(arr);

    print!("Sorted array: ");
    for i in 0..sorted_arr.len() {
        print!("{}, ", sorted_arr[i]);
    }
}

fn merge_sort(arr: Vec<i32>) -> Vec<i32> {
    if arr.len() <= 1 {
        return arr;
    }

    let midle = arr.len() / 2;
    let mut left = Vec::new();
    let mut right = Vec::new();

    for i in 0..midle {
        left.push(arr[i]);
    }

    for i in midle..arr.len() {
        right.push(arr[i]);
    }

    left = merge_sort(left);
    right = merge_sort(right);
    return merge(left, right);
}

fn merge(left: Vec<i32>, right: Vec<i32>) -> Vec<i32> {
    let mut result = Vec::new();
    let mut left_index = 0;
    let mut right_index = 0;

    while left_index < left.len() && right_index < right.len() {
        if left[left_index] < right[right_index] {
            result.push(left[left_index]);
            left_index += 1;
        } else {
            result.push(right[right_index]);
            right_index += 1;
        }
    }

    while left_index < left.len() {
        result.push(left[left_index]);
        left_index += 1;
    }

    while right_index < right.len() {
        result.push(right[right_index]);
        right_index += 1;
    }

    return result;
}
 
