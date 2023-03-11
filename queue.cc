#include <iostream>
using namespace std;
class Queue
{
public:
    int size;
    int *arr;
    int rear;
    int front;
    Queue(int s)
    {
        size = s;
        arr = new int[size];
        rear = 0;
        front = 0;
    }
    void push(int element)
    {
        if (rear == size - 1)
        {
            cout << "Full" << endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }
    void pop()
    {
        if (front == rear)
        {
            cout << "Empty" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                rear = 0;
                front = 0;
            }
        }
    }
    int fron()
    {
        if (front == rear)
        {
            cout << "Empty" << endl;
        }
        else
        {
            return arr[front];
        }
    }
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Queue q(5);
    q.push(1);
    q.push(2);
    q.pop();
    q.pop();
    cout << q.isEmpty() << endl;
    cout << q.fron();
}