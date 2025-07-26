#include<bits/stdc++.h>
using namespace std;

class CircularQueue {
    int *arr;
    int frontidx;
    int capacity;
    int currentSize;

public:
    CircularQueue(int size) {
        this->capacity = size;
        cout << "Constructor is called: " << size << endl;
        arr = new int[size];
        frontidx = 0;
        currentSize = 0;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    void push(int data) {
        if (currentSize == capacity) {
            cout << "Circular Queue is full" << endl;
            return;
        }
        int rear = (frontidx + currentSize) % capacity;
        arr[rear] = data;
        currentSize++;
    }

    int pop() {
        if (currentSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int res = arr[frontidx];
        frontidx = (frontidx + 1) % capacity;
        currentSize--;
        return res;
    }

    int getfront() {
        if (currentSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[frontidx];
    }

    int getRear() {
        if (currentSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int rear = (frontidx + currentSize - 1) % capacity;
        return arr[rear];
    }

    bool isEmpty() {
        return currentSize == 0;
    }

    bool isFull() {
        return currentSize == capacity;
    }
};

int main() {
    CircularQueue qe(3);
    qe.push(2);
    qe.push(3);
    qe.push(4);
    cout << "Front: " << qe.getfront() << endl;
    cout << "Rear: " << qe.getRear() << endl;

    qe.push(5); // Will show "Queue is full"

    cout << "Popped: " << qe.pop() << endl;
    cout << "New Front: " << qe.getfront() << endl;

    qe.push(5); // Now it will work
    cout << "Rear after pushing 5: " << qe.getRear() << endl;
}
