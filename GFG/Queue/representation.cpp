#include <bits/stdc++.h>
using namespace std;

class Queue {
   public:
    int front, rear, size;
    unsigned cap;
    int* arr;
};



Queue* createQueue(unsigned cap) {
    Queue* queue = new Queue();
    queue->cap = cap;
    queue->front = queue->size = 0;
    queue->rear = cap - 1;
    queue->arr = new int[(queue->cap * sizeof(int))];
    return queue;
}

int isFull(Queue* queue) {
    return (queue->size == queue->cap);
}

int isempty(Queue* queue) { return (queue->size == 0); }

void enqueue(Queue* queue, int item) {
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->cap;
    queue->arr[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << item << " enqueued to queue\n";
}

int dequeue(Queue* queue) {
    if (isempty(queue))
        return INT_MIN;
    int item = queue->arr[queue->front];
    queue->front = (queue->front + 1) % queue->cap;
    queue->size = queue->size - 1;
    return item;
}

int front(Queue* queue) {
    if (isempty(queue))
        return INT_MIN;
    return queue->arr[queue->front];
}
int rear(Queue* queue) {
    if (isempty(queue))
        return INT_MIN;
    return queue->arr[queue->rear];
}

int main() {
    Queue* queue = createQueue(1000);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    cout << dequeue(queue);
    cout << " dequeued from queue\n";
    cout << "Front item is " << front(queue) << endl;
    cout << "Rear item is " << rear(queue);
    return 0;
}
