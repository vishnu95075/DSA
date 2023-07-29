#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

void traverse(struct Node *head) {
    int t = 1;
    while (head) {
        printf("%d --> %d \n", t++, head->data);
        head = head->next;
    }
}

struct Node *reverseLinklist(struct Node *head) {
    struct Node *cur, *prev, *nex;
    // mark root node as current node and prev node as null iniially
    cur = head;
    prev = NULL;
    // while nex node not become null

    while (nex != NULL) {
        // storing the next node
        nex = cur->next;               //   1   2    3 
        // changint the pointer of current node
        // instead of next it will point to the previous node
        cur->next = prev;
        // updating the pointer values
        // making the current node as previous node
        prev = cur;
        // next node as current node
        cur = nex;
    }



    // at the end head points to the head of the reverse node
    // return it
    head = prev;
    return head;
}

int main() {
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 2;

    struct Node *h1 = (struct Node *)malloc(sizeof(struct Node));
    h1->data = 9;

    struct Node *h2 = (struct Node *)malloc(sizeof(struct Node));
    h2->data = 5;

    struct Node *h3 = (struct Node *)malloc(sizeof(struct Node));
    h3->data = 8;

    head->next = h1;  //      head <- h1 <- h2 <- h3
    h1->next = h2;    //     head -> h1 -> h2 -> h3
    h2->next = h3;
    h3->next = NULL;

    traverse(head);
    printf("After Travese \n");
    traverse(reverseLinklist(head));

    return 0;
}