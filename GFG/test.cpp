#include <malloc.h>

#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left, *rigth;
};

void traverse(struct Node *head) {
    int t = 1;
    while (head) {
        cout << t << " Left Data is : " << head->data << endl;
        head = head->left;
        t++;
    }
}

int main() {
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 98;
    head->left = NULL;
    cout << head->data << endl;
    traverse(head);
}