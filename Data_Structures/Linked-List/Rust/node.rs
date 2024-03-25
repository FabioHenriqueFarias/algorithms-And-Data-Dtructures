pub struct Node {
    pub data: i32,
    pub next: Option<Box<Node>>,
}

impl Node {
    pub fn new(data: i32) -> Self {
        Node { data, next: None }
    }
}