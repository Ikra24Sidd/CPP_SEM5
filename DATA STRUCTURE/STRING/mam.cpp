#include<iostream>

using namespace std;

class CircularQueue {
private:
  int front;
  int rear;
  int arr[5];
  int itemCount;

public:
  CircularQueue() {
    front = -1;
    rear = -1;
    itemCount = 0;
  }

  void enqueue(int val) {
    if ((rear + 1) % 10 == front) {
      cout << "Service request is full" << endl;
      return;
    } else if (front == -1 && rear == -1) {
      rear = 0;
      front = 0;
      arr[rear] = val;

    } else {
      rear = (rear + 1) % 5;
      arr[rear] = val;

    }
    cout << "Request added successfully";
    itemCount += 1;

  }

  int dequeue() {
    int x = 0;
    if (front == -1 && rear == -1) {
      cout << "No more request to process" << endl;
      return x;
    } else if (rear == front) {
      x = arr[rear];
      rear = -1;
      front = -1;
      itemCount--;
      return x;
    } else {
      cout << "Request processed: ";
      x = arr[front];
      //arr[front] = 0;
      front = (front + 1) % 5;
      itemCount--;
      return x;
    }
  }

  void display() {
    cout << "All requests in the Queue are - " << endl;
    for (int i = 0; i < itemCount; i++) {
      cout << arr[i] << "  ";
    }
  }

};

int main() {
  CircularQueue q1;
  int value, option;

  do {
    cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;
    cout << "3. display()" << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cin >> value;
      q1.enqueue(value);
      break;
    case 2:
      cout << q1.dequeue();
      break;
    case 3:
      q1.display();
      break;
    default:
      cout << "Enter valid Option" << endl;
    }

  } while (option != 0);

  return 0;
}

