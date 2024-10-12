pub struct HashTable {
    items: Vec<Vec<(String, i32)>>,
    size: i32,
}

impl HashTable {
    pub fn new(size: i32) -> Self {
        HashTable {
            items: vec![Vec::new(); size as usize],
            size,
        }
    }
}