#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node* newNode(int data);
void connectNode(struct Node* node, struct Node* nextNode);
void printList(struct Node* head);

#endif // LINKEDLIST_H
