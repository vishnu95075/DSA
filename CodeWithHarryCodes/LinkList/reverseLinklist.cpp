#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void insertNewNode(struct Node *head, int data) {
    struct Node *temp = head, *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
}

void travese(struct Node *head) {
    while (head) {
        cout << "data is " << head->data;
        head = head->next;
    }
}

int main() {
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    root->data = 9;
    root->next = nullptr;

    insertNewNode(root, 4);
    insertNewNode(root, 344);

    travese(root);
    return 0;
}