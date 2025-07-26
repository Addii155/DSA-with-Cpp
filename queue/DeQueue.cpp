#include <bits/stdc++.h>
using namespace std;

class Dequeue {
    int *arr;
    int frontidx;
    int capacity;
    int currentSize;

public:
    Dequeue(int size) {
        this->capacity = size;
        arr = new int[size];
        frontidx = 0;
        currentSize = 0;
    }

    ~Dequeue() {
        delete[] arr;
    }

    void pushFront(int data) {
        if (currentSize == capacity) {
            cout << "Dequeue is full" << endl;
            return;
        }
        frontidx = (frontidx - 1 + capacity) % capacity;
        arr[frontidx] = data;
        currentSize++;
    }

    void pushRear(int data) {
        if (currentSize == capacity) {
            cout << "Dequeue is full" << endl;
            return;
        }
        int rear = (frontidx + currentSize) % capacity;
        arr[rear] = data;
        currentSize++;
    }

    int popfront() {
        if (currentSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int res = arr[frontidx];
        frontidx = (frontidx + 1) % capacity;
        currentSize--;
        return res;
    }

    int poprear() {
        if (currentSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int rear = (frontidx + currentSize - 1) % capacity;
        int res = arr[rear];
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
    Dequeue dq(3);

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushFront(5);  // Queue: [5, 10, 20]

    cout << "Front: " << dq.getfront() << endl; // 5
    cout << "Rear: " << dq.getRear() << endl;   // 20

    dq.poprear();  // removes 20
    dq.popfront(); // removes 5

    dq.pushRear(30);
    cout << "New Front: " << dq.getfront() << endl; // 10
    cout << "New Rear: " << dq.getRear() << endl;   // 30
}
