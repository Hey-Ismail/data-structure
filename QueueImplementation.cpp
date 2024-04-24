#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Queue
{
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    bool isFull()
    {
        return (rear == MAX_SIZE - 1);
    }

    void enqueue(int element)
    {
        if (isFull())
        {
            cout << "Queue is full. Cannot enqueue element " << element << ".\n";
            return;
        }
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = element;
        cout << "Enqueued " << element << " into the queue.\n";
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue element. \n";
            return -1;
        }
        int dequeuedElement = arr[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
        cout << "Dequeued " << dequeuedElement << " from the queue.\n";
        return dequeuedElement;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Peek operation failed. \n";
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    Queue queue;

    queue.enqueue(5);
    queue.enqueue(10);
    queue.enqueue(15);

    cout << "Front element of the queue: " << queue.peek() << endl;

    queue.dequeue();
    queue.dequeue();

    cout << "Front element of the queue after dequeue: " << queue.peek() << endl;

    queue.dequeue();
    queue.dequeue();

    return 0;
}
