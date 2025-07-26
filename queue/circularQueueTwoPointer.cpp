#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int size;
    int front;
    int rear;

public:
    CircularQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int result = arr[front];

        if (front == rear) {
            // Queue becomes empty after this pop
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return result;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }
};
int main() {
    CircularQueue q(3);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40); // Queue is full

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;

    q.pop();
    q.push(40); // Now it will insert

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
}
