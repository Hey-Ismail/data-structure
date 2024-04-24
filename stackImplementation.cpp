#include <iostream>
using namespace std;
#define MAX_SIZE 100
class Stack
{
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == MAX_SIZE - 1;
    }

    void push(int element)
    {
        if (!isFull())
        {
            arr[++top] = element;
        }
    }

    int pop()
    {
        if (!isEmpty())
        {
            return arr[top--];
        }
        return -1;
    }

    int peek()
    {
        if (!isEmpty())
        {
            return arr[top];
        }
        return -1;
    }
};

int main()
{
    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);

    cout << "Top element of the stack: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    cout << "Top element of the stack after popping: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    return 0;
}
